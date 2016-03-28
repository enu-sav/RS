/**
 * @file
 * Primarily javascript functions file.
 */

(function ($) {

  Drupal.behaviors.content_dependency_tab_wrapper = {
    attach: function(context, settings) {
      $('#content_dependency_full_container #content_dependency_form_body_entity', context).accordion({
        active: false, collapsible: true, header: 'h4', heightStyle: 'content',
        autoHeight: true
      });
    }
  };

}) (jQuery);
