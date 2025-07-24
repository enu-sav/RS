// Define the plugin
CKEDITOR.plugins.add('ckeditor_bkb_comment', {
  requires: ['dialog', 'htmlwriter'],
  onLoad: function () {
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
                type: 'html',
                id: 'resultList',
                html: '<div>' + Drupal.t('Vyberte komentár zo zoznamu:') +
                  '<div id="searchResults" style="border: 1px solid #ccc; max-height: 150px; overflow-y: auto; display: none; padding: 5px;"></div>' +
                  '</div>'
              },
              {
                type: 'text',
                id: 'searchField',
                label: Drupal.t('Vybraný komentár'),
                onShow: function () {
                  fetchSearchResults(this, true);
                },
                onKeyUp: debounce(function () {
                  fetchSearchResults(this);
                }, 300),
              },
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
                        btn.innerHTML = '<span class="cke_dialog_ui_button">' + Drupal.t('Pridať ďalší komentár k heslu v BKB') + '</span>';
                        btn.onclick = function () {
                          window.open(Drupal.settings.ckeditor_bkb_comment.bkb_edit_url + '?word=' + commentId, '_blank');
                          const dialog = CKEDITOR.dialog.getCurrent();
                          if (dialog) {
                            dialog.hide();
                          }
                        };
                      }
                      else {
                        btn.innerHTML = '<span class="cke_dialog_ui_button">' + Drupal.t('Vytvoriť komentár v BKB') + '</span>';
                        btn.onclick = function () {
                          window.open(Drupal.settings.ckeditor_bkb_comment.bkb_add_url, '_blank');
                          const dialog = CKEDITOR.dialog.getCurrent();
                          if (dialog) {
                            dialog.hide();
                          }
                        };
                      }
                    }
                  });
                }
              }, 100); // Poll every 100ms until the dialog is ready
            },
            error: function (request, status, error) {
              console.error(Drupal.t('Chyba pri načítavaní výsledkov vyhľadávania: '), request.responseText);
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

    editor.addCommand('comments', {
      exec: function (editor) {
        editor.openDialog('commentsDialog');
      },
      allowedContent: 'a[class,data-comment-id,data-comment-label,data-comment-delta,data-parent-id]',
      requiredContent: 'a[class]'
    });

    editor.on('selectionChange', updateCommentsCommandState);
    editor.on('contentDom', function () {
      editor.document.on('click', updateCommentsCommandState);
      editor.document.on('keyup', updateCommentsCommandState);
    });

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
        return element.is('a') && element.hasClass('bkb-comment') ? {comments: CKEDITOR.TRISTATE_OFF} : null;
      });
    }

    editor.on('doubleclick', evt => {
      var element = evt.data.element;
      if (element.is('a') && element.hasClass('bkb-comment')) {
        evt.cancel();
        editor.execCommand('comments');
      }
    });

    // Helper function to set plugin button state
    function updateCommentsCommandState() {
      const cmd = editor.getCommand('comments');
      if (!cmd) {
        return;
      }

      const selection = editor.getSelection();
      const selectedText = selection ? selection.getSelectedText() : '';

      // Text is selected
      if (selectedText.length === 0) {
        cmd.setState(CKEDITOR.TRISTATE_OFF);
      }

      // No text selected — check cursor position
      const range = selection && selection.getRanges()[0];
      if (!range || !range.collapsed) {
        cmd.setState(CKEDITOR.TRISTATE_DISABLED);
        return;
      }

      const offset = range.startOffset;
      const container = range.startContainer;

      if (!container || container.type !== CKEDITOR.NODE_TEXT) {
        cmd.setState(CKEDITOR.TRISTATE_DISABLED);
        return;
      }

      const text = container.getText();

      // Check if cursor is in the middle of a word:
      const beforeChar = text.charAt(offset - 1);
      const afterChar = text.charAt(offset);

      const isWordChar = (char) => /\w/.test(char);

      const inMiddleOfWord = isWordChar(beforeChar) && isWordChar(afterChar);

      if (inMiddleOfWord) {
        cmd.setState(CKEDITOR.TRISTATE_DISABLED);
      }
      else {
        cmd.setState(CKEDITOR.TRISTATE_OFF);
      }
    }
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
          dropdown.append(`<div class="search-result-item" style="cursor: pointer; margin: 4px;" data-id="${item.id}" data-url="${item.value}">${item.label}</div>`);
        });
      }
      else {
        dropdown.append('<div class="no-results">' + Drupal.t('Nenašli sa žiadne výsledky.') + '</div>');
      }
    },
    error: function (request, status, error) {
      console.error(Drupal.t('Chyba pri načítavaní výsledkov vyhľadávania: '), request.responseText);
    }
  });
}

