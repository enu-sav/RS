(function($) {
  Drupal.node_edit_protection = {};
  var click = false; // Allow Submit/Edit button
  var edit = false; // Dirty form flag

  Drupal.behaviors.nodeEditProtection = {
    attach : function(context) {
      // If they leave an input field, assume they changed it.
      $(".node-form :input", context).each(function() {
        // Get default value of field.
        var defaultValue = $(this).val();
        // Make sure we capture all scenarios.
        $(this).bind('change keyup input paste blur', function (e) {
          // Is the default value the same as the last value?
          if (defaultValue != $(this).val()) {
            edit = true;
          }
        });
      });

      if ($(".node-form :input", context).hasClass("error")) {
        edit = true;
      }

      if ($(".node-form :input", context).hasClass("error")) {
        edit = true;
      }

      if ($(".node-form :input", context).hasClass("error")) {
        edit = true;
      }

      // Let all form submit buttons through
      $(".node-form input[type='submit'], .node-form button[type='submit']", context).each(function() {
        $(this).addClass('node-edit-protection-processed');
        $(this).click(function() {
          click = true;
        });
      });

      // Catch all links and buttons EXCEPT for "#" links
      $("a, button, input[type='submit']:not(.node-edit-protection-processed)", context)
          .each(function() {
            $(this).click(function() {
              // return when a "#" link is clicked so as to skip the
              // window.onbeforeunload function
              if (edit && $(this).attr("href") != "#") {
                return 0;
              }
            });
          });

      // Handle backbutton, exit etc.
      window.onbeforeunload = function() {
        // Add CKEditor support
        if (typeof (CKEDITOR) != 'undefined' && typeof (CKEDITOR.instances) != 'undefined') {
          for ( var i in CKEDITOR.instances) {
            if (CKEDITOR.instances[i].checkDirty()) {
              edit = true;
              break;
            }
          }
        }
        if (edit && !click) {
          click = false;
          return (Drupal.t("You will lose all unsaved work."));
        }
      }
    }
  };
})(jQuery);
