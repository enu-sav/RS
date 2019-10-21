(function ($) {
    Drupal.behaviors.rsBelianaTheme = {
        attach: function (context, settings) {
            var self = this;

            setTimeout(function () {
                self.adminMenuOffset();
            }, 200);

            window.addEventListener('resize', function () {
                self.adminMenuOffset();
            });
        },
        adminMenuOffset: function () {
            var offset = $('body.admin-menu.adminimal-menu #admin-menu').height();
            $('body.admin-menu.adminimal-menu').attr('style', 'margin-top: ' + (offset + 86) + 'px !important');
        }
    };
})(jQuery);