// Handle search result selection
function selectSearchResult(dialog, item) {
  var inputField = dialog.getContentElement('tab1', 'searchField').getInputElement().$;

  jQuery(inputField).val(item.text()).attr('data-url', item.data('url')).attr('data-id', item.data('id'));
  // jQuery("#searchResults").hide();
}

function insertCommentLink(editor, dialog) {
  const inputField = dialog.getContentElement('tab1', 'searchField').getInputElement().$;
  const itemId = jQuery(inputField).attr('data-id');
  const itemUrl = jQuery(inputField).attr('data-url');
  const itemLabel = jQuery(inputField).val();
  const selection = editor.getSelection();
  const selectedElement = selection.getStartElement();
  const isExistingLink = selectedElement?.is('a') && selectedElement.hasAttribute('data-comment-id');
  const text = ` [${itemId}] `;

  if (itemLabel && itemUrl) {
    if (isExistingLink) {
      // Update existing link
      selectedElement.setAttributes({
        href: '',
        class: 'bkb-comment',
        'data-comment-delta': CKEDITOR.tools.htmlEncode(itemId),
        'data-comment-label': CKEDITOR.tools.htmlEncode(itemLabel),
        'data-comment-id': CKEDITOR.tools.htmlEncode(itemUrl)
      });
      selectedElement.setStyle('color', 'green');
      selectedElement.setText(text);
    }
    else {
      // Create new link
      const linkElement = new CKEDITOR.dom.element('a', editor.document);
      linkElement.setAttributes({
        href: '',
        class: 'bkb-comment',
        'data-comment-delta': CKEDITOR.tools.htmlEncode(itemId),
        'data-comment-label': CKEDITOR.tools.htmlEncode(itemLabel),
        'data-comment-id': CKEDITOR.tools.htmlEncode(itemUrl)
      });
      linkElement.setStyle('color', 'green');
      linkElement.setText(text);

      const range = selection.getRanges()[0];
      range.deleteContents();
      range.insertNode(linkElement);

      // Move cursor after inserted node
      const newRange = editor.createRange();
      newRange.moveToPosition(linkElement, CKEDITOR.POSITION_AFTER_END);
      newRange.select();
    }
  }
  else {
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
      const commentDelta = element.getAttribute('data-comment-delta');
      const commentId = element.getAttribute('data-comment-id');

      // Fetch the latest comment text asynchronously
      getCommentById(commentId, commentDelta, function (searchFieldValue) {
        searchField.setValue(searchFieldValue);
        jQuery(searchField.getInputElement().$).attr('data-url', commentId);
      });
    }
  }
}

// Get latest comment data from API (asynchronous)
function getCommentById(commentId, commentDelta, callback) {
  jQuery.ajax({
    url: `/get_comment_text/${commentId}`,
    type: 'GET',
    dataType: 'json',
    success: function (data) {
      if (data && data.plainCommentText) {
        // Use callback to pass the fetched data
        callback('[' + commentDelta + ']: ' + data.plainCommentText);
      }
      else {
        // Provide empty string if no data found
        callback('');
      }
    },
    error: function () {
      console.error('Error fetching comment data');
      callback(''); // Ensure callback is always called, even on error
    }
  });
}

