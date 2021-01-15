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

        // if plugin 'mathjax' is enabled, disable drag&drop inside the editor
        editor.on( 'dragstart', function( event ) {
            if (event.editor.plugins.mathjax) {
                event.cancel();
            }
        });

        // if plugin 'eqneditor' is enabled, convert mathjax equation 
        editor.on('instanceReady', function(event) { 
            // if the mathjax plugin is enabled
            if (event.editor.plugins.eqneditor) {
                var data = event.editor.getData();
                var rexp = /<span>\\\((.*?)\\\)<\/span>/gs;
                if ( data.match(rexp)) {
                    var fixes = {
                        "∈": "\\in ",
                        "∉": "\\not\\in ",
                        "\\gt{": ">{",
                        "\\lt{": "<{",
                        "\\gt ": ">",
                        "\\lt ": "<",
                        "∅": "\\empty ",
                        "⊂": "\\subset ",
                        "≠": "\\neq ",
                        "·": "\\cdot ",
                        "×": "\\times ",
                        "⟨": "\\langle ",
                        "⟩": "\\rangle ",
                        "▪": "\\blacksquare ",
                        //"≤": "\\leq ",    // ignore, used also out of LaLeX equations
                        //"≥": "\\geq ",    // ignore, used also out of LaLeX equations
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
                    
                    //var rexp = /<span class="math-tex">\\\((.*?)\\\)<\/span>/gs;
                    // if the mathjax plugin is not enabled, 'class="math-tex"' is removed
                    var rexp = /<span>\\\((.*?)\\\)<\/span>/gs;
                    //var rep = '<img src="https:\/\/latex.codecogs.com\/gif.latex?$1" title="$1" \/>';
                    var rep = '<img alt="$1" src="https:\/\/latex.codecogs.com\/gif.latex?$1" \/>';
                    var data = data.replace(rexp,rep);
                    for (var key in fixes) {
                        var value = fixes[key];
                        data = data.replaceAll(key, value);
                    }
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
