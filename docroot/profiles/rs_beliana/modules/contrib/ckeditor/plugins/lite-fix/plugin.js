// various workarounds to fix shortcomings of the 'lite' plugin
CKEDITOR.plugins.add('lite-fix', {
    init: function (editor) {
        // get html of a selection
        function getSelectionHtml(editor) {
            if (editor) {
                var sel = editor.getSelection();
                var ranges = sel.getRanges();
                var el = new CKEDITOR.dom.element("div");
                for (var i = 0, len = ranges.length; i < len; ++i) {
                    el.append(ranges[i].cloneContents());
                }
                return el.getHtml();
            } else {
                return null;
            }
        }

        // remove cut and paste buttons from the CKEditor's context menu
	    // cut and copy do not work correctly with MathJax
        editor.removeMenuItem('cut');
        editor.removeMenuItem('copy');
        editor.removeMenuItem('paste');

        // disable drag&drop inside the editor
        editor.on( 'dragstart', function( event ) {
            event.cancel();
        });

        // cancel key-press event SHIFT-Enter nad CTRL-X
	    // SHIFT-ENTER: inserts <br /> (we do not want this)
	    // CTRL-X: cut does not work correctly
        editor.on( 'key', function( event ) { 
            //var cancel_keys = [CKEDITOR.SHIFT + 13, CKEDITOR.CTRL + 88];
            var cancel_keys = [CKEDITOR.SHIFT + 13];
            if (cancel_keys.includes(event.data.keyCode)) {
                event.cancel();
            }
            // ignore CTRL-X and CTRL-C
            //var copy_keys = [CKEDITOR.CTRL + 67, CKEDITOR.CTRL + 88 ];
            var copy_keys = [CKEDITOR.CTRL + 67, CKEDITOR.CTRL + 88 ];
            if (copy_keys.includes(event.data.keyCode)) {
                var html_text = getSelectionHtml(CKEDITOR.currentInstance);
                if ((html_text.indexOf("cke_widget_mathjax") != -1)) {
                    // if 'lite' is enabled
                    if (CKEDITOR.currentInstance.plugins.lite) {
                        // if tracking is on
                        var lite = CKEDITOR.currentInstance.plugins.lite.findPlugin(CKEDITOR.currentInstance);
                        if (lite._isTracking) {
                            alert ("Ak sa zaznamenávajú zmeny, použitie CTRL-C a CTRL-X nie je v texte obsahujúcom vzorce povolené.");
                            event.cancel();
                        }
                    }
                }
            }
        });

     }
});
