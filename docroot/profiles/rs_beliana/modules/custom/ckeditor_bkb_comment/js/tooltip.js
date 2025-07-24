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

      // Create tooltip container inside same document as the target (iframe or
      // main doc)
      const tooltipContainer = ownerDoc.createElement('div');
      tooltipContainer.setAttribute('contenteditable', 'false');
      tooltipContainer.innerHTML = 'Loading...';

      // Needed for CKEditor
      tooltipContainer.addEventListener('click', function (e) {
        const href = e.target.getAttribute('href');
        if (href) {
          window.open(href, '_blank');
        }
      });

      ownerDoc.body.appendChild(tooltipContainer);

      const tooltip = tippy(element, {
        content: tooltipContainer,
        allowHTML: true,
        trigger: 'manual',
        interactive: true,
        placement: 'bottom',
        theme: 'light-border',
        appendTo: ownerDoc.body,
        onShow() {
          return $element.data('tooltip-loaded') === true;
        },
        delay: [0, 100],
      });

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
