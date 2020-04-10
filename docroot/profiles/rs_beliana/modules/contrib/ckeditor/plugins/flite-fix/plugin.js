// various workarounds to fix flite shortcomings
CKEDITOR.plugins.add('flite-fix', {
    init: function (editor) {
        // remove cut and paste buttons from the CKEditor's context menu
	// cut does not work correctly
        editor.removeMenuItem('cut');
	// paste is not an FLITE problem - just open a popup somentimes
        editor.removeMenuItem('paste');	

        // disable drag&drop inside the editor
        editor.on( 'dragstart', function( event ) {
            event.cancel();
        });

        // cancel key-press event SHIFT-Enter nad CTRL-X
	// SHIFT-ENTER: inserts <br /> (we do not want this)
	// CTRL-X: cut does not work correctly
        editor.on( 'key', function( event ) {
            var cancel_keys = [CKEDITOR.SHIFT + 13, CKEDITOR.CTRL + 88];
            if (cancel_keys.includes(event.data.keyCode)) {
                event.cancel();
            }
        });

        // various fixes in paste
        editor.on('paste', function (evt) {
            var data = evt.data;

            // replace < and > by X and Y (for paste buffer analysis)
            //evt.data.dataValue = evt.data.dataValue.replace( /</gi, 'X' ).replace( />/gi, 'Y' );

            // remove blue border in pasted formulas
            evt.data.dataValue = evt.data.dataValue
                .replace( /cke_widget_focused/gi, '' )
                .replace( /<span data-cke-copybin.+?<\/span>/gi, '' );

            // replace incompletely copied formulas tracked by FLITE by an error message (directly as pasted text)
            //
            // count copied objects, which should contain a formula
            var s = evt.data.dataValue;
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
              evt.data.dataValue = "=== CHYBA: NEÚPLNE VYZNAČENÁ KOPÍROVANÁ ROVNICA ===";
            }
        }, null, null, 3);
     }
});
