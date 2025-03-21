// Define the plugin
CKEDITOR.plugins.add('ckeditor_bkb_comment', {
  requires: ['dialog', 'htmlwriter'],
  onLoad: function() {
    CKEDITOR.addCss('a.bkb-comment { color: green !important; text-decoration: none; }');
  },
  init: function (editor) {
    CKEDITOR.dialog.add('commentsDialog', function (editor) {
      return {
        title: Drupal.t('Vybrať komentár'),
        minWidth: 500,
        minHeight: 50,
        contents: [
          {
            id: 'tab1',
            label: 'Autocomplete',
            elements: [
              {
                type: 'text',
                id: 'searchField',
                label: Drupal.t('Hľadať komentár'),
                onShow: function() {
                  fetchSearchResults(this, true);
                },
                onKeyUp: debounce(function () {
                  fetchSearchResults(this);
                }, 300),
              },
              {
                type: 'html',
                id: 'resultList',
                html: '<div id="searchResults" style="border: 1px solid #ccc; max-height: 150px; overflow-y: auto; display: none; padding: 5px;"></div>'
              }
            ]
          }
        ],
        onLoad: function () {
          var dialog = this;
          jQuery(document).on("click", ".search-result-item", function () {
            selectSearchResult(dialog, jQuery(this));
          });
        },
        onOk: function () {
          insertCommentLink(editor, this);
        },
        onShow: function () {
          prefillDialog(this, editor);
        }
      };
    });

    editor.addCommand('comments', new CKEDITOR.dialogCommand('commentsDialog', {
      allowedContent: 'a[class,data-comment-id,data-comment-label]',
      requiredContent: 'a[class]'
    }));

    editor.ui.addButton('comments', {
      label: 'Add a comment link',
      icon: this.path + 'images/comments.png',
      command: 'comments'
    });

    if (editor.addMenuItems) {
      editor.addMenuItems({
        comments: {
          label: 'Edit comment link',
          command: 'comments',
          icon: this.path + 'images/comments.png',
          group: 'comments'
        }
      });
    }

    if (editor.contextMenu) {
      editor.contextMenu.addListener(element => {
        return element.is('a') && element.hasClass('bkb-comment') ? { comments: CKEDITOR.TRISTATE_OFF } : null;
      });
    }

    editor.on('doubleclick', evt => {
      var element = evt.data.element;
      if (element.is('a') && element.hasClass('bkb-comment')) {
        evt.cancel();
        editor.execCommand('comments');
      }
    });
  }
});

// Helper function to debounce AJAX calls
function debounce(func, delay) {
  let timer;
  return function (...args) {
    clearTimeout(timer);
    timer = setTimeout(() => func.apply(this, args), delay);
  };
}

// Fetch autocomplete search results
function fetchSearchResults(field, init = false) {
  var input = field.getInputElement().$;
  var query = input.value;
  var nid = Drupal.settings.ckeditor_bkb_comment.nid;

  if (!init && ((query.length < 2 && query.length !== 0) || !Number.isInteger(nid))) {
    jQuery("#searchResults").hide();
    return;
  }

  jQuery.ajax({
    url: `/ckeditor/autocomplete_link/${nid}?query=${encodeURIComponent(query)}`,
    type: 'GET',
    dataType: 'json',
    success: function (data) {
      var dropdown = jQuery("#searchResults").empty().show();
      if (data.length) {
        data.forEach(item => {
          dropdown.append(`<div class="search-result-item" style="cursor: pointer; margin: 4px;" data-url="${item.value}">${item.label}</div>`);
        });
      } else {
        dropdown.append('<div class="no-results">' + Drupal.t('Nenašli sa žiadne výsledky.') + '</div>');
      }
    },
    error: function () {
      console.error(Drupal.t('Chyba pri načítavaní výsledkov vyhľadávania.'));
    }
  });
}

// Handle search result selection
function selectSearchResult(dialog, item) {
  var selectedText = item.text();
  var selectedUrl = item.data("url");
  jQuery("#searchResults").hide();
  var inputField = dialog.getContentElement('tab1', 'searchField').getInputElement().$;
  jQuery(inputField).val(selectedText).attr('data-url', selectedUrl);
}

// Insert the selected comment link into the editor
function insertCommentLink(editor, dialog) {
  var inputField = dialog.getContentElement('tab1', 'searchField').getInputElement().$;
  var itemURL = jQuery(inputField).attr('data-url');
  var itemLabel = jQuery(inputField).val();
  var selection = editor.getSelection();
  var selectedText = selection.getSelectedText() || itemLabel;

  if (itemLabel && selectedText && itemURL) {
    var linkElement = new CKEDITOR.dom.element('a', editor.document);
    linkElement.setAttributes({
      href: '',
      class: 'bkb-comment',
      'data-comment-label': CKEDITOR.tools.htmlEncode(itemLabel),
      'data-comment-id': CKEDITOR.tools.htmlEncode(itemURL)
    });
    linkElement.setStyle('color', 'green');
    linkElement.setText(selectedText);

    var range = selection.getRanges()[0];
    range.deleteContents();
    range.insertNode(linkElement);
  } else {
    var selectedElement = selection.getStartElement();
    if (selectedElement && selectedElement.is('a') && selectedElement.hasAttribute('data-comment-id')) {
      var textNode = new CKEDITOR.dom.text(selectedElement.getText(), editor.document);
      selectedElement.insertBeforeMe(textNode); // Insert text before <a>
      selectedElement.remove(); // Remove <a> tag
    }
  }
}

// Prefill dialog with existing link data
function prefillDialog(dialog, editor) {
  var selection = editor.getSelection();
  var element = selection.getStartElement();
  if (element && element.is('a') && element.hasAttribute('data-comment-label')) {
    var searchField = dialog.getContentElement('tab1', 'searchField');
    searchField.setValue(element.getAttribute('data-comment-label'));
    jQuery(searchField.getInputElement().$).attr('data-url', element.getAttribute('data-comment-id'));
  }
}
