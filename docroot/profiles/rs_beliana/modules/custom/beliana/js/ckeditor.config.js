/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 WARNING: clear browser's cache after you modify this file.
 If you don't do this, you may notice that browser is ignoring all your changes.
 */
CKEDITOR.editorConfig = function (config) {
  config.indentClasses = ['rteindent1', 'rteindent2', 'rteindent3', 'rteindent4'];

  // [ Left, Center, Right, Justified ]
  config.justifyClasses = ['rteleft', 'rtecenter', 'rteright', 'rtejustify'];

  // The minimum editor width, in pixels, when resizing it with the resize
  // handle.
  config.resize_minWidth = 450;

  // Protect PHP code tags (<?...?>) so CKEditor will not break them when
  // switching from Source to WYSIWYG.
  // Uncommenting this line doesn't mean the user will not be able to type PHP
  // code in the source. This kind of prevention must be done in the server
  // side
  // (as does Drupal), so just leave this line as is.
  config.protectedSource.push(/<\?[\s\S]*?\?>/g); // PHP Code

  // [#1762328] Uncomment the line below to protect <code> tags in CKEditor
  // (hide them in wysiwyg mode).
  // config.protectedSource.push(/<code>[\s\S]*?<\/code>/gi);
  config.extraPlugins = '';

  // Insert all Smiley image paths as relative or they may fail on SSL pages.
  config.smiley_path = window.CKEDITOR_BASEPATH + 'plugins/smiley/images/';

  /*
    * Append here extra CSS rules that should be applied into the editing area.
    * Example:
    * config.extraCss = 'body {color:#FF0000;}';
    */
  config.extraCss = '';

  /**
   * CKEditor's editing area body ID & class.
   * See http://drupal.ckeditor.com/tricks
   * This setting can be used if CKEditor does not work well with your theme by
   * default.
   */
  config.bodyClass = '';
  config.bodyId = '';

  // Make CKEditor's edit area as high as the textarea would be.
  if (this.element.$.rows > 0) {
    config.height = this.element.$.rows * 20 + 'px';
  }

// na https stránke je požadovaný https pristup na cdn
// must be placed before the  config.autosave line (and maybe others)
  config.mathJaxLib = 'https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.0/MathJax.js?config=TeX-AMS-MML_HTMLorMML';
  config.undoStackSize = 40;
//config.autoGrow_maxHeight = 500;
  config.autoGrow_minHeight = 50;
  config.autoGrow_bottomSpace = 10;
  config.autoGrow_onStartup = true;
// in general do not convert to html entities
  config.entities = false;
// convert some characters (<>&) to html entities
  config.basicEntities = true;
//config.basicEntities = false;
  config.defaultLanguage = 'sk';
  config.language = 'sk';
  config.disableNativeSpellChecker = false;
//config.removePlugins = 'scayt,menubutton,contextmenu';
  config.browserContextMenuOnCtrl = true;
  config.specialChars = [
    ['—', 'dlhá pomlčka: 1. na oddelenie definície od záhlavia, 2. členenie tematických odsekov v texte väčších hesiel'],
    ['–', 'stredná pomlčka, Alt + 2013: 1. číselné rozpätie (1959 – 60), 2. vlak premáva na úseku Bratislava – Malacky – Kúty.'],
    ['-', 'spojovník: v zložených slovách bez medzier (Rakúsko-Uhorsko, bielo-modrý).'],
    ['➔', 'šípka v odkaze'],
    ['*', 'hviezdička'],
    ['†', 'krížik'],
    ['…', 'elipsa'],
    ['[', 'hranatá zátvorka (v etymológii), aj znamienko v mape znakov'],
    [']', 'hranatá zátvorka (v etymológii), aj znamienko v mape znakov'],
    ['>', 'etymológia [gr. > lat.] = s medzerou'],
    ['„', 'ľavá úvodzovka'],
    ['“', 'pravá úvodzovka'],
    ['’', 'apostrof (bez medzery)'],
    ['°', 'stupeň (4°C)  ale uhol  90°1°18’ (spolu bez medzier)'],
    ['‘', 'minúta'],
    ['“', 'sekunda'],
    ['′', 'prime'],
    ['@', 'zavináč'],
    ['·', 'krát'],
    ['×', 'krát'],
    ['±', 'plus minus'],
    ['−', 'znamienko mínus, Alt +2212'],
    ['>', 'znak väčší'],
    ['<', 'znak menší'],
    ['≤', 'znak menší alebo rovný'],
    ['≥', 'znak väčší alebo rovný'],
    ['‰', 'Promile'],
    ['%', 'Percento'],
    ['&', 'and'],
    ['©', 'Copyright'],
    ['§', 'paragraf'],
    ['µ', 'mikro'],
    ['Ω', 'Ohm'],
    ['∞', 'nekonečno'],
    ['#', ''],
    ['≈', 'približne, takmer rovné'],
    ['≅', 'približne rovné'],
    ['≠', 'rôzne'],
    ['≡', 'identické'],
    ['$', 'Dolár'],
    ['¢', 'Cent'],
    ['£', 'Libra'],
    ['¥', 'Jen'],
    ['€', 'Euro'],
    ['ᴅ', 'kapitálka D, zápis chirality'],
    ['ʟ', 'kapitálka L, zápis chirality'],
    ['→', 'šípka v chemickej reakcii; implikuje'],
    ['↔', 'šípka v chemickej reakcii'],
    ['⇌', 'šípka v chemickej reakcii'],
    ['ℵ', 'alef, ALT+2135'],
    ['∧', 'logické AND, ALT+2227'],
    ['∨', 'logické OR, ALT+2228'],
    ['¬', 'negácia'],
    ['⇒', 'implikácia'],
    ['⇔', 'ekvivalencia'],
    ['∩', 'prienik množín (Alt+2229)'],
    ['∪', 'zjednotenie množín (Alt+222A)'],
    ['∁', 'doplnok množiny (Alt+2201)'],
    ['●', 'čierna bodka'],
    ['–', 'dlhá slabika'],
    ['⏑', 'krátka slabika'],
    ['⏓', 'dlhá alebo krátka slabika'],
    ['︱', 'oddeľovač stôp'],
    'α', 'β', 'γ', 'δ', 'ε', 'ζ', 'η', 'θ', 'ι', 'κ', 'λ', 'μ', 'ν', 'ξ', 'ο', 'π', 'ρ', 'σ', 'τ', 'υ', 'φ', 'χ', 'ψ', 'ω', 'Α', 'Β', 'Γ', 'Δ',
    'Ε', 'Ζ', 'Η', 'Θ', 'Ι', 'Κ', 'Λ', 'Μ', 'Ν', 'Ξ', 'Ο', 'Π', 'Ρ', 'Σ', 'Τ', 'Υ', 'Φ', 'Χ', 'Ψ', 'Ω', 'à', 'á', 'â', 'ã', 'ä', 'ā', 'ą', 'ă',
    'å', 'æ', 'ç', 'ć', 'č', 'ĉ', 'ċ', 'ď',
    ['ð', 'znak eth, islandčina, faerčina, stará angličtina'],
    ['đ', 'chorvátčina, vietnamčima, sami'],
    'è', 'é', 'ê', 'ë', 'ē', 'ę', 'ě', 'ĕ', 'ė', 'ǝ', 'ƒ', 'ǧ', 'ĝ', 'ğ', 'ġ', 'ģ', 'ȟ', 'ĥ', 'ħ', 'ḩ', 'ì', 'í', 'î', 'ï', 'ī', 'ĩ', 'ĭ', 'į',
    'ı', 'ĵ', 'ķ', 'ĸ', 'ł', 'ľ', 'ĺ', 'ļ', 'ŀ', 'ñ', 'ń', 'ň', 'ņ', 'ŉ', 'ŋ', 'ò', 'ó', 'ô', 'õ',
    ['ǫ', 'o+ogonek'],
    'ö', 'ø', 'ō', 'ő', 'ŏ', 'œ', 'ŕ', 'ř', 'ŗ', 'ś', 'š',
    ['ş', 's chvostíkom'],
    ['ș', 'rumunčina, s čiarkou'],
    'ť',
    ['ţ', 's chvostíkom'],
    ['ț', 'rumunčina, s čiarkou'],
    'þ', 'ù', 'ú', 'û', 'ü', 'ū', 'ů', 'ű', 'ŭ', 'ũ', 'ų', 'ŵ', 'ÿ', 'ý', 'ŷ', 'ż', 'ź', 'ž', 'ß', 'À', 'Á', 'Â', 'Ã', 'Ä', 'Å', 'Æ', 'Ā', 'Ç',
    'Ć', 'Č', 'Ĉ', 'Ċ', 'Ď',
    ['Ð', 'znak eth, islandčina, faerčina, stará angličtina'],
    ['Đ', 'chorvátčina, vietnamčima, sami'],
    'È', 'É', 'Ê', 'Ë', 'Ē', 'Ę', 'Ě', 'Ĕ', 'Ė', 'Ǧ', 'Ĝ', 'Ğ', 'Ġ', 'Ģ', 'Ȟ', 'Ĥ', 'Ḩ', 'Ì', 'Í', 'Î', 'Ï', 'Ī', 'Ĩ', 'Ĭ', 'Į', 'İ', 'Ĵ', 'Ķ',
    'Ľ', 'Ĺ', 'Ļ', 'Ŀ', 'Ł', 'Ñ', 'Ń', 'Ň', 'Ņ', 'Ŋ', 'Ò', 'Ó', 'Ô', 'Õ', 'Ö', 'Ø', 'Ō', 'Ő', 'Ŏ', 'Œ', 'Ŕ', 'Ř', 'Ŗ', 'Ś',
    ['Ş', 's chvostíkom'],
    ['Ș', 'rumunčina, s čiarkou'],
    'Ŝ', 'Š', 'Ť', ['Ţ', 's chvostíkom'],
    ['Ț', 'rumunčina, s čiarkou'],
    'Ŧ', 'Þ', 'Ù', 'Ú', 'Û', 'Ü', 'Ū', 'Ů', 'Ű', 'Ŭ', 'Ũ', 'Ų', 'Ŵ', 'Ŷ', 'Ÿ', 'Ý', 'Ź', 'Ż', 'Ž'
  ];
}

/**
 * To enable browser native spell checker uncomment (default) first of
 * following two lines. The second line (is a default setting and can leave
 * commented) allows access to browser context menu with ctrl-right-click
 * otherwise there is no access to the browser context menu without further
 * config changes
 */
CKEDITOR.config.disableNativeSpellChecker = false;
// CKEDITOR.config.browserContextMenuOnCtrl = true;

/** NOT TESTED
 * For browser default context menu on right-click rather than ctrl-right-click
 * Note: Disabling CKEditor's context menu may render it impossible to work
 * with tables uncomment following lines; three plugins need to be removed
 * because scayt depends on menubutton which depends on contextmenu
 */
// config.browserContextMenuOnCtrl = false;
// config.removePlugins = 'scayt,menubutton,contextmenu';

