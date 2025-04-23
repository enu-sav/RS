(function ($) {
  /** @type any */
  var imceInline = (window.imceInline = {});

  // Drupal behavior.
  Drupal.behaviors.imceInline = {
    attach: function (context, settings) {
      $('div.imce-inline-wrapper', context)
        .not('.processed')
        .addClass('processed')
        .show()
        .find('a')
        .click(function () {
          imceInline.activeTextarea = $(
            '#' + this.getAttribute('data-textarea')
          )[0];
          imceInline.activeType = this.getAttribute('data-type');
          imceInline.pop = window.open(
            this.href +
              (this.href.indexOf('?') < 0 ? '?' : '&') +
              'app=nomatter|imceload@imceInline.load',
            '',
            'width=' + 760 + ',height=' + 560 + ',resizable=1'
          );
          imceInline.pop.focus();
          return false;
        });
    },
  };

  // Function to be executed when imce loads.
  imceInline.load = function (win) {
    win.imce.setSendTo(Drupal.t('Insert file'), imceInline.insert);
  };

  // Insert html at cursor position.
  imceInline.insertAtCursor = function (field, txt, type) {
    field.focus();
    if ('undefined' != typeof field.selectionStart) {
      if (type == 'link' && field.selectionEnd - field.selectionStart) {
        txt =
          txt.split('">')[0] +
          '">' +
          field.value.substring(field.selectionStart, field.selectionEnd) +
          '</a>';
      }
      field.value =
        field.value.substring(0, field.selectionStart) +
        txt +
        field.value.substring(field.selectionEnd, field.value.length);
    }
    else if (document.selection) {
      if (type == 'link' && document.selection.createRange().text.length) {
        txt =
          txt.split('">')[0] +
          '">' +
          document.selection.createRange().text +
          '</a>';
      }
      document.selection.createRange().text = txt;
    }
    else {
      field.value += txt;
    }
  };

  // SendTo function.
  imceInline.insert = function (file, win) {
    var type =
      imceInline.activeType == 'link' ? 'link' : file.width ? 'image' : 'link';
    var html =
      type == 'image'
        ? '<img src="' +
          file.url +
          '" width="' +
          file.width +
          '" height="' +
          file.height +
          '" alt="' +
          file.name +
          '" />'
        : '<a href="' +
          file.url +
          '">' +
          file.name +
          ' (' +
          file.size +
          ')</a>';
    imceInline.activeType = null;
    win.close();
    imceInline.insertAtCursor(imceInline.activeTextarea, html, type);
  };
})(jQuery);
