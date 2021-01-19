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
        if (editor.plugins.mathjax) {
            editor.removeMenuItem('cut');
            editor.removeMenuItem('copy');
            editor.removeMenuItem('paste');
        }

        // add missing formatting of deleted images
        // the following does not work, changes therefore done directly in lite/css/lite.css
        //editor.addContentsCss && editor.addContentsCss( 'lite-fix/plugin.css' )

        // disable drag&drop inside the editor, does not work with lite
        editor.on( 'dragstart', function( event ) {
            event.cancel();
        });

        // if plugin 'eqneditor' is enabled, convert mathjax equations to codecogs <img...>
        editor.on('instanceReady', function(event) { 
            // if the eqneditor (codecogs) plugin is enabled
            if (event.editor.plugins.eqneditor) {
                var data = event.editor.getData();
                var rexp = /<span>\\\((.*?)\\\)<\/span>/gs;
                // replace owing to eqneditor limitations
                if ( data.match(rexp)) {
                    var fixes1 = {
                        "\\gt{": ">{",
                        "\\lt{": "<{",
                        "\\gt ": ">",
                        "\\lt ": "<",
                        "\\textrm": "\\mathrm",
                        "\\text": "\\mathrm",
                        "\\\(\\\)": "",     //Blank equation
                        "\\\( \\\)": "",    //Blank equation
                    };
                    for (var key in fixes1) {
                        var value = fixes1[key];
                        data = data.replaceAll(key, value);
                    }

                    // eqneditor does not support unicode, so convert special characters in equation to TeX notation
                    // each new character must be added also to the spec_char string
                    var fixes2 = {
                        "∈": "\\in ",
                        "∉": "\\not\\in ",
                        "°": "^{\\circ\\,}",    // °C
                        "◦": "\\circ ",
                        "≤": "\\leq ",
                        "≥": "\\geq ",
                        "´": "'",
                        "’": "'",
                        "–": "-",
                        "−": "-",
                        "—": "-",
                        "∅": "\\varnothing ",
                        "⊂": "\\subset ",
                        "≠": "\\neq ",
                        "·": "\\cdot ",
                        "×": "\\times ",
                        "⟨": "\\langle ",
                        "⟩": "\\rangle ",
                        "▪": "\\blacksquare ",
                        "α ": "\\alpha ",
                        "β ": "\\beta ",
                        "γ ": "\\gamma ",
                        "δ ": "\\delta ",
                        "ϵ ": "\\epsilon ",
                        "ε ": "\\varepsilon ",
                        "ζ ": "\\zeta ",
                        "η ": "\\eta ",
                        "θ ": "\\theta ",
                        "ϑ ": "\\vartheta ",
                        "ι ": "\\iota ",
                        "κ ": "\\kappa ",
                        "ϰ ": "\\varkappa ",
                        "λ ": "\\lambda ",
                        "μ ": "\\mu ",
                        "ν ": "\\nu ",
                        "ξ ": "\\xi ",
                        "π ": "\\pi ",
                        "ρ ": "\\rho ",
                        "ϱ ": "\\varrho ",
                        "σ ": "\\sigma ",
                        "ς ": "\\varsigma ",
                        "τ ": "\\tau ",
                        "υ ": "\\upsilon ",
                        "ϕ ": "\\phi ",
                        "φ ": "\\varphi ",
                        "χ ": "\\chi ",
                        "ψ ": "\\psi ",
                        "ω ": "\\omega ",
                        "Γ": "\\Gamma ",
                        "Δ": "\\Delta ",
                        "Θ": "\\Theta ",
                        "Λ": "\\Lambda ",
                        "Ξ": "\\Xi ",
                        "Π": "\\Pi ",
                        "Σ": "\\Sigma ",
                        "ϒ": "\\Upsilon ",
                        "Φ": "\\Phi ",
                        "Ψ": "\\Psi ",
                        "Ω": "\\Omega ",
                    };

                    var math_exp = /\\\(.*?\\\)/g;
                    //spec_char musst contain all keys of fixes2 
                    var spec_char = /[∈∉°◦≤≥´’–−—∅⊂≠·×⟨⟩▪αβγδϵεζηθϑικϰλμνξπρϱσςτυϕφχψωΓΔΘΛΞΠΣϒΦΨΩ]/g;
                    var math_matches = data.match(math_exp);
                    var to_replace = [];
                    // find all math expressions 
                    if ( math_matches ) {
                        for ( var m in math_matches ) {
                            // check if it has a special character
                            if (math_matches[m].match(spec_char) ) {
                                var aux = math_matches[m];
                                // replace special characters by TeX tags 
                                for (var key in fixes2) {
                                    var value = fixes2[key];
                                    aux = aux.replaceAll(key, value);
                                }
                                if (aux != math_matches[m]) 
                                    to_replace[math_matches[m]] = aux; 
                            }
                        }
                    }

                    // replace all found in text
                    for (var key in to_replace) {
                        data = data.replaceAll(key, to_replace[key]);
                    }
                    

                    // replace mathjax equations by codecogs image
                    // if the mathjax plugin is not enabled, 'class="math-tex"' is removed
                    var rexp = /<span>\\\((.*?)\\\)<\/span>/gs;
                    //var rep = '<img src="https:\/\/latex.codecogs.com\/gif.latex?$1" title="$1" \/>';
                    var rep = '<img alt="$1" src="https:\/\/latex.codecogs.com\/gif.latex?$1" \/>';
                    var data = data.replace(rexp,rep);
                    event.editor.setData(data);
                }
            }
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
            if (event.data.keyCode == 8 ) { // backspace
                // if tracking is on
                var selection = CKEDITOR.currentInstance.getSelection();
                var sel_text = selection.getSelectedText();
                if (sel_text == ""){
                    var ranges = selection.getRanges();
                    var range = ranges[0];
                    var prev_node = range.getPreviousNode(); // null on the first text character
                    if (prev_node && prev_node.type == CKEDITOR.NODE_ELEMENT){
                        var tagName = prev_node.getName();
                        if (tagName == "p") {
                            if (CKEDITOR.currentInstance.plugins.lite) {
                                var lite = CKEDITOR.currentInstance.plugins.lite.findPlugin(CKEDITOR.currentInstance);
                                if (lite._isTracking) {
                                    alert("Ak chcete odstrániť zalomenie odseku, prejdite na koniec predchádzajúceho odseku, vložte medzeru a stlačte kláves Delete.");
                                    event.cancel();
                                }
                            }
                        }
                    }
                }
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
