(function ($) {

/**
 * Provide the summary information for the menu item visibility vertical tabs.
 */
Drupal.behaviors.menuItemVisibilitySummary = {
  attach: function (context) {
    $('fieldset#edit-role', context).drupalSetSummary(function (context) {
      var vals = [];
      $('input[type="checkbox"]:checked', context).each(function () {
        vals.push($.trim($(this).next('label').text()));
      });
      if (!vals.length) {
        vals.push(Drupal.t('Not restricted'));
      }
      return vals.join('<br />');
    });
  }
};

})(jQuery);
