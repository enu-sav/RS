<?php
/**
 * @file
 * rs_beliana_media.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function rs_beliana_media_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\',\'Cut\',\'Copy\',\'Replace\',\'Find\'],
    [\'Undo\',\'Redo\'],
    [\'JustifyCenter\',\'Bold\',\'Italic\'],
    [\'Link\',\'Unlink\',\'Subscript\',\'Superscript\'],
    [\'Table\',\'Mathjax\',\'BGColor\',\'SpecialChar\',\'Image\'],
    [\'flite-acceptall\',\'flite-rejectall\',\'flite-toggleshow\',\'flite-toggletracking\',\'flite-acceptone\',\'flite-rejectone\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'sk',
        'auto_lang' => 'f',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '// na https stránke je požadovaný https pristup na cdn
// must be placed before the  config.autosave line (and maybe others)
config.mathJaxLib = \'https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.0/MathJax.js?config=TeX-AMS-MML_HTMLorMML\';
config.undoStackSize = 40;
// keep autosaved stuff for 14 days
config.autosave_NotOlderThen = 20160;
//config.autoGrow_maxHeight = 500;
config.autoGrow_minHeight = 50;
config.autoGrow_bottomSpace = 10;
config.autoGrow_onStartup = true;
// in general do not convert to html entities
config.entities = false;
// convert some characters (<>&) to html entities
config.basicEntities = true;
//config.basicEntities = false;
config.defaultLanguage = \'sk\';
config.language = \'sk\';
config.disableNativeSpellChecker = false;
//config.removePlugins = \'scayt,menubutton,contextmenu\';
config.browserContextMenuOnCtrl = true;
config.specialChars = [ 
[\'—\', \'dlhá pomlčka: 1. na oddelenie definície od záhlavia, 2. členenie tematických odsekov v texte väčších hesiel\'],
[\'–\', \'stredná pomlčka, Alt + 2013: 1. číselné rozpätie (1959 – 60), 2. vlak premáva na úseku Bratislava – Malacky – Kúty.\'],
[\'-\', \'spojovník: v zložených slovách bez medzier (Rakúsko-Uhorsko, bielo-modrý).\'],
[\'➔\', \'šípka na webe\'],
[\'*\',\'hviezdička\'],
[\'†\', \'krížik\'],
[\'…\', \'elipsa\'],
[\'[\', \'hranatá zátvorka (v etymológii), aj znamienko v mape znakov\'],
[\']\', \'hranatá zátvorka (v etymológii), aj znamienko v mape znakov\'],
[\'>\', \'etymológia [gr. > lat.] = s medzerou\'],
[\'„\', \'ľavá úvodzovka\'],
[\'“\', \'pravá úvodzovka\'],
[\'’\', \'apostrof (bez medzery)\'],
[\'°\', \'stupeň (4°C)  ale uhol  90°    1°18’ (spolu bez medzier)\'],
[\'‘\', \'minúta  \'],
[\'“\', \'sekunda\'],
[\'′\', \'prime\'],
[\'@\', \'zavináč\'],
[\'·\', \'krát\'],
[\'×\', \'krát\'],
[\'±\', \'plus minus\'],
[\'−\',\'znamienko mínus, Alt +2212\'],
[\'>\', \'znak väčší  \'], \'≥\',
[\'<\', \'znak menší\'], \'≤\', 
[\'‰\', \'Promile\'],
[\'%\', \'Percento\'],
[\'&\', \'and\'],
[\'©\', \'Copyright\'],
[\'§\', \'paragraf\'],
[\'µ\',\'mikro\'],
[\'Ω\',\'Ohm\'],
[\'∞\',\'nekonečno\'],
[\'#\',\'\'],
[\'≈\',\'približne, takmer rovné\'],
[\'≅\',\'približne rovné\'],
[\'≠\',\'rôzne\'],
[\'≡\',\'identické\'],
[\'$\', \'Dolár\'],
[\'¢\', \'Cent\'],
[\'£\', \'Libra\'],
[\'¥\', \'Jen\'],
[\'€\', \'Euro\'],
[\'ᴅ\', \'kapitálka D, zápis chirality\'],
[\'ʟ\', \'kapitálka L, zápis chirality\'],
[\'→\', \'šípka v chemickej reakcii; implikuje\'],
[\'⇌\', \'šípka v chemickej reakcii\'],
["ℵ",\'alef, ALT+2135\'],
[\'∧\',\'logické AND, ALT+2227\'],
[\'∨\',\'logické OR, ALT+2228\'],
[\'¬\',\'negácia\'],
[\'⇒\',\'implikácia\'],
[\'⇔\',\'ekvivalencia\'],
["∩", "prienik množín (Alt+2229)"],
["∪", "zjednotenie množín (Alt+222A)"],
["∁", "doplnok množiny (Alt+2201)"],
["●", "čierna bodka"],
[\'–\', \'dlhá slabika\'],
[\'⏑\', \'krátka slabika\'],
[\'⏓\', \'dlhá alebo krátka slabika\'],
[\'︱\', \'oddeľovač stôp\'],
\'α\', \'β\', \'γ\', \'δ\', \'ε\', \'ζ\', \'η\', \'θ\', \'ι\', \'κ\', \'λ\', \'μ\', \'ν\', \'ξ\', \'ο\', \'π\', \'ρ\', \'σ\', \'τ\', \'υ\', \'φ\', \'χ\', \'ψ\', \'ω\',
\'Α\', \'Β\', \'Γ\', \'Δ\', \'Ε\', \'Ζ\', \'Η\', \'Θ\', \'Ι\', \'Κ\', \'Λ\', \'Μ\', \'Ν\', \'Ξ\', \'Ο\', \'Π\', \'Ρ\', \'Σ\', \'Τ\', \'Υ\', \'Φ\', \'Χ\', \'Ψ\', \'Ω\',
\'à\', \'á\', \'â\', \'ã\', \'ä\', \'ā\', \'ą\', \'ă\', \'å\', \'æ\', 
\'ç\', \'ć\', \'č\', \'ĉ\', \'ċ\', \'ď\', [\'ð\',\'znak eth, islandčina, faerčina, stará angličtina\'],[\'đ\',\'chorvátčina, vietnamčima, sami\'], \'è\', \'é\', \'ê\', 
\'ë\', \'ē\', \'ę\', \'ě\', \'ĕ\', \'ė\', \'ƒ\', \'ǧ\', \'ĝ\', \'ğ\', \'ġ\', 
\'ģ\', \'ȟ\', \'ĥ\', \'ħ\', \'ḩ\', \'ì\', \'í\', \'î\', \'ï\', \'ī\', \'ĩ\', \'ĭ\', 
\'į\', \'ı\', \'ĵ\', \'ķ\', \'ĸ\', \'ł\', \'ľ\', \'ĺ\', \'ļ\', \'ŀ\', 
\'ñ\', \'ń\', \'ň\', \'ņ\', \'ŉ\', \'ŋ\', \'ò\', \'ó\', \'ô\', \'õ\', [\'ǫ\',\'o+ogonek\'],
\'ö\', \'ø\', \'ō\', \'ő\', \'ŏ\', \'œ\', \'ŕ\', \'ř\', \'ŗ\', \'ś\', 
\'š\', [\'ş\',\'s chvostíkom\'], [\'ș\',\'rumunčina, s čiarkou\'], \'ť\', [\'ţ\',\'s chvostíkom\'], [\'ț\',\'rumunčina, s čiarkou\'],\'þ\', \'ù\', \'ú\', \'û\', \'ü\', \'ū\', \'ů\',
\'ű\', \'ŭ\', \'ũ\', \'ų\', \'ŵ\', \'ÿ\', \'ý\', \'ŷ\', \'ż\', \'ź\', 
\'ž\', \'ß\', 
\'À\', \'Á\', \'Â\', \'Ã\', \'Ä\', \'Å\', \'Æ\', \'Ā\', \'Ç\', \'Ć\', 
\'Č\', \'Ĉ\', \'Ċ\', \'Ď\', [\'Ð\',\'znak eth, islandčina, faerčina, stará angličtina\'],[\'Đ\',\'chorvátčina, vietnamčima, sami\'], \'È\', \'É\', \'Ê\', \'Ë\', \'Ē\', 
\'Ę\', \'Ě\', \'Ĕ\', \'Ė\', \'Ǧ\', \'Ĝ\', \'Ğ\', \'Ġ\', \'Ģ\', \'Ȟ\', \'Ĥ\', \'Ḩ\', \'Ì\', 
\'Í\', \'Î\', \'Ï\', \'Ī\', \'Ĩ\', \'Ĭ\', \'Į\', \'İ\', \'Ĵ\', \'Ķ\', 
\'Ľ\', \'Ĺ\', \'Ļ\', \'Ŀ\', \'Ł\', \'Ñ\', \'Ń\', \'Ň\', \'Ņ\', \'Ŋ\', 
\'Ò\', \'Ó\', \'Ô\', \'Õ\', \'Ö\', \'Ø\', \'Ō\', \'Ő\', \'Ŏ\', \'Œ\', 
\'Ŕ\', \'Ř\', \'Ŗ\', \'Ś\', [\'Ş\',\'s chvostíkom\'], [\'Ș\',\'rumunčina, s čiarkou\'], \'Ŝ\', \'Š\', \'Ť\', [\'Ţ\',\'s chvostíkom\'], [\'Ț\',\'rumunčina, s čiarkou\'], 
\'Ŧ\',\'Þ\', \'Ù\', \'Ú\', \'Û\', \'Ü\', \'Ū\', \'Ů\', \'Ű\', \'Ŭ\', 
\'Ũ\', \'Ų\', \'Ŵ\', \'Ŷ\', \'Ÿ\', \'Ý\', \'Ź\', \'Ż\', \'Ž\'
];
 ',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin. See <a href="http://ckeditor.com/addon/autogrow">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.11.3/full-all/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'belianapaste' => array(
            'name' => 'belianapaste',
            'desc' => 'Plugin file: belianapaste',
            'path' => '%plugin_dir%belianapaste/',
            'buttons' => array(
              'BelianaPaste' => array(
                'label' => 'BelianaPaste',
                'icon' => 'icons/belianapaste.png',
              ),
            ),
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'fixed' => array(
            'name' => 'fixed',
            'desc' => 'Plugin file: fixed',
            'path' => '%plugin_dir%fixed/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'flite' => array(
            'name' => 'flite',
            'desc' => 'Plugin file: flite',
            'path' => '%plugin_dir%flite/',
            'buttons' => array(
              'flite-acceptall' => array(
                'label' => 'Accept all changes',
                'icon' => 'icons/flite-acceptall.png',
              ),
              'flite-rejectall' => array(
                'label' => 'Reject all changes',
                'icon' => 'icons/flite-rejectall.png',
              ),
              'flite-acceptone' => array(
                'label' => 'Accept change',
                'icon' => 'icons/flite-acceptone.png',
              ),
              'flite-rejectone' => array(
                'label' => 'Reject change',
                'icon' => 'icons/flite-rejectone.png',
              ),
              'flite-toggleshow' => array(
                'label' => 'Show/hide tracked changes',
                'icon' => 'icons/flite-toggleshow.png',
              ),
              'flite-toggletracking' => array(
                'label' => 'Start/stop tracking changes',
                'icon' => 'icons/flite-toggletracking.png',
              ),
            ),
            'default' => 't',
          ),
          'mathjax' => array(
            'name' => 'mathjax',
            'desc' => 'Plugin for inserting Mathematical Formula (MathJax). See <a href="http://ckeditor.com/addon/mathjax">addon page</a> for more details. See <a href="/admin/help/ckeditor#mathjax">help</a> for additional instructions.',
            'path' => '//cdn.ckeditor.com/4.11.3/full-all/plugins/mathjax/',
            'buttons' => array(
              'Mathjax' => array(
                'icon' => 'icons/mathjax.png',
                'label' => 'Insert Mathematical Formulas',
              ),
            ),
            'default' => 'f',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.11.3/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '//cdn.ckeditor.com/4.11.3/full-all',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '%l/plugins',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Replace\',\'Find\'],
    [\'Undo\',\'Redo\'],
    [\'JustifyCenter\',\'Bold\',\'Italic\'],
    [\'Link\',\'Unlink\',\'Subscript\',\'Superscript\'],
    [\'Table\',\'Mathjax\',\'BGColor\',\'SpecialChar\',\'Image\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'sk',
        'auto_lang' => 'f',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '// na https stránke je požadovaný https pristup na cdn
// must be placed before the  config.autosave line (and maybe others)
config.mathJaxLib = \'https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.0/MathJax.js?config=TeX-AMS-MML_HTMLorMML\';
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
config.defaultLanguage = \'sk\';
config.language = \'sk\';
config.disableNativeSpellChecker = false;
//config.removePlugins = \'scayt,menubutton,contextmenu\';
config.browserContextMenuOnCtrl = true;
config.specialChars = [ 
[\'—\', \'dlhá pomlčka: 1. na oddelenie definície od záhlavia, 2. členenie tematických odsekov v texte väčších hesiel\'],
[\'–\', \'stredná pomlčka, Alt + 2013: 1. číselné rozpätie (1959 – 60), 2. vlak premáva na úseku Bratislava – Malacky – Kúty.\'],
[\'-\', \'spojovník: v zložených slovách bez medzier (Rakúsko-Uhorsko, bielo-modrý).\'],
[\'➔\', \'šípka na webe\'],
[\'*\',\'hviezdička\'],
[\'†\', \'krížik\'],
[\'…\', \'elipsa\'],
[\'[\', \'hranatá zátvorka (v etymológii), aj znamienko v mape znakov\'],
[\']\', \'hranatá zátvorka (v etymológii), aj znamienko v mape znakov\'],
[\'>\', \'etymológia [gr. > lat.] = s medzerou\'],
[\'„\', \'ľavá úvodzovka\'],
[\'“\', \'pravá úvodzovka\'],
[\'’\', \'apostrof (bez medzery)\'],
[\'°\', \'stupeň (4°C)  ale uhol  90°    1°18’ (spolu bez medzier)\'],
[\'‘\', \'minúta  \'],
[\'“\', \'sekunda\'],
[\'′\', \'prime\'],
[\'@\', \'zavináč\'],
[\'·\', \'krát\'],
[\'×\', \'krát\'],
[\'±\', \'plus minus\'],
[\'−\',\'znamienko mínus, Alt +2212\'],
[\'>\', \'znak väčší  \'],\'≥\',
[\'<\', \'znak menší\'],\'≤\',
[\'‰\', \'Promile\'],
[\'%\', \'Percento\'],
[\'&\', \'and\'],
[\'©\', \'Copyright\'],
[\'§\', \'paragraf\'],
[\'µ\',\'mikro\'],
[\'Ω\',\'Ohm\'],
[\'∞\',\'nekonečno\'],
[\'#\',\'\'],
[\'≈\',\'približne, takmer rovné\'],
[\'≅\',\'približne rovné\'],
[\'≠\',\'rôzne\'],
[\'≡\',\'identické\'],
[\'$\', \'Dolár\'],
[\'¢\', \'Cent\'],
[\'£\', \'Libra\'],
[\'¥\', \'Jen\'],
[\'€\', \'Euro\'],
[\'ᴅ\', \'kapitálka D, zápis chirality\'],
[\'ʟ\', \'kapitálka L, zápis chirality\'],
[\'→\', \'šípka v chemickej reakcii; implikuje\'],
[\'⇌\', \'šípka v chemickej reakcii\'],
["ℵ",\'alef, ALT+2135\'],
[\'∧\',\'logické AND, ALT+2227\'],
[\'∨\',\'logické OR, ALT+2228\'],
[\'¬\',\'negácia\'],
[\'⇒\',\'implikácia\'],
[\'⇔\',\'ekvivalencia\'],
["∩", "prienik množín (Alt+2229)"],
["∪", "zjednotenie množín (Alt+222A)"],
["∁", "doplnok množiny (Alt+2201)"],
["●", "čierna bodka"],
[\'–\', \'dlhá slabika\'],
[\'⏑\', \'krátka slabika\'],
[\'⏓\', \'dlhá alebo krátka slabika\'],
[\'︱\', \'oddeľovač stôp\'],
\'α\', \'β\', \'γ\', \'δ\', \'ε\', \'ζ\', \'η\', \'θ\', \'ι\', \'κ\', \'λ\', \'μ\', \'ν\', \'ξ\', \'ο\', \'π\', \'ρ\', \'σ\', \'τ\', \'υ\', \'φ\', \'χ\', \'ψ\', \'ω\',
\'Α\', \'Β\', \'Γ\', \'Δ\', \'Ε\', \'Ζ\', \'Η\', \'Θ\', \'Ι\', \'Κ\', \'Λ\', \'Μ\', \'Ν\', \'Ξ\', \'Ο\', \'Π\', \'Ρ\', \'Σ\', \'Τ\', \'Υ\', \'Φ\', \'Χ\', \'Ψ\', \'Ω\',
\'à\', \'á\', \'â\', \'ã\', \'ä\', \'ā\', \'ą\', \'ă\', \'å\', \'æ\', 
\'ç\', \'ć\', \'č\', \'ĉ\', \'ċ\', \'ď\', [\'ð\',\'znak eth, islandčina, faerčina, stará angličtina\'],[\'đ\',\'chorvátčina, vietnamčima, sami\'], \'è\', \'é\', \'ê\', 
\'ë\', \'ē\', \'ę\', \'ě\', \'ĕ\', \'ė\', \'ƒ\', \'ǧ\', \'ĝ\', \'ğ\', \'ġ\', 
\'ģ\', \'ȟ\', \'ĥ\', \'ħ\', \'ḩ\',  \'ì\', \'í\', \'î\', \'ï\', \'ī\', \'ĩ\', \'ĭ\', 
\'į\', \'ı\', \'ĵ\', \'ķ\', \'ĸ\', \'ł\', \'ľ\', \'ĺ\', \'ļ\', \'ŀ\', 
\'ñ\', \'ń\', \'ň\', \'ņ\', \'ŉ\', \'ŋ\', \'ò\', \'ó\', \'ô\', \'õ\',  [\'ǫ\',\'o+ogonek\'],
\'ö\', \'ø\', \'ō\', \'ő\', \'ŏ\', \'œ\', \'ŕ\', \'ř\', \'ŗ\', \'ś\', 
\'š\', [\'ş\',\'s chvostíkom\'], [\'ș\',\'rumunčina, s čiarkou\'], \'ť\', [\'ţ\',\'s chvostíkom\'], [\'ț\',\'rumunčina, s čiarkou\'],\'þ\', \'ù\', \'ú\', \'û\', \'ü\', \'ū\', \'ů\',
\'ű\', \'ŭ\', \'ũ\', \'ų\', \'ŵ\', \'ÿ\', \'ý\', \'ŷ\', \'ż\', \'ź\', 
\'ž\', \'ß\', 
\'À\', \'Á\', \'Â\', \'Ã\', \'Ä\', \'Å\', \'Æ\', \'Ā\', \'Ç\', \'Ć\', 
\'Č\', \'Ĉ\', \'Ċ\', \'Ď\', [\'Ð\',\'znak eth, islandčina, faerčina, stará angličtina\'],[\'Đ\',\'chorvátčina, vietnamčima, sami\'], \'È\', \'É\', \'Ê\', \'Ë\', \'Ē\', 
\'Ę\', \'Ě\', \'Ĕ\', \'Ė\', \'Ǧ\', \'Ĝ\', \'Ğ\', \'Ġ\', \'Ģ\', \'Ȟ\', \'Ĥ\', \'Ḩ\', \'Ì\', 
\'Í\', \'Î\', \'Ï\', \'Ī\', \'Ĩ\', \'Ĭ\', \'Į\', \'İ\', \'Ĵ\', \'Ķ\', 
\'Ľ\', \'Ĺ\', \'Ļ\', \'Ŀ\', \'Ł\', \'Ñ\', \'Ń\', \'Ň\', \'Ņ\', \'Ŋ\', 
\'Ò\', \'Ó\', \'Ô\', \'Õ\', \'Ö\', \'Ø\', \'Ō\', \'Ő\', \'Ŏ\', \'Œ\', 
\'Ŕ\', \'Ř\', \'Ŗ\', \'Ś\', [\'Ş\',\'s chvostíkom\'], [\'Ș\',\'rumunčina, s čiarkou\'], \'Ŝ\', \'Š\', \'Ť\', [\'Ţ\',\'s chvostíkom\'], [\'Ț\',\'rumunčina, s čiarkou\'], 
\'Ŧ\',\'Þ\', \'Ù\', \'Ú\', \'Û\', \'Ü\', \'Ū\', \'Ů\', \'Ű\', \'Ŭ\', 
\'Ũ\', \'Ų\', \'Ŵ\', \'Ŷ\', \'Ÿ\', \'Ý\', \'Ź\', \'Ż\', \'Ž\'
];',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin. See <a href="http://ckeditor.com/addon/autogrow">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.11.3/full-all/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'belianapaste' => array(
            'name' => 'belianapaste',
            'desc' => 'Plugin file: belianapaste',
            'path' => '%plugin_dir%belianapaste/',
            'buttons' => array(
              'BelianaPaste' => array(
                'label' => 'BelianaPaste',
                'icon' => 'icons/belianapaste.png',
              ),
            ),
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'fixed' => array(
            'name' => 'fixed',
            'desc' => 'Plugin file: fixed',
            'path' => '%plugin_dir%fixed/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'mathjax' => array(
            'name' => 'mathjax',
            'desc' => 'Plugin for inserting Mathematical Formula (MathJax). See <a href="http://ckeditor.com/addon/mathjax">addon page</a> for more details. See <a href="/admin/help/ckeditor#mathjax">help</a> for additional instructions.',
            'path' => '//cdn.ckeditor.com/4.11.3/full-all/plugins/mathjax/',
            'buttons' => array(
              'Mathjax' => array(
                'icon' => 'icons/mathjax.png',
                'label' => 'Insert Mathematical Formulasss',
              ),
            ),
            'default' => 'f',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.11.3/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
