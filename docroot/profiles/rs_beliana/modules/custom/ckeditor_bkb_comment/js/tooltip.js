(function ($) {
  Drupal.behaviors.ckeditorCommentTooltip = {
    attach: function (context, settings) {
      $(document).ready(function () {
        // Regular DOM elements (outside CKEditor)
        $('a.bkb-comment', context).each(function () {
          Drupal.behaviors.ckeditorCommentTooltip.setupTippy($(this));
        });

        // CKEditor instances (inside WYSIWYG)
        if (typeof CKEDITOR !== 'undefined') {
          for (const instanceName in CKEDITOR.instances) {
            const editor = CKEDITOR.instances[instanceName];

            // Avoid duplicate listeners
            if (!editor._bkbTooltipInitialized) {
              editor._bkbTooltipInitialized = true;

              editor.on('instanceReady', function () {
                // Delay to ensure content is loaded
                setTimeout(function () {
                  const body = editor.document.$.body;
                  const $links = $(body).find('a.bkb-comment');

                  $links.each(function () {
                    Drupal.behaviors.ckeditorCommentTooltip.setupTippy($(this));
                  });
                }, 100);
              });
            }
          }
        }
      });
    },
    setupTippy: function ($element, useShift = true) {
      const commentId = $element.attr('data-comment-id');
      if (!commentId) {
        return;
      }

      const element = $element.get(0);
      const ownerDoc = element.ownerDocument;
      const isInIframe = ownerDoc !== document;

      // Create tooltip container in root body
      const tooltipContainer = document.createElement('div');
      tooltipContainer.setAttribute('contenteditable', 'false');
      tooltipContainer.innerHTML = 'Loading...';
      tooltipContainer.addEventListener('click', function (e) {
        const href = e.target.getAttribute('href');
        if (href) {
          window.open(href, '_blank');
        }
      });
      document.body.appendChild(tooltipContainer);

      // Find iframe element if inside one
      let iframe = null;
      if (isInIframe) {
        const iframes = document.querySelectorAll('iframe');
        for (let i = 0; i < iframes.length; i++) {
          if (iframes[i].contentDocument === ownerDoc) {
            iframe = iframes[i];
            break;
          }
        }
      }

      // Configure Tippy options
      const tippyOptions = {
        content: tooltipContainer,
        allowHTML: true,
        trigger: 'manual',
        interactive: true,
        placement: 'bottom',
        theme: 'light-border',
        appendTo: () => document.body,
        onShow() {
          return $element.data('tooltip-loaded') === true;
        },
        delay: [0, 100],
      };

      // Add custom positioning for iframe elements
      if (isInIframe && iframe) {
        tippyOptions.getReferenceClientRect = () => {
          const iframeRect = iframe.getBoundingClientRect();
          const elemRect = element.getBoundingClientRect();
          return {
            top: iframeRect.top + elemRect.top,
            right: iframeRect.left + elemRect.right,
            bottom: iframeRect.top + elemRect.bottom,
            left: iframeRect.left + elemRect.left,
            width: elemRect.width,
            height: elemRect.height,
            x: iframeRect.left + elemRect.left,
            y: iframeRect.top + elemRect.top
          };
        };
        tippyOptions.popperOptions = {
          strategy: 'fixed'
        };
      }

      const tooltip = tippy(element, tippyOptions);

      // Track if cursor is over tooltip
      let isOverTooltip = false;
      let hideTimeout = null;

      element.addEventListener('mouseenter', (event) => {
        if (!useShift || (useShift && event.shiftKey)) {
          tooltip.show();
        }
      });

      element.addEventListener('mouseleave', () => {
        // Delay hiding to give time to move to tooltip
        hideTimeout = setTimeout(() => {
          if (!isOverTooltip) {
            tooltip.hide();
          }
        }, 100);
      });

      // When tooltip is shown, attach hover handlers
      tooltip.popper.addEventListener('mouseenter', () => {
        isOverTooltip = true;
        if (hideTimeout) {
          clearTimeout(hideTimeout);
        }
      });

      tooltip.popper.addEventListener('mouseleave', () => {
        isOverTooltip = false;
        tooltip.hide();
      });

      $.ajax({
        url: `/get_comment_text/${commentId}`,
        type: 'GET',
        dataType: 'json',
        success: function (data) {
          $element.data('tooltip-loaded', true);
          tooltipContainer.innerHTML = data?.commentText || 'No comment found.';
        },
        error: function () {
          tooltipContainer.innerHTML = 'Error loading comment.';
        }
      });
    }
  };
})(jQuery);
