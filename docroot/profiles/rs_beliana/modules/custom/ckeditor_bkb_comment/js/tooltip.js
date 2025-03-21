(function ($) {
  Drupal.behaviors.ckeditorCommentTooltip = {
    attach: function (context, settings) {
      $(document).ready(function () {
        // Ensure tooltips are not created multiple times
        $('a.bkb-comment', context).once('ckeditorCommentTooltip').each(function () {
          var element = $(this);
          var commentId = element.attr('data-comment-id'); // Get comment ID from element attribute
          if (!commentId) return; // Skip if no comment ID is found

          var tooltip = $('<div class="custom-tooltip"></div>')
            .css({
              position: 'absolute',
              backgroundColor: '#333',
              color: 'white',
              padding: '5px',
              borderRadius: '5px',
              zIndex: '1000',
              display: 'none',
              fontSize: '12px'
            })
            .appendTo('body');

          // AJAX call on page load to fetch the tooltip content
          jQuery.ajax({
            url: `/get_comment_text/${commentId}`, // Fetch specific comment details
            type: 'GET',
            dataType: 'json',
            success: function (data) {
              if (data && data.commentText) {
                element.data('tooltip-text', data.commentText); // Store tooltip text
                element.data('tooltip-loaded', true); // Mark as loaded
                tooltip.text(data.commentText);
              }
            },
            error: function () {
              console.error('Error fetching comment tooltip data');
            }
          });

          // Show tooltip on hover
          element.hover(
            function () {
              var offset = element.offset();

              // Use the cached tooltip text if it has already been loaded
              if (element.data('tooltip-text')) {
                tooltip.text(element.data('tooltip-text'));
              }

              tooltip.css({
                top: offset.top + element.outerHeight() + 5 + 'px',
                left: offset.left + 'px',
                display: 'block'
              });
            },
            function () {
              tooltip.fadeOut(200); // Smooth hide
            }
          );
        });
      });
    }
  };
})(jQuery);
