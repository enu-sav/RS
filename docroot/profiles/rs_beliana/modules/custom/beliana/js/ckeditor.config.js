/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 WARNING: clear browser's cache after you modify this file.
 If you don't do this, you may notice that browser is ignoring all your changes.
 */
CKEDITOR.editorConfig = function (config) {
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
// Values: 'vercel' or 'codecogs'. Plugin enumat then decides which engine url from enu_config.js to use
//config.ENUMATH_EQUATION_ENGINE = 'vercel'; 
  config.ENUMATH_EQUATION_ENGINE = 'codecogs'; 
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
    ['′', 'minúta, U+2032'],
    ['″', 'sekunda, U+2033'],
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

