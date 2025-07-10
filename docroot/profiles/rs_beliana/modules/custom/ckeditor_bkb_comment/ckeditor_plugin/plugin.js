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
            label: Drupal.t('Autocomplete'),
            elements: [
              {
                type: 'text',
                id: 'identificator',
                label: Drupal.t('Identifikátor komentára'),
                onShow: function() {
                  var selection = editor.getSelection();
                  var selectedText = selection.getSelectedText();
                  var input = this.getInputElement().$;
                  if (input && selectedText) {
                    jQuery(input).val(selectedText);
                  }
                },
              },
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
                html: '<div>' + Drupal.t('Vyberte komentár zo zoznamu:') +
                  '<div id="searchResults" style="border: 1px solid #ccc; max-height: 150px; overflow-y: auto; display: none; padding: 5px;"></div>' +
                  '</div>'
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
          var nid = Drupal.settings.ckeditor_bkb_comment.nid;
          prefillDialog(this, editor);

          jQuery.ajax({
            url: `/ckeditor/autocomplete_link/${nid}`,
            type: 'GET',
            dataType: 'json',
            success: function (data) {
              const success = data.length > 0;

              // Wait for the dialog to be available in DOM
              const interval = setInterval(() => {
                const dialogEl = document.querySelector('.cke_dialog');
                const buttons = dialogEl?.querySelectorAll('.cke_dialog_ui_button');

                if (dialogEl && buttons?.length) {
                  clearInterval(interval); // Stop polling

                  buttons.forEach(btn => {
                    if (btn.innerText.includes('Vytvoriť')) {
                      if (success) {
                        let commentId = data[0].parent;
                        btn.innerText = Drupal.t('Vytvoriť ďalší komentár k heslu v BKB');
                        btn.onclick = function () {
                          window.open(Drupal.settings.ckeditor_bkb_comment.bkb_edit_url + commentId + '/edit', '_blank');
                          const dialog = CKEDITOR.dialog.getCurrent();
                          if (dialog) dialog.hide();
                        };
                      } else {
                        btn.innerText = Drupal.t('Vytvoriť komentár v BKB');
                        btn.onclick = function () {
                          window.open(Drupal.settings.ckeditor_bkb_comment.bkb_add_url, '_blank');
                          const dialog = CKEDITOR.dialog.getCurrent();
                          if (dialog) dialog.hide();
                        };
                      }
                    }
                  });
                }
              }, 100); // Poll every 100ms until the dialog is ready
            },
            error: function () {
              console.error(Drupal.t('Chyba pri načítavaní výsledkov vyhľadávania.'));
            }
          });
        },
        buttons: [
          {
            type: 'button',
            id: 'redirectToBkb',
            label: Drupal.t('Vytvoriť komentár v BKB'),
          },
          CKEDITOR.dialog.cancelButton,
          CKEDITOR.dialog.okButton
        ]
      };
    });

    editor.addCommand('comments', new CKEDITOR.dialogCommand('commentsDialog', {
      allowedContent: 'a[class,data-comment-id,data-comment-label,data-parent-id]',
      requiredContent: 'a[class]'
    }));

    editor.ui.addButton('comments', {
      label: Drupal.t('Add a comment link'),
      icon: this.path + 'images/comments.png',
      command: 'comments'
    });

    if (editor.addMenuItems) {
      editor.addMenuItems({
        comments: {
          label: Drupal.t('Edit comment link'),
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

function insertCommentLink(editor, dialog) {
  const inputField = dialog.getContentElement('tab1', 'searchField').getInputElement().$;
  const identificatorField = dialog.getContentElement('tab1', 'identificator').getInputElement().$;
  const itemURL = jQuery(inputField).attr('data-url');
  const itemLabel = jQuery(inputField).val();
  const selection = editor.getSelection();
  let selectedText = jQuery(identificatorField).val() || selection.getSelectedText();
  const selectedElement = selection.getStartElement();
  const isExistingLink = selectedElement?.is('a') && selectedElement.hasAttribute('data-comment-id');

  if (!selectedText && isExistingLink) {
    selectedText = selectedElement.getText();
  }

  if (itemLabel && selectedText && itemURL) {
    if (isExistingLink) {
      // Update existing link
      selectedElement.setAttributes({
        href: '',
        class: 'bkb-comment',
        'data-comment-label': CKEDITOR.tools.htmlEncode(itemLabel),
        'data-comment-id': CKEDITOR.tools.htmlEncode(itemURL)
      });
      selectedElement.setStyle('color', 'green');
      selectedElement.setText(`[${selectedText}]`);
    } else {
      // Create new link
      const linkElement = new CKEDITOR.dom.element('a', editor.document);
      linkElement.setAttributes({
        href: '',
        class: 'bkb-comment',
        'data-comment-label': CKEDITOR.tools.htmlEncode(itemLabel),
        'data-comment-id': CKEDITOR.tools.htmlEncode(itemURL)
      });
      linkElement.setStyle('color', 'green');
      linkElement.setText(`[${selectedText}]`);

      const range = selection.getRanges()[0];
      range.deleteContents();
      range.insertNode(linkElement);
    }
  } else {
    // If selectedElement is empty, remove link and surrounding brackets
    if (isExistingLink) {
      let text = selectedElement.getText();
      text = text.replace(/^\[|\]$/g, ''); // Remove brackets if present
      var textNode = new CKEDITOR.dom.text(text, editor.document);
      selectedElement.insertBeforeMe(textNode);
      selectedElement.remove();
    }
  }
}


// Prefill dialog with existing link data
function prefillDialog(dialog, editor) {
  var selection = editor.getSelection();
  var element = selection.getStartElement();

  if (element && element.is('a') && element.hasAttribute('data-comment-label')) {
    var searchField = dialog.getContentElement('tab1', 'searchField');

    if (searchField) {
      var commentId = element.getAttribute('data-comment-id');

      // Fetch the latest comment text asynchronously
      getCommentById(commentId, function (searchFieldValue) {
        searchField.setValue(searchFieldValue);
        jQuery(searchField.getInputElement().$).attr('data-url', commentId);
      });
    }
  }
}

// Get latest comment data from API (asynchronous)
function getCommentById(commentId, callback) {
  jQuery.ajax({
    url: `/get_comment_text/${commentId}`,
    type: 'GET',
    dataType: 'json',
    success: function (data) {
      if (data && data.plainCommentText) {
        callback(data.plainCommentText); // Use callback to pass the fetched data
      } else {
        callback(''); // Provide empty string if no data found
      }
    },
    error: function () {
      console.error('Error fetching comment data');
      callback(''); // Ensure callback is always called, even on error
    }
  });
}

