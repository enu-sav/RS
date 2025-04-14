(function ($) {
  Drupal.behaviors.ckeditorCommentTooltip = {
    attach: function (context, settings) {
      $(document).ready(function () {
        $('a.bkb-comment', context).once('ckeditorCommentTooltip').each(function () {
          const element = this;
          const $element = $(element);
          const commentId = $element.attr('data-comment-id');

          if (!commentId) return;

          // Create a Tippy instance but keep it disabled until content is loaded
          const instance = tippy(element, {
            content: 'Loading...',
            allowHTML: true,
            trigger: 'mouseenter focus',
            interactive: true, // Keep tooltip open when hovering over it
            placement: 'bottom',
            theme: 'light-border',
            onShow(instance) {
              // Optional: prevent showing until content is available
              if (!$element.data('tooltip-loaded')) {
                return false;
              }
            }
          });

          // Fetch the comment text
          $.ajax({
            url: `/get_comment_text/${commentId}`,
            type: 'GET',
            dataType: 'json',
            success: function (data) {
              if (data && data.commentText) {
                $element.data('tooltip-loaded', true);
                instance.setContent(data.commentText);
              } else {
                instance.setContent('No comment found.');
              }
            },
            error: function () {
              instance.setContent('Error loading comment.');
            }
          });
        });
      });
    }
  };
})(jQuery);
