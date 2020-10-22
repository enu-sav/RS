/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {
/*
  Drupal.behaviors.belianaEditor = {
    attach: function (context, settings) {
      var body = $(document.body);
      var offset = 0;

      $(window).on('keydown', function (e) {
        if (body.hasClass('editor-focus') && (e.keyCode == '34' || e.keyCode == '33' || !e.hasOwnProperty('keyCode'))) {
          Drupal.behaviors.belianaEditor.setOffset(null, offset);
        }
      });

      CKEDITOR.on('instanceCreated', function (event) {
        event.editor.on('configLoaded', function () {
          CKEDITOR.config.lite = {
            isTracking: true,
            tooltipTemplate: "<b>%a</b> %t (%u)",
          };

          if (settings.hasOwnProperty('beliana')) {
            CKEDITOR.config.lite.userId = settings.beliana.current_user.id;
            CKEDITOR.config.lite.userName = settings.beliana.current_user.name;
          }
        });
      });

//      CKEDITOR.on('instanceReady', function (event) {
//        var editor = event.editor;
//        var height = $(window).height() - 181;
//
//        offset = $("#" + editor.name).parent().offset().top - 60;
//
//        Drupal.behaviors.belianaEditor.setHeight(editor, height);
//
//        editor.on('focus', function () {
//          body.addClass('editor-focus');
//          body.css('overflow', 'hidden');
//
//          Drupal.behaviors.belianaEditor.setHeight(editor, height);
//          Drupal.behaviors.belianaEditor.setOffset(editor, offset);
//        });
//
//        editor.on('mouseenter', function () {
//          body.addClass('editor-focus');
//          body.css('overflow', 'hidden');
//
//          Drupal.behaviors.belianaEditor.setHeight(editor, height);
//          Drupal.behaviors.belianaEditor.setOffset(editor, offset);
//        });
//
//        editor.on('blur', function () {
//          body.removeClass('editor-focus');
//          body.css('overflow', 'auto');
//
//          Drupal.behaviors.belianaEditor.setHeight(editor, height);
//        });
//
//        editor.on('mouseleave', function () {
//          body.removeClass('editor-focus');
//          body.css('overflow', 'auto');
//
//          Drupal.behaviors.belianaEditor.setHeight(editor, height);
//        });
//
//      });
    },
    setHeight: function (editor, height) {
      if (height < 500) {
        setTimeout(function () {
          $('#' + editor.name).parent().find('.cke_contents').height(height);
        }, 50);
      }
    },
    setOffset: function (editor, offset) {
      $('html, body').animate({scrollTop: offset}, 'fast');
    }
  };
*/

})(jQuery, Drupal);
