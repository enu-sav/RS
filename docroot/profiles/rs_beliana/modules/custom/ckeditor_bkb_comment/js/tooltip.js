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
    setupTippy: function ($element) {
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

      tippy(element, {
        content: tooltipContainer,
        allowHTML: true,
        trigger: 'mouseenter focus',
        interactive: true,
        placement: 'bottom',
        theme: 'light-border',
        appendTo: ownerDoc.body,
        onShow() {
          return $element.data('tooltip-loaded') === true;
        }
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
