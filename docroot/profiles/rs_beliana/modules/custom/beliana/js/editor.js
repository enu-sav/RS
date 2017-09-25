/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {
    Drupal.behaviors.belianaEditor = {
        attach: function (context, settings) {
            CKEDITOR.on('instanceReady', function (event) {
                var body = $(document.body);
                var height = $(window).height() - 181;
                var editor = event.editor;

                Drupal.behaviors.belianaEditor.setHeight(editor, height);

                editor.on('focus', function () {
                    body.addClass('editor-focus');
                    body.css('overflow', 'hidden');
                    Drupal.behaviors.belianaEditor.setHeight(editor, height);
                    $('html, body').animate({scrollTop: $("#" + editor.name).parent().offset().top - 60}, 'fast');
                });

                editor.on('blur', function () {
                    body.removeClass('editor-focus');
                    body.css('overflow', 'auto');
                    Drupal.behaviors.belianaEditor.setHeight(editor, height);
                });

//                editor.on('beforePaste', function (e) {
//                    setTimeout(function () {
//                        console.log(e.data);
//                    }, 50);
//                });
            });
        },
        setHeight: function (editor, height) {
            if (height < 500) {
                setTimeout(function () {
                    $('#' + editor.name).parent().find('.cke_contents').height(height);
                }, 50);
            }
        }
    };

})(jQuery, Drupal);