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
    [\'Bold\',\'Italic\'],
    [\'Link\',\'Unlink\',\'Subscript\',\'Superscript\'],
    [\'Table\',\'BGColor\',\'EqnEditor\',\'SpecialChar\',\'Image\'],
    [\'lite-acceptall\',\'lite-rejectall\',\'lite-toggleshow\',\'lite-toggletracking\',\'lite-acceptone\',\'lite-rejectone\']
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
        'disableNativeSpellChecker' => 'f',
        'config_js' => 'self',
        'config_js_path' => '/profiles/rs_beliana/modules/custom/beliana/js/ckeditor.config.js',
        'js_conf' => '',
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
          'eqneditor' => array(
            'name' => 'eqneditor',
            'desc' => 'Plugin file: eqneditor',
            'path' => '%plugin_dir%eqneditor/',
            'buttons' => array(
              'EqnEditor' => array(
                'label' => 'EqnEditor',
                'icon' => 'icons/eqneditor.png',
              ),
            ),
            'default' => 'f',
          ),
          'fixed' => array(
            'name' => 'fixed',
            'desc' => 'Plugin file: fixed',
            'path' => '%plugin_dir%fixed/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'lite' => array(
            'name' => 'lite',
            'desc' => 'Plugin file: lite',
            'path' => '%plugin_dir%lite/',
            'buttons' => array(
              'lite-acceptall' => array(
                'label' => 'Accept all changes',
                'icon' => 'icons/lite-acceptall.png',
              ),
              'lite-rejectall' => array(
                'label' => 'Reject all changes',
                'icon' => 'icons/lite-rejectall.png',
              ),
              'lite-acceptone' => array(
                'label' => 'Accept change',
                'icon' => 'icons/lite-acceptone.png',
              ),
              'lite-rejectone' => array(
                'label' => 'Reject change',
                'icon' => 'icons/lite-rejectone.png',
              ),
              'lite-toggleshow' => array(
                'label' => 'Show/hide tracked changes',
                'icon' => 'icons/lite-toggleshow.png',
              ),
              'lite-toggletracking' => array(
                'label' => 'Start/stop tracking changes',
                'icon' => 'icons/lite-toggletracking.png',
              ),
            ),
            'default' => 't',
          ),
          'lite-fix' => array(
            'name' => 'lite-fix',
            'desc' => 'Plugin file: lite-fix',
            'path' => '%plugin_dir%lite-fix/',
            'buttons' => FALSE,
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
    [\'JustifyCenter\',\'Bold\',\'Italic\',\'Format\'],
    [\'Link\',\'Unlink\',\'Subscript\',\'Superscript\',\'Mathjax\'],
    [\'Table\',\'TextColor\',\'BGColor\',\'SpecialChar\',\'Image\'],
    []
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
        'font_format' => 'p;h2;h3',
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
        'disableNativeSpellChecker' => 'f',
        'config_js' => 'self',
        'config_js_path' => '/profiles/rs_beliana/modules/custom/beliana/js/ckeditor.config.js',
        'js_conf' => '',
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
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
