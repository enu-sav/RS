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
            $('body.admin-menu.adminimal-menu #branding').attr('style', 'margin-top: ' + (offset - 30) + 'px !important');
        }
    };
})(jQuery);
