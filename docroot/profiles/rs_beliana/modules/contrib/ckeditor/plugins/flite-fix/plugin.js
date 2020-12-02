// various workarounds to fix flite shortcomings
CKEDITOR.plugins.add('flite-fix', {
    init: function (editor) {
        // get html of a selection
        function getSelectionHtml(editor) {
            var sel = editor.getSelection();
            var ranges = sel.getRanges();
            var el = new CKEDITOR.dom.element("div");
            for (var i = 0, len = ranges.length; i < len; ++i) {
                el.append(ranges[i].cloneContents());
            }
            return el.getHtml();
        }

        // remove cut and paste buttons from the CKEditor's context menu
	    // cut does not work correctly
        editor.removeMenuItem('cut');
	    // paste is not an FLITE problem - just open a popup sometimes
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
            // special treatment for CTRL-X
            if (event.data.keyCode == CKEDITOR.CTRL + 88) {
                var html_text = getSelectionHtml(CKEDITOR.currentInstance);
                if ((html_text.indexOf("cke_widget_mathjax") != -1)) {
                    if (html_text.indexOf("data-cke-copybin-start") == -1 ) {
                        alert ("V texte kombinovanom s MathJax vzorcami nie je použitie CTRL-X povolené.\n\nPoužite CTRL-C a Delete.");
                    }
                    event.cancel();
                }
            }
        });

        // various fixes in paste
        editor.on('paste', function (event) {
            var data = event.data;

            // replace < and > by X and Y (for paste buffer analysis)
            //event.data.dataValue = event.data.dataValue.replace( /</gi, 'X' ).replace( />/gi, 'Y' );

            // remove blue border in pasted formulas
            event.data.dataValue = event.data.dataValue
                .replace( /cke_widget_focused/gi, '' )
                .replace( /<span data-cke-copybin.+?<\/span>/gi, '' );

            // replace incompletely copied formulas tracked by FLITE by an error message (directly as pasted text)
            //
            // count copied objects, which should contain a formula
            var s = event.data.dataValue;
            var f = "data-cke-widget-wrapper";
            var r = s.indexOf(f);
            var c1 = 0;   // number of copied objects
            while (r != -1) {
                c1++;
                r = s.indexOf(f, r + 1);
            }

            // count copied formulas
            f = "cke_widget_element";
            r = s.indexOf(f);
            var c2 = 0;   // number of copied formulas
            while (r != -1) {
                c2++;
                r = s.indexOf(f, r + 1);
            }
            //  c1==c2, if formulas we copied correctly
            if (c1 != c2){
                alert("Text nebol vložený, lebo rovnica celkom vľavo nebola úplne vyznačená.\n\nPri vyznačovaní textu a rovnice ťahaním kurzora sprava doľava treba vyznačiť aspoň 1 znak pred rovnicou.\n\nVyznačenie a vloženie zopakujte.");
                    event.cancel();
            }
        }, null, null, 3);
     }
});
