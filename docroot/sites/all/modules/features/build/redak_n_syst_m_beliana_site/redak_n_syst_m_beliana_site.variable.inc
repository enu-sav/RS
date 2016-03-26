<?php
/**
 * @file
 * redak_n_syst_m_beliana_site.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function redak_n_syst_m_beliana_site_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['environment']['dev'] = array();
  $realm_variables['environment']['test'] = array();
  $realm_variables['global']['default'] = array(
  'additional_settings__active_tab_gheslo' => 'edit-simplify--2',
  'additional_settings__active_tab_heslo' => 'edit-workflow',
  'additional_settings__active_tab_ilustracia' => 'edit-submission',
  'additional_settings__active_tab_importovane_heslo' => 'edit-diff',
  'additional_settings__active_tab_osobnost' => 'edit-comment',
  'additional_settings__active_tab_oznam' => 'edit-diff',
  'admin_menu_cache_client' => 1,
  'admin_menu_components' => array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.account' => TRUE,
    'admin_menu.search' => FALSE,
    'admin_menu.users' => FALSE,
  ),
  'admin_menu_margin_top' => 1,
  'admin_menu_position_fixed' => 1,
  'admin_menu_tweak_modules' => 0,
  'admin_menu_tweak_permissions' => 0,
  'admin_menu_tweak_tabs' => 0,
  'admin_theme' => 'adminimal',
  'adminimal_admin_menu_core-toolbar-disabled' => TRUE,
  'adminimal_admin_menu_jquery' => 0,
  'adminimal_admin_menu_slicknav' => 0,
  'advanced__active_tab' => 'edit-performance',
  'anonymous' => 'Anonymný',
  'array_filter' => '',
  'block_cache' => FALSE,
  'cache' => 1,
  'cache_class_cache_ctools_css' => 'CToolsCssCache',
  'cache_flush_cache' => 0,
  'cache_flush_cache_block' => 1458937521,
  'cache_flush_cache_features' => 0,
  'cache_flush_cache_feeds_http' => 0,
  'cache_flush_cache_field' => 0,
  'cache_flush_cache_filter' => 1458937142,
  'cache_flush_cache_form' => 0,
  'cache_flush_cache_hacked' => 1458937142,
  'cache_flush_cache_image' => 1458937142,
  'cache_flush_cache_libraries' => 1458937142,
  'cache_flush_cache_menu' => 0,
  'cache_flush_cache_page' => 1458937142,
  'cache_flush_cache_path' => 0,
  'cache_flush_cache_rules' => 0,
  'cache_flush_cache_token' => 0,
  'cache_flush_cache_variable' => 0,
  'cache_flush_cache_views' => 0,
  'cache_flush_cache_views_data' => 1458937142,
  'cache_lifetime' => 900,
  'clean_url' => 1,
  'color_bartik_files' => array(
    0 => 'public://color/bartik-0c0efe47/logo.png',
    1 => 'public://color/bartik-0c0efe47/colors.css',
  ),
  'color_bartik_logo' => 'public://color/bartik-0c0efe47/logo.png',
  'color_bartik_palette' => array(
    'top' => '#4a4a4a',
    'bottom' => '#4e4e4e',
    'bg' => '#ffffff',
    'sidebar' => '#ffffff',
    'sidebarborders' => '#d0d0d0',
    'footer' => '#161617',
    'titleslogan' => '#ffffff',
    'text' => '#3b3b3b',
    'link' => '#0073b6',
  ),
  'color_bartik_stylesheets' => array(
    0 => 'public://color/bartik-0c0efe47/colors.css',
  ),
  'color_garland_files' => array(
    0 => 'public://color/garland-fb3a851e/menu-collapsed.gif',
    1 => 'public://color/garland-fb3a851e/menu-collapsed-rtl.gif',
    2 => 'public://color/garland-fb3a851e/menu-expanded.gif',
    3 => 'public://color/garland-fb3a851e/menu-leaf.gif',
    4 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/body.png',
    5 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-bar.png',
    6 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-bar-white.png',
    7 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-tab.png',
    8 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-navigation.png',
    9 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-content-left.png',
    10 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-content-right.png',
    11 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-content.png',
    12 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-navigation-item.png',
    13 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/bg-navigation-item-hover.png',
    14 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/gradient-inner.png',
    15 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/logo.png',
    16 => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/screenshot.png',
    17 => 'public://color/garland-fb3a851e/style.css',
    18 => 'public://color/garland-fb3a851e/style-rtl.css',
  ),
  'color_garland_logo' => 'public://color/garland-fb3a851e/logo.png',
  'color_garland_palette' => array(
    'base' => '#3f3f3f',
    'link' => '#336699',
    'top' => '#6598cb',
    'bottom' => '#6598cb',
    'text' => '#000000',
  ),
  'color_garland_screenshot' => '/home1/skopenac/public_html/drupal7/sites/default/files/color/garland-fb3a851e/screenshot.png',
  'color_garland_stylesheets' => array(
    0 => 'public://color/garland-fb3a851e/style.css',
    1 => 'public://color/garland-fb3a851e/style-rtl.css',
  ),
  'comment_anonymous_heslo' => 0,
  'comment_anonymous_ilustracia' => 0,
  'comment_anonymous_importovane_heslo' => 0,
  'comment_anonymous_oznam' => 0,
  'comment_default_mode_heslo' => 1,
  'comment_default_mode_ilustracia' => 1,
  'comment_default_mode_importovane_heslo' => 1,
  'comment_default_mode_oznam' => 1,
  'comment_default_per_page_heslo' => 50,
  'comment_default_per_page_ilustracia' => 50,
  'comment_default_per_page_importovane_heslo' => 50,
  'comment_default_per_page_oznam' => 50,
  'comment_form_location_heslo' => 1,
  'comment_form_location_ilustracia' => 1,
  'comment_form_location_importovane_heslo' => 1,
  'comment_form_location_oznam' => 1,
  'comment_heslo' => 1,
  'comment_ilustracia' => 1,
  'comment_importovane_heslo' => 1,
  'comment_oznam' => 1,
  'comment_page' => 0,
  'comment_preview_heslo' => 1,
  'comment_preview_ilustracia' => 1,
  'comment_preview_importovane_heslo' => 1,
  'comment_preview_oznam' => 1,
  'comment_subject_field_heslo' => 0,
  'comment_subject_field_ilustracia' => 0,
  'comment_subject_field_importovane_heslo' => 0,
  'comment_subject_field_oznam' => 1,
  'configurable_timezones' => 1,
  'cron_key' => 'vT2Hu1JdX8QUGcpw4KpbQZrjsoPTb4Us15lgup37lxs',
  'cron_last' => 1458937142,
  'css_js_query_string' => 'o4m3f8',
  'ctools_last_cron' => 1458937142,
  'date_api_version' => 7.2,
  'date_default_timezone' => 'Europe/Bratislava',
  'date_first_day' => 1,
  'date_format_long' => 'l, F j, Y - H:i',
  'date_format_medium' => 'D, m/d/Y - H:i',
  'date_format_short' => 'd.m.Y - H:i',
  'date_popup_timepicker' => 'none',
  'dblog_row_limit' => 1000,
  'default_environment_indicator_environment' => array(
    'default_environment' => TRUE,
  ),
  'default_feeds_tamper' => array(
    'bb-iltext-explode' => FALSE,
    'bb-editor-explode' => FALSE,
    'bb-autor-explode' => FALSE,
    'bb-kategoria-explode' => FALSE,
    'bb-datum-explode' => FALSE,
    'bb-den-explode' => FALSE,
    'bb-atrib-explode' => FALSE,
    'beliana_importovanie_gh-kategoria-explode' => TRUE,
    'beliana_importovanie_gh-geo-explode' => FALSE,
    'import_ilustr_cie-kategoria-explode' => FALSE,
    'bb-ilustracia-explode' => FALSE,
  ),
  'default_nodes_main' => 10,
  'diff_enable_revisions_page_node_heslo' => 1,
  'diff_enable_revisions_page_node_ilustracia' => 1,
  'diff_enable_revisions_page_node_importovane_heslo' => 1,
  'diff_enable_revisions_page_node_oznam' => 0,
  'diff_show_preview_changes_node_heslo' => 1,
  'diff_show_preview_changes_node_ilustracia' => 1,
  'diff_show_preview_changes_node_importovane_heslo' => 1,
  'diff_show_preview_changes_node_oznam' => 0,
  'diff_view_mode_preview_node_heslo' => 'full',
  'diff_view_mode_preview_node_ilustracia' => 'full',
  'diff_view_mode_preview_node_importovane_heslo' => 'full',
  'diff_view_mode_preview_node_oznam' => 'full',
  'drupal_css_cache_files' => array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_xE-rWrJf-fncB6ztZfd2huxqgxu4WO-qwma6Xer30m4.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    'aec6e1cf9ea6248691270a4fc4fdb60af312888b664c2ade3b4d14f36e860642' => 'public://css/css_0_wx2G_mUExJSPSHDAgHLpElM8pp6-yBm_GknTmTV64.css',
    'b4d0faf4dadeb8b631904ee28b3e7dafb10bc5e9d29125740dde8de7945c5e0e' => 'public://css/css_Lv8g4_FbsiAyp_9mSocsMPiVWduKL2fo3Gb0gBt1juk.css',
    'd7aded735ebf8263dcdca6504b99427a8d49503337a9e499c9c5560049ad0258' => 'public://css/css_t9jU8UFBRg6DVWKff15jS8TEOtf41b1TBxjcN42M5eQ.css',
    '9d562969e445f04ec49d5712419064958e81a7a83d4923c239da0fe3028e6c5b' => 'public://css/css_JON-ZBVrMdkB17Lmr0Kr4ZJnK4M5DLrWz8ri0FjFFHo.css',
    '51731469c83bc0573c72ab740a6f969d1617370b61af04529624e1860712263e' => 'public://css/css_rYF4nvgd6_5Zqe4lt5E-B99VAdgB2nuAlSKEF3VtJcU.css',
    'dbf7e7a77fb8eb96b3191743d8dd8ef1cc64e79abdc51c93b43c56aeb3978c23' => 'public://css/css_vi3nzvogmgVh5I4Jq3YLxPPC6wcaofKh9AafeFRzpqs.css',
    'e358fb765769102174fc9dd3066ca162a81dfdc1490403b3c9e994be7539bf63' => 'public://css/css_Jg7EanH8NK5V5RhzKk026YmQvoYeomu3jCPbzhot__Y.css',
    'bd6c06c837cecb8325ac4214a5440a27740f55ea0101411a8b99dc2e6875e11f' => 'public://css/css_DyvGQZL8LOKGrV-yI-0bSTVj10Sx1MiE2v8gtQS4mP8.css',
    '249f1b9170d1bef5eb897c21a1435b16f9b3d6e093d3dff8e5d733164804226d' => 'public://css/css_z7n6LMaK0E2OE6MdGLGL4kVCSMboC6waJ9xrFx72Erc.css',
    '0d699a8da36ff3d0a1589de38428e124d9965e0cae8630024169f0e71b4caf41' => 'public://css/css_kacHO2QkSTnYE-MjjSnpeURPp6Vpn0c9cTNdyIbYcPU.css',
    'faee69fee8be95ec10111131f6de19a32aa651fd848ecbbaaa32d44f5ac2ed5a' => 'public://css/css_tgU5kcd5bPbvCo_xh_vvJApOb8q5bx9MFYlbxjZd9A4.css',
    'fedee1e035f89422575ef3f13a5798b7ade41a164563430bce8cc00ba0432b10' => 'public://css/css_VQB-8KFNI0kba6Wkc-l2KBQPllY8FwASUx-yN_vezGA.css',
    '12c01f21c7e0912774312703d3f65d00aff50f1836ace905d7eb7d4ca72225b7' => 'public://css/css_eViOvmt3gvjsJnL8BgkZA2PKD2fmtMRuZkOdd1wL02A.css',
    '530acfcfc04f0685d773694d4ba8103a3c0270d36e8ed043a8668875f86547b5' => 'public://css/css_IBuYG2LN3u1_rvf3Y08KeXtoklfcGVsTvlsusQqZ_yc.css',
  ),
  'drupal_http_request_fails' => FALSE,
  'drupal_js_cache_files' => array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_UWQINlriydSoeSiGQxToOUdv493zEa7dpsXC1OtYlZU.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    '894d50601a5da8e76dd47df54662af06bc3635d48ac2d1710d3105abc9dd4700' => 'public://js/js_UWahaALNNWQrS_SzX_4xoqn_0OsxlvvtiWXDaNnEmhY.js',
    'ce6387df4f51124802c7fc0aa0c042d90802460b6e064e3b4351016f7272c12b' => 'public://js/js_mUMM70DPHh25eBgwb8o8uQUORihylskVZkbzBk5eJnk.js',
    '24f20757d12dbc653b4fc9a46e5f7d622884902c0b7fca3e6d2a77ef00c529a1' => 'public://js/js_lUR0qhUR0_PPIZSmX4mMQvtsyruGZEl8D1eoAcHOIgI.js',
    '463cc68583ee8c361c50fe8abb13f9cfed37e7d17723900c57d22bf7d143191a' => 'public://js/js_kjAEE4eJksA09TlzUeZV5z4mM1TjVT7a1umFMkR6ZpY.js',
    '592960c121413baa6d99b962ebe948fc4238995904fa777cae2a83d592702218' => 'public://js/js_7gznIj4Ak5Xu5WODuFEI4s4FQ0NaJCpsbz1ijM5AzQk.js',
    'dc589b931794ec265c5d55262b3866518c4b47f9ba802d69485397c7b7b7a77e' => 'public://js/js_YG82hrJHloYtiAgodMftPUgRoUSS3dqXQsi0bze1iqY.js',
    '71e063c61d2b2eaf9f55465c3c0dde3690d9fce807c6197704b2ef604f63d4b1' => 'public://js/js_0CTCqG93stdk3NFUUphGjAVhmx12b3iKuM0FPw8cg64.js',
    '83ce5d251f594d2fabd6b1c61c15aabefe97ea79bfc52aeeacf106a9875d3eb6' => 'public://js/js_p1v4A54f2jeBDnTHALSvDRxpbRkiWyqtPUzm6jHg91k.js',
    'ba7828310711048f5efb31cb0286661fef89ee73d8fc8d437f3a06593d210070' => 'public://js/js_nyhRfvT3G0O_yE5xvilF1OwqvbGkcQ6PIhmVeNf-Y2g.js',
    'dccbb3313b1fc26b05b0f6ffe5b124b46119a394db9d06ad5237cb54bd793ef5' => 'public://js/js_mbJttIROLfCCzqeQLiy5dmp-dh_ZaiYJK_Td06uxxlM.js',
    '5233381afebfe4d04eff4f1f6b68827b39c60e879c13a969a481988a56af2310' => 'public://js/js_K3a-OxJOx50zlsaTUP6nd0yCq_FtXswu4RGpp_CN018.js',
    'a5abc0547c6b8bc276504277dfb538247dc2cb816a6f9273aaa6593d77f254ea' => 'public://js/js_-mlCFOyOVf3yhZAk9S8wv3Hqf-yHY5Yv0sXIEVct0T8.js',
    'e89f20a40a97d863ec12a95aa7c582f51b97450804c7c7cf73d17df24f0dd287' => 'public://js/js_IvQh8gAFV0qO9j60F-b9GgrL5Cn3iHQgZCYPJkCMeyI.js',
  ),
  'drupal_private_key' => '-1bt5SeAg6v7HAbknWZQPegqulVEFdOVSF60t3htFbs',
  'email__active_tab' => 'edit-email-admin-created',
  'empty_timezone_message' => 0,
  'entity_cache_tables_created' => NULL,
  'entity_view_modes' => array(
    'node' => array(
      'export' => array(
        'label' => 'export',
        'custom settings' => 1,
      ),
    ),
  ),
  'entityreference:base-tables' => array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'workbench_moderation_transition' => array(
      0 => 'workbench_moderation_transitions',
      1 => 'id',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
  ),
  'error_level' => 0,
  'features_builder_base_dir' => 'sites/all/modules/features/build',
  'features_builder_prefix_label' => 'Redakčný systém Beliana',
  'features_builder_prefix_name' => 'redak_n_syst_m_beliana',
  'features_codecache' => array(
    'feeds_import' => array(
      'dependencies' => '981314fbdcdc839f8ba1d10a17259887',
      'feeds_importer' => '758e3955b8f76773fe3278b415e34710',
    ),
    'typy_obsahu' => array(
      'node' => '46cb4e9505a804574fe88c9c56021950',
      'field_base' => 'c1db09a62c8d400f9856106413962d87',
      'field_instance' => '66b3c97bd0da2cc239b1d4a89efeb97f',
      'taxonomy' => '84db79676932a3458dc8d82f6d1a3a1d',
      'dependencies' => '1c6d27d9a7ac770e632dfbf3369e1857',
      'user_permission' => '64c25e8f85f717b5c235c177aca47c04',
    ),
    'importovanie' => array(
      'dependencies' => '152a7cb246dcfa7e1e001c322296c0b9',
      'feeds_importer' => 'be09eb2ad8bf22fb7ac1d367bde329ec',
      'feeds_tamper' => '55202f33f981cfddd7cf2bcc3e0c1383',
    ),
    'postup_prace' => array(
      'workbench_moderation_states' => '142d11f7961f2f0ba11d98e6b25c71e3',
      'workbench_moderation_transitions' => 'c5a484c5165e1b2bc6178b593bdb3785',
      'dependencies' => '5deda3c7e295c5a3f52453c3893b951d',
      'user_permission' => 'eab7072dc4a1630016ca63548ab1c9e4',
      'variable' => '37cb5411a4499a3f1965f4cc72a1526e',
    ),
    'pohlady' => array(
      'dependencies' => '5e4e52c4d583946647361b080a4c4be6',
      'views_view' => '87a84af23e50a0e905c432ecc335b2bb',
    ),
    'pouzivatelia' => array(
      'field_base' => '10cd72a08448f44d6ce7bbef79afdef0',
      'field_instance' => '5fac9949b4769dea3722310e8609bfb8',
      'user_role' => '76eab8ada593e70ad286efcc0a2b64a6',
      'dependencies' => 'a4bf35d75654189496dc596be392ba13',
    ),
    'jazyky' => array(
      'language' => '7c78f8208bb6ba6aa131950df7f72203',
      'dependencies' => '26da803a3439815a5c0cf87a7752c0bb',
    ),
    'pravidla' => array(
      'dependencies' => '5908960163574b2d5926871cbcc93b98',
      'rules_config' => '06b9da83daa1f7aa8e3f18f257ec9106',
    ),
    'ckeditor_nastavenia' => array(
      'ckeditor_profile' => '6868d67626350f408bd312445446d7b1',
      'dependencies' => '0e579855f84a07f598ba67ffdd827fec',
      'variable' => 'f2a202f8a3a809e38b8f2451be8f79f8',
    ),
    'indikator_prostredia' => array(
      'variable_realm' => 'fed1d2aa4ab9cd28dd771492a3bc2f97',
      'user_permission' => 'f037df8b7c0e53b3980d20f6f43fb889',
      'dependencies' => '9aeb72373bb458131735e1166a56a593',
      'environment_indicator_environment' => 'aff54c20130a76e075cbde8a4c8fe289',
      'variable' => 'b818912233231420fdc9740de210130c',
    ),
    'redak_n_syst_m_beliana_feeds' => array(
      'variable' => '1c8fc4f7008163c0c63e1bbaa9f2784e',
      'dependencies' => 'd82174049ae2298f1a39c5482237aadb',
      'feeds_importer' => '3c1cf11fbd3cbbd8f5d27d21aea0442e',
      'feeds_tamper' => 'b45dec837c929230b7d8e159ea3c689c',
    ),
    'redak_n_syst_m_beliana_seo' => array(
      'variable' => 'c488e4fc257c56e536a99c15a2dd0f92',
      'dependencies' => '5022bc6d421ce16124bb04d30240643b',
    ),
    'redak_n_syst_m_beliana_taxonomy' => array(
      'taxonomy' => '51e9c1a2383ae84020115a2b13a1d42c',
      'variable' => '58a7be476f1c2794074a00f5f2e9ac8a',
      'dependencies' => '70768dcd739a29bb8a2891747fab4830',
    ),
    'redak_n_syst_m_beliana_fields' => array(
      'field_base' => 'b1314fe00e33b5f908cf19b8140e71db',
      'dependencies' => 'ea06a6a0f4410c1360b417d29e3f2d42',
    ),
    'redak_n_syst_m_beliana_media' => array(
      'ckeditor_profile' => '9df3738a78d38abd8402a511fb60957b',
      'filter' => '49d1ad1b37eb529680dcee5a2127ad5e',
      'variable' => '86fcc30c21ee09b0680e2c40beb81340',
      'dependencies' => '13b7e0dbb2a5df196855182313e3e113',
      'image' => '0648a0495ca145ab185fa34c5265ee2e',
    ),
    'redak_n_syst_m_beliana_menu' => array(
      'menu_custom' => '4daf50b19add72cfcbf8ca66c159e88a',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'redak_n_syst_m_beliana_rules' => array(
      'dependencies' => '33f8e15b9b5f3db3f0e7af86720e7ef2',
      'rules_config' => '06b9da83daa1f7aa8e3f18f257ec9106',
    ),
    'redak_n_syst_m_beliana_site' => array(
      'variable' => '1ef7bc9fe98376c2615fa47aebc5e784',
      'dependencies' => '50eb60d8cae8aad7d0691c254b65b63c',
      'environment_indicator_environment' => 'efd6d5b5b29a8f0908628d880813a90e',
      'language' => '0698232019eb850d2c208217774e2ab6',
    ),
    'redak_n_syst_m_beliana_users' => array(
      'field_instance' => '488bdbc1e446e40555f521019b1b130d',
      'user_permission' => 'e94e0a0327aada40e1490ccee218d2d6',
      'user_role' => 'b25af3fbd367f45f3e58034b7d08b854',
      'variable' => '448c74ed32719bd142528e2f618db4d2',
      'dependencies' => 'cebe805c2562fcb16726f0e6bcd5d7e6',
    ),
    'redak_n_syst_m_beliana_views' => array(
      'variable' => '16ab2884b9693dcaa67428bba34b082b',
      'dependencies' => '343934837777bd2f73dc66ed77ff8585',
    ),
    'redak_n_syst_m_beliana_node_article' => array(
      'field_instance' => '0ad275f84679644fb71e0d82c555ae8f',
      'variable' => 'a9778f50ef5d2be5c1129e0cec30f2ba',
      'dependencies' => '390c1595726a84dbb9c42a2f2eb41acf',
      'node' => '0ff501cb6696366d75a8de30e797fc21',
    ),
    'redak_n_syst_m_beliana_node_heslo' => array(
      'field_instance' => '0fbc6530ab2b315ee0b8749570bd46a6',
      'variable' => 'b238ed6085b51abbfe7e0f3065f5f426',
      'dependencies' => '673e6c5d96925908a0d86111c7973184',
      'node' => '7a6a90c807c978fc57240e27af748438',
    ),
    'redak_n_syst_m_beliana_node_ilustracia' => array(
      'field_instance' => '308272f36523f23b359be69aeb411cef',
      'variable' => '418a92cd118b63f2dcc76980802ca203',
      'dependencies' => '8c8ee93be868ba1780815eb77a3e18fe',
      'node' => '68dc058d42e8591b4ba8d6b8ffd28b2d',
    ),
    'redak_n_syst_m_beliana_node_importovane_heslo' => array(
      'field_instance' => 'df0d226608e3aabbec04a9c6c8af101f',
      'variable' => 'c3ae62fad691759942b6063a6cad357b',
      'dependencies' => '508b2d2574b4e60e3d60df45865d9d14',
      'node' => 'cd60929129e12ed6aeb71e9e544311fd',
    ),
    'redak_n_syst_m_beliana_node_oznam' => array(
      'field_instance' => '02c52004ce3f24e3daaf9196bed9fd06',
      'variable' => '65c76fa0f11c7f4cd2706855419d08d3',
      'dependencies' => '8c428feeafc9364f7aff7176c603bb44',
      'node' => '6090b83d62f7c488931f8c6d6b02688f',
    ),
    'redak_n_syst_m_beliana_node_page' => array(
      'field_instance' => '67452de60420c19dbd9b744a5175b0f4',
      'variable' => 'b4fae35aadfa8de8d7126ae3c56896a2',
      'dependencies' => '8c428feeafc9364f7aff7176c603bb44',
      'node' => '08acc4d1646d2dd23b9ff7250108890b',
    ),
  ),
  'features_feature_locked' => array(
    'pohlady' => array(),
  ),
  'features_ignored_orphans' => array(),
  'features_modules_changed' => FALSE,
  'features_semaphore' => array(),
  'feeds_reschedule' => FALSE,
  'field_bundle_settings_comment__comment_node_heslo' => array(),
  'field_bundle_settings_comment__comment_node_ilustracia' => array(),
  'field_bundle_settings_node__article' => array(
    'view_modes' => array(
      'export' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 30,
        ),
        'workbench_access' => array(
          'weight' => 0,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__heslo' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'export' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 8,
        ),
        'workbench_access' => array(
          'weight' => 3,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__ilustracia' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'export' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 4,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__importovane_heslo' => array(
    'view_modes' => array(
      'export' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => 1,
        ),
        'workbench_access' => array(
          'weight' => 0,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__oznam' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'export' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__page' => array(
    'view_modes' => array(
      'export' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_taxonomy_term__lexikalne_skupiny' => array(),
  'field_bundle_settings_user__user' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => 4,
        ),
        'account' => array(
          'weight' => 0,
        ),
        'timezone' => array(
          'weight' => 3,
        ),
        'password_policy' => array(
          'weight' => 0,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_elements' => array(
    'heslo' => 'field_lexikalna_skupina',
  ),
  'file_default_scheme' => 'public',
  'file_private_path' => '',
  'file_public_path' => 'sites/dev/files',
  'file_temporary_path' => '/var/web_tmp',
  'filter_fallback_format' => 'plain_text',
  'hacked_last_report' => 1458255366,
  'image_jpeg_quality' => 90,
  'image_toolkit' => 'gd',
  'imce_profiles' => array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
    3 => array(
      'name' => 'redaktor',
      'usertab' => 0,
      'filesize' => 1,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => 0,
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  ),
  'imce_roles_profiles' => array(
    5 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    4 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    10 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    7 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    12 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    6 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    3 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    13 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    15 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    16 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    14 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    8 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    9 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    17 => array(
      'weight' => 0,
      'public_pid' => 3,
    ),
    18 => array(
      'weight' => 0,
      'public_pid' => 0,
    ),
    2 => array(
      'weight' => 11,
      'public_pid' => 0,
    ),
    1 => array(
      'weight' => 12,
      'public_pid' => 0,
    ),
  ),
  'imce_settings_absurls' => 0,
  'imce_settings_disable_private' => 1,
  'imce_settings_replace' => 0,
  'imce_settings_textarea' => '',
  'imce_settings_thumb_method' => 'scale_and_crop',
  'install_profile' => 'standard',
  'install_task' => 'done',
  'install_time' => 1417710383,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/themes/adminimal_theme/js/jRespond.js',
    4 => 'sites/all/themes/adminimal_theme/js/adminimal_theme.js',
    5 => 'sites/all/modules/contrib/mathjax/mathjax.js',
    6 => 'sites/all/modules/contrib/devel/devel_krumo_path.js',
    7 => 'sites/all/modules/contrib/adminimal_admin_menu/js/adminimal_admin_menu.js',
    8 => 'misc/form.js',
    9 => 'sites/all/themes/adminimal_theme/skins/default/default.js',
    10 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    11 => 'misc/tableheader.js',
    12 => 'misc/vertical-tabs.js',
    13 => 'misc/machine-name.js',
    14 => 'misc/textarea.js',
    15 => 'sites/all/modules/contrib/features/features.js',
    16 => 'misc/collapse.js',
    17 => 'misc/autocomplete.js',
    18 => 'misc/jquery.cookie.js',
    19 => 'misc/jquery.form.js',
    20 => 'misc/progress.js',
    21 => 'misc/ajax.js',
    22 => 'misc/ui/jquery.ui.core.min.js',
    23 => 'misc/ui/jquery.ui.widget.min.js',
    24 => 'misc/ui/jquery.ui.button.min.js',
    25 => 'misc/ui/jquery.ui.mouse.min.js',
    26 => 'misc/ui/jquery.ui.draggable.min.js',
    27 => 'misc/ui/jquery.ui.position.min.js',
    28 => 'misc/ui/jquery.ui.resizable.min.js',
    29 => 'misc/ui/jquery.ui.dialog.min.js',
    30 => 'sites/all/modules/contrib/views/js/jquery.ui.dialog.patch.js',
  ),
  'job_scheduler_rebuild_all' => TRUE,
  'language_content_type_gheslo' => 0,
  'language_content_type_heslo' => 0,
  'language_content_type_ilustracia' => 0,
  'language_content_type_importovane_heslo' => 0,
  'language_content_type_osobnost' => 0,
  'language_content_type_oznam' => 0,
  'language_count' => 1,
  'language_default' => array(
    'language' => 'sk',
    'name' => 'Slovak',
    'native' => 'Slovenčina',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(($n==1)?(0):((($n>=2)&&($n<=4))?(1):2))',
    'domain' => '',
    'prefix' => 'sk',
    'weight' => 0,
    'javascript' => 'mT_MpAN-i6i4ryUAztE5wUM81yUNwmL3hbYvkmcdHHI',
  ),
  'language_negotiation_language' => array(
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_content' => array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  ),
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'mail_system' => array(
    'default-system' => 'DefaultMailSystem',
  ),
  'maintenance_mode' => 0,
  'maintenance_mode_message' => '',
  'menu_expanded' => array(
    0 => 'management',
  ),
  'menu_main_links_source' => 'main-menu',
  'menu_masks' => array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 494,
    4 => 493,
    5 => 253,
    6 => 252,
    7 => 250,
    8 => 247,
    9 => 246,
    10 => 245,
    11 => 126,
    12 => 125,
    13 => 124,
    14 => 123,
    15 => 122,
    16 => 121,
    17 => 118,
    18 => 117,
    19 => 63,
    20 => 62,
    21 => 61,
    22 => 60,
    23 => 59,
    24 => 58,
    25 => 56,
    26 => 44,
    27 => 42,
    28 => 31,
    29 => 30,
    30 => 29,
    31 => 28,
    32 => 27,
    33 => 24,
    34 => 23,
    35 => 21,
    36 => 15,
    37 => 14,
    38 => 13,
    39 => 12,
    40 => 11,
    41 => 7,
    42 => 6,
    43 => 5,
    44 => 3,
    45 => 2,
    46 => 1,
  ),
  'menu_options_gheslo' => array(
    0 => 'main-menu',
  ),
  'menu_options_heslo' => array(
    0 => 'main-menu',
  ),
  'menu_options_ilustracia' => array(
    0 => 'main-menu',
  ),
  'menu_options_importovane_heslo' => array(
    0 => 'main-menu',
  ),
  'menu_options_osobnost' => array(
    0 => 'main-menu',
  ),
  'menu_options_oznam' => array(),
  'menu_parent_gheslo' => 'main-menu:0',
  'menu_parent_heslo' => 'main-menu:0',
  'menu_parent_ilustracia' => 'main-menu:0',
  'menu_parent_importovane_heslo' => 'main-menu:0',
  'menu_parent_osobnost' => 'main-menu:0',
  'menu_parent_oznam' => 'main-menu:0',
  'menu_secondary_links_source' => '',
  'minimum_word_size' => 3,
  'module_filter_recent_modules' => array(
    'features_builder_default' => 1458937521,
  ),
  'node_admin_theme' => 1,
  'node_cron_last' => 1458830808,
  'node_export_reset_changed_article' => 1,
  'node_export_reset_changed_heslo' => 1,
  'node_export_reset_changed_page' => 1,
  'node_options_gheslo' => array(
    0 => 'moderation',
    1 => 'revision',
  ),
  'node_options_heslo' => array(
    0 => 'moderation',
    1 => 'revision',
  ),
  'node_options_ilustracia' => array(
    0 => 'moderation',
    1 => 'revision',
  ),
  'node_options_importovane_heslo' => array(
    0 => 'moderation',
    1 => 'revision',
  ),
  'node_options_osobnost' => array(
    0 => 'moderation',
    1 => 'revision',
  ),
  'node_options_oznam' => array(
    0 => 'status',
  ),
  'node_options_page' => array(
    0 => 'status',
  ),
  'node_preview_heslo' => 1,
  'node_preview_ilustracia' => 1,
  'node_preview_importovane_heslo' => 1,
  'node_preview_oznam' => 1,
  'node_rank_comments' => 0,
  'node_rank_promote' => 0,
  'node_rank_recent' => 0,
  'node_rank_relevance' => 0,
  'node_rank_sticky' => 0,
  'node_submitted_gheslo' => 1,
  'node_submitted_heslo' => 1,
  'node_submitted_ilustracia' => 1,
  'node_submitted_importovane_heslo' => 1,
  'node_submitted_osobnost' => 1,
  'node_submitted_oznam' => 0,
  'node_submitted_page' => FALSE,
  'overlap_cjk' => 1,
  'page_cache_maximum_age' => 3600,
  'page_compression' => 1,
  'password_policy_admin' => 0,
  'password_policy_begin' => 0,
  'password_policy_block' => 0,
  'password_policy_force_change_reset' => 1,
  'password_policy_new_login_change' => 1,
  'password_policy_show_restrictions' => 0,
  'password_policy_warning_body' => '[user:name],

Your password at [site:name] will expire in less than [password-policy:days-left] day(s).

Please go to [password-policy:password-edit-url] to change your password.',
  'password_policy_warning_subject' => 'Password expiration warning for [user:name] at [site:name]',
  'path_alias_whitelist' => array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  ),
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_case' => 1,
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_ignore_words' => 'a, an, as, at, before, but, by, for, from, is, in, into, like, of, off, on, onto, per, since, than, the, this, that, to, up, via, with',
  'pathauto_max_component_length' => 100,
  'pathauto_max_length' => 100,
  'pathauto_node_article_pattern' => '[node:content-type]/[node:title]',
  'pathauto_node_heslo_pattern' => 'heslo/[node:title]',
  'pathauto_node_ilustracia_pattern' => 'ilustracia/[node:title]',
  'pathauto_node_importovane_heslo_pattern' => 'vydane/[node:title]',
  'pathauto_node_oznam_pattern' => '',
  'pathauto_node_page_pattern' => '',
  'pathauto_node_pattern' => 'content/[node:title]',
  'pathauto_punctuation_ampersand' => 0,
  'pathauto_punctuation_asterisk' => 0,
  'pathauto_punctuation_at' => 0,
  'pathauto_punctuation_back_slash' => 0,
  'pathauto_punctuation_backtick' => 0,
  'pathauto_punctuation_caret' => 0,
  'pathauto_punctuation_colon' => 0,
  'pathauto_punctuation_comma' => 0,
  'pathauto_punctuation_dollar' => 0,
  'pathauto_punctuation_double_quotes' => 0,
  'pathauto_punctuation_equal' => 0,
  'pathauto_punctuation_exclamation' => 0,
  'pathauto_punctuation_greater_than' => 0,
  'pathauto_punctuation_hash' => 0,
  'pathauto_punctuation_hyphen' => 1,
  'pathauto_punctuation_left_curly' => 0,
  'pathauto_punctuation_left_parenthesis' => 0,
  'pathauto_punctuation_left_square' => 0,
  'pathauto_punctuation_less_than' => 0,
  'pathauto_punctuation_percent' => 0,
  'pathauto_punctuation_period' => 0,
  'pathauto_punctuation_pipe' => 0,
  'pathauto_punctuation_plus' => 0,
  'pathauto_punctuation_question_mark' => 0,
  'pathauto_punctuation_quotes' => 0,
  'pathauto_punctuation_right_curly' => 0,
  'pathauto_punctuation_right_parenthesis' => 0,
  'pathauto_punctuation_right_square' => 0,
  'pathauto_punctuation_semicolon' => 0,
  'pathauto_punctuation_slash' => 0,
  'pathauto_punctuation_tilde' => 0,
  'pathauto_punctuation_underscore' => 0,
  'pathauto_reduce_ascii' => 0,
  'pathauto_separator' => '-',
  'pathauto_taxonomy_term_lexikalne_skupiny_pattern' => 'skupina/[term:name]',
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_taxonomy_term_subory_pattern' => '',
  'pathauto_taxonomy_term_tags_pattern' => '',
  'pathauto_transliterate' => 1,
  'pathauto_update_action' => 2,
  'pathauto_user_pattern' => 'users/[user:name]',
  'pathauto_verbose' => 1,
  'preprocess_css' => 1,
  'preprocess_js' => 1,
  'save_continue_gheslo' => 'Uložiť a pridať polia',
  'save_continue_heslo' => 'Save and add fields',
  'save_continue_ilustr_cia' => 'Uložiť a pridať polia',
  'save_continue_importovane_heslo' => 'Save and add fields',
  'save_continue_osobnost' => 'Save and add fields',
  'save_continue_oznam' => 'Uložiť a pridať polia',
  'save_continue_zakladne_heslo' => 'Save and add fields',
  'search_active_modules' => array(
    'node' => 'node',
    'user' => 'user',
  ),
  'search_cron_limit' => 500,
  'search_default_module' => 'node',
  'sharedemail_msg' => 'WARNING: The e-mail address you are using, has already been registered on this site by another user. You should be aware that personal information such as password resets will be sent to this address. We strongly recommend changing your registered address to a different e-mail address. You can do this at any time from your account page when you login.',
  'simplify_blocks_global' => array(
    0 => 'format',
  ),
  'simplify_comments_gheslo' => array(),
  'simplify_comments_global' => array(
    0 => 'format',
  ),
  'simplify_comments_heslo' => array(),
  'simplify_comments_ilustracia' => array(),
  'simplify_comments_importovane_heslo' => array(),
  'simplify_comments_oznam' => array(),
  'simplify_nodes_gheslo' => array(
    0 => 'revision',
    1 => 'path',
  ),
  'simplify_nodes_global' => array(
    0 => 'format',
  ),
  'simplify_nodes_heslo' => array(
    0 => 'revision',
    1 => 'path',
  ),
  'simplify_nodes_ilustracia' => array(
    0 => 'revision',
    1 => 'path',
  ),
  'simplify_nodes_importovane_heslo' => array(
    0 => 'revision',
    1 => 'path',
  ),
  'simplify_nodes_oznam' => array(),
  'simplify_taxonomy_global' => array(
    0 => 'format',
  ),
  'simplify_taxonomy_lexikalne_skupiny' => array(
    0 => 'path',
  ),
  'simplify_taxonomy_subory' => array(),
  'simplify_users_global' => array(
    0 => 'format',
  ),
  'site_403' => '',
  'site_404' => '',
  'site_default_country' => 'SK',
  'site_frontpage' => 'node',
  'site_mail' => 'test@sospreskoly.org',
  'site_name' => 'Redakčný systém Beliana',
  'site_slogan' => '',
  'smtp_allowhtml' => 0,
  'smtp_debugging' => 1,
  'smtp_previous_mail_system' => 'DefaultMailSystem',
  'smtp_queue' => 0,
  'theme_adminimal_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'style_checkboxes' => 1,
    'display_icons_config' => 1,
    'avoid_custom_font' => 0,
    'use_custom_media_queries' => 0,
    'media_query_mobile' => 'only screen and (max-width: 480px)',
    'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
    'custom_css' => 0,
    'adminimal_theme_skin' => 'default',
  ),
  'theme_bartik_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://beliana.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'scheme' => 'slate',
    'palette' => array(
      'top' => '#4a4a4a',
      'bottom' => '#4e4e4e',
      'bg' => '#ffffff',
      'sidebar' => '#ffffff',
      'sidebarborders' => '#d0d0d0',
      'footer' => '#161617',
      'titleslogan' => '#ffffff',
      'text' => '#3b3b3b',
      'link' => '#0073b6',
    ),
    'theme' => 'bartik',
    'info' => array(
      'fields' => array(
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'bg' => 'Main background',
        'sidebar' => 'Sidebar background',
        'sidebarborders' => 'Sidebar borders',
        'footer' => 'Footer background',
        'titleslogan' => 'Title and slogan',
        'text' => 'Text color',
        'link' => 'Link color',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Blue Lagoon (default)',
          'colors' => array(
            'top' => '#0779bf',
            'bottom' => '#48a9e4',
            'bg' => '#ffffff',
            'sidebar' => '#f6f6f2',
            'sidebarborders' => '#f9f9f9',
            'footer' => '#292929',
            'titleslogan' => '#fffeff',
            'text' => '#3b3b3b',
            'link' => '#0071B3',
          ),
        ),
        'firehouse' => array(
          'title' => 'Firehouse',
          'colors' => array(
            'top' => '#cd2d2d',
            'bottom' => '#cf3535',
            'bg' => '#ffffff',
            'sidebar' => '#f1f4f0',
            'sidebarborders' => '#ededed',
            'footer' => '#1f1d1c',
            'titleslogan' => '#fffeff',
            'text' => '#3b3b3b',
            'link' => '#d6121f',
          ),
        ),
        'ice' => array(
          'title' => 'Ice',
          'colors' => array(
            'top' => '#d0d0d0',
            'bottom' => '#c2c4c5',
            'bg' => '#ffffff',
            'sidebar' => '#ffffff',
            'sidebarborders' => '#cccccc',
            'footer' => '#24272c',
            'titleslogan' => '#000000',
            'text' => '#4a4a4a',
            'link' => '#019dbf',
          ),
        ),
        'plum' => array(
          'title' => 'Plum',
          'colors' => array(
            'top' => '#4c1c58',
            'bottom' => '#593662',
            'bg' => '#fffdf7',
            'sidebar' => '#edede7',
            'sidebarborders' => '#e7e7e7',
            'footer' => '#2c2c28',
            'titleslogan' => '#ffffff',
            'text' => '#301313',
            'link' => '#9d408d',
          ),
        ),
        'slate' => array(
          'title' => 'Slate',
          'colors' => array(
            'top' => '#4a4a4a',
            'bottom' => '#4e4e4e',
            'bg' => '#ffffff',
            'sidebar' => '#ffffff',
            'sidebarborders' => '#d0d0d0',
            'footer' => '#161617',
            'titleslogan' => '#ffffff',
            'text' => '#3b3b3b',
            'link' => '#0073b6',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'css/colors.css',
      ),
      'copy' => array(
        0 => 'logo.png',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(),
      'slices' => array(),
      'blend_target' => '#ffffff',
      'preview_css' => 'color/preview.css',
      'preview_js' => 'color/preview.js',
      'preview_html' => 'color/preview.html',
      'base_image' => 'color/base.png',
    ),
  ),
  'theme_beliana_theme_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://beliana_0.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  ),
  'theme_default' => 'adminimal',
  'theme_garland_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'garland_width' => 'fluid',
    'scheme' => 'bluemarine',
    'palette' => array(
      'base' => '#3f3f3f',
      'link' => '#336699',
      'top' => '#6598cb',
      'bottom' => '#6598cb',
      'text' => '#000000',
    ),
    'theme' => 'garland',
    'info' => array(
      'fields' => array(
        'base' => 'Base color',
        'link' => 'Link color',
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'text' => 'Text color',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Blue Lagoon (Default)',
          'colors' => array(
            'base' => '#0072b9',
            'link' => '#027ac6',
            'top' => '#2385c2',
            'bottom' => '#5ab5ee',
            'text' => '#494949',
          ),
        ),
        'ash' => array(
          'title' => 'Ash',
          'colors' => array(
            'base' => '#464849',
            'link' => '#2f416f',
            'top' => '#2a2b2d',
            'bottom' => '#5d6779',
          ),
        ),
        'aquamarine' => array(
          'title' => 'Aquamarine',
          'colors' => array(
            'base' => '#55c0e2',
            'link' => '#000000',
            'text' => '#696969',
            'top' => '#085360',
            'bottom' => '#007e94',
          ),
        ),
        'chocolate' => array(
          'title' => 'Belgian Chocolate',
          'colors' => array(
            'base' => '#d5b048',
            'link' => '#6c420e',
            'top' => '#331900',
            'bottom' => '#971702',
          ),
        ),
        'bluemarine' => array(
          'title' => 'Bluemarine',
          'colors' => array(
            'base' => '#3f3f3f',
            'link' => '#336699',
            'text' => '#000000',
            'top' => '#6598cb',
            'bottom' => '#6598cb',
          ),
        ),
        'citrus' => array(
          'title' => 'Citrus Blast',
          'colors' => array(
            'base' => '#d0cb9a',
            'link' => '#917803',
            'top' => '#efde01',
            'bottom' => '#e6fb2d',
          ),
        ),
        'cold' => array(
          'title' => 'Cold Day',
          'colors' => array(
            'base' => '#0f005c',
            'link' => '#434f8c',
            'text' => '#000000',
            'top' => '#4d91ff',
            'bottom' => '#1a1575',
          ),
        ),
        'greenbeam' => array(
          'title' => 'Greenbeam',
          'colors' => array(
            'base' => '#c9c497',
            'link' => '#0c7a00',
            'top' => '#03961e',
            'bottom' => '#7be000',
          ),
        ),
        'mediterrano' => array(
          'title' => 'Mediterrano',
          'colors' => array(
            'base' => '#ffe23d',
            'link' => '#a9290a',
            'top' => '#fc6d1d',
            'bottom' => '#a30f42',
          ),
        ),
        'mercury' => array(
          'title' => 'Mercury',
          'colors' => array(
            'base' => '#788597',
            'link' => '#3f728d',
            'top' => '#a9adbc',
            'bottom' => '#d4d4d4',
            'text' => '#707070',
          ),
        ),
        'nocturnal' => array(
          'title' => 'Nocturnal',
          'colors' => array(
            'base' => '#5b5fa9',
            'link' => '#5b5faa',
            'top' => '#0a2352',
            'bottom' => '#9fa8d5',
          ),
        ),
        'olivia' => array(
          'title' => 'Olivia',
          'colors' => array(
            'base' => '#7db323',
            'link' => '#6a9915',
            'top' => '#b5d52a',
            'bottom' => '#7db323',
            'text' => '#191a19',
          ),
        ),
        'pink_plastic' => array(
          'title' => 'Pink Plastic',
          'colors' => array(
            'base' => '#12020b',
            'link' => '#1b1a13',
            'top' => '#f391c6',
            'bottom' => '#f41063',
            'text' => '#898080',
          ),
        ),
        'shiny_tomato' => array(
          'title' => 'Shiny Tomato',
          'colors' => array(
            'base' => '#b7a0ba',
            'link' => '#c70000',
            'top' => '#a1443a',
            'bottom' => '#f21107',
            'text' => '#515d52',
          ),
        ),
        'teal_top' => array(
          'title' => 'Teal Top',
          'colors' => array(
            'base' => '#18583d',
            'link' => '#1b5f42',
            'top' => '#34775a',
            'bottom' => '#52bf90',
            'text' => '#2d2d2d',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'copy' => array(
        0 => 'images/menu-collapsed.gif',
        1 => 'images/menu-collapsed-rtl.gif',
        2 => 'images/menu-expanded.gif',
        3 => 'images/menu-leaf.gif',
      ),
      'css' => array(
        0 => 'style.css',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 38,
            2 => 760,
            3 => 121,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(
        'base' => array(
          0 => 0,
          1 => 0,
          2 => 760,
          3 => 568,
        ),
        'link' => array(
          0 => 107,
          1 => 533,
          2 => 41,
          3 => 23,
        ),
      ),
      'slices' => array(
        'images/body.png' => array(
          0 => 0,
          1 => 37,
          2 => 1,
          3 => 280,
        ),
        'images/bg-bar.png' => array(
          0 => 202,
          1 => 530,
          2 => 76,
          3 => 14,
        ),
        'images/bg-bar-white.png' => array(
          0 => 202,
          1 => 506,
          2 => 76,
          3 => 14,
        ),
        'images/bg-tab.png' => array(
          0 => 107,
          1 => 533,
          2 => 41,
          3 => 23,
        ),
        'images/bg-navigation.png' => array(
          0 => 0,
          1 => 0,
          2 => 7,
          3 => 37,
        ),
        'images/bg-content-left.png' => array(
          0 => 40,
          1 => 117,
          2 => 50,
          3 => 352,
        ),
        'images/bg-content-right.png' => array(
          0 => 510,
          1 => 117,
          2 => 50,
          3 => 352,
        ),
        'images/bg-content.png' => array(
          0 => 299,
          1 => 117,
          2 => 7,
          3 => 200,
        ),
        'images/bg-navigation-item.png' => array(
          0 => 32,
          1 => 37,
          2 => 17,
          3 => 12,
        ),
        'images/bg-navigation-item-hover.png' => array(
          0 => 54,
          1 => 37,
          2 => 17,
          3 => 12,
        ),
        'images/gradient-inner.png' => array(
          0 => 646,
          1 => 307,
          2 => 112,
          3 => 42,
        ),
        'logo.png' => array(
          0 => 622,
          1 => 51,
          2 => 64,
          3 => 73,
        ),
        'screenshot.png' => array(
          0 => 0,
          1 => 37,
          2 => 400,
          3 => 240,
        ),
      ),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
  ),
  'theme_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://beliana_0.png',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  ),
  'transliteration_file_lowercase' => 1,
  'transliteration_file_uploads' => 1,
  'transliteration_file_uploads_display_name' => 1,
  'transliteration_search' => 1,
  'update_check_disabled' => 0,
  'update_check_frequency' => 1,
  'update_last_email_notification' => 1458811790,
  'update_last_check' => 1458937551,
  'update_notification_threshold' => 'all',
  'update_notify_emails' => array(
    0 => 'msramek22@gmail.com',
    1 => 'miro.michalicka@gmail.com',
  ),
  'user_admin_role' => 3,
  'user_cancel_method' => 'user_cancel_block',
  'user_default_timezone' => 0,
  'user_email_verification' => 1,
  'user_mail_cancel_confirm_body' => '[user:name],

na [site:name] sme zaznamenali požiadavku o zrušenie účtu.

Zrušenie vášho účtu na [site:url-brief] môžete potvrdiť kliknutím na tento odkaz alebo jeho skopírovaním do poľa s adresou vo vašom prehliadači:

[user:cancel-url]

POZOR: Zrušenie vášho účtu sa už nedá neskôr odvolať.

Platnosť tohto odkazu vyprší v priebehu jedného dňa a ak ho nevyužijete, k zrušeniu účtu nedôjde.

--  Tím [site:name]',
  'user_mail_cancel_confirm_subject' => 'Žiadosť o zrušenie účtu pre [user:name] na [site:name]',
  'user_mail_password_reset_body' => '[user:name],

na [site:name] sme zaznamenali požiadavku o nové heslo.

Teraz sa môžete prihlásiť kliknutím na tento odkaz alebo jeho skopírovaním do poľa s adresou vo vašom prehliadači:

[user:one-time-login-url]

Tento odkaz môžete použiť na jednorázové prihlásenie a zavedie vás na stránku, kde si môžete zmeniť heslo. Platnosť tohto odkazu vyprší v priebehu jedného dňa a nič sa nestane, ak nebude použitý. 

--  Tím [site:name]',
  'user_mail_password_reset_subject' => 'Nahradné prihlasovacie údaje pre [user:name] na [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

administrátor [site:name] vám vytvoril používateľský účet. Môžete sa prihlásiť kliknutím na nasledujúci odkaz alebo jeho skopírovaním do adresového poľa prehliadača:

[user:one-time-login-url]

Tento odkaz je na jednorázové prihlásenie a zavedie vás na stránku, kde si môžete zmeniť heslo.

Po nastavení hesla sa budete môcť prihlásiť na [site:login-url] v budúcnosti použitím týchto údajov:

používateľské meno: [user:name]
heslo: Vaše heslo

--  Tím [site:name]',
  'user_mail_register_admin_created_subject' => 'Správca vám vytvoril účet na [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

ďakujeme vám za registráciu na [site:name]. Môžete sa prihlásiť kliknutím na nasledujúci odkaz, alebo jeho skopírovaním do adresového poľa prehliadača:

[user:one-time-login-url]

Tento odkaz slúži ako jednorázové prihlásenie a zavedie vás na stránku, kde si môžete nastaviť heslo.

Po nastavení hesla sa budete môcť prihlásiť na [site:login-url] aj v budúcnosti použitím nasledujúcich údajov:

používateľské meno: [user:name]
heslo: Vaše heslo

--  Tím [site:name]',
  'user_mail_register_no_approval_required_subject' => 'Podrobnosti o účte používateľa [user:name] na [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

ďakujeme vám za registráciu na [site:name]. Vaša žiadosť o pridelenie účtu momentálne čaká na schválenie. Hneď po schválení dostanete e-mail s informáciou o prihlasovaní, zmene hesla a ďalšími podrobnosťami.


--  Tím [site:name]',
  'user_mail_register_pending_approval_subject' => 'Podrobnosti o účte používateľa [user:name] na [site:name] (čaká sa na schválenie správcom)',
  'user_mail_status_activated_body' => '[user:name],

aktivácia vášho účtu na [site:name] prebehla úspešne.

Teraz sa môžete prihlásiť kliknutím na tento odkaz alebo jeho skopírovaním do poľa s adresou vo vašom prehliadači:

[user:one-time-login-url]

Tento odkaz môžete na jednorázové prihlásenie a zavedie vás na stránku, kde si môžete zmeniť heslo.

Po nastavení hesla sa môžete prihlásiť na [site:login-url] aj v budúcnosti s použitím týchto údajov:

používateľské meno: [user:name]
heslo: Vaše heslo

--  Tím [site:name]',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Podrobnosti účtu pre [user:name] na [site:name] (schválené)',
  'user_mail_status_blocked_body' => '[user:name],

Váš účet na [site:name] bol zablokovaný.

--  Tím [site:name]',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Podrobnosti účtu pre [user:name] na [site:name] (blokované)',
  'user_mail_status_canceled_body' => '[user:name],

Váš účet na [site:name] bol zrušený.

--  [site:name] tím',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Podrobnosti účtu pre [user:name] na [site:name] (zrušené)',
  'user_picture_default' => '',
  'user_picture_dimensions' => '1024x1024',
  'user_picture_file_size' => 800,
  'user_picture_guidelines' => '',
  'user_picture_path' => 'pictures',
  'user_picture_style' => 'thumbnail',
  'user_pictures' => 1,
  'user_register' => 0,
  'user_signatures' => 0,
  'variable_module_list' => array(
    'environment_indicator' => array(
      0 => 'environment_indicator_overwrite',
      1 => 'environment_indicator_overwritten_color',
      2 => 'environment_indicator_overwritten_text_color',
      3 => 'environment_indicator_overwritten_fixed',
      4 => 'environment_indicator_overwritten_position',
      5 => 'environment_indicator_overwritten_name',
      6 => 'environment_indicator_suppress_pages',
    ),
    'variable_realm' => array(
      0 => 'variable_realm_list_global',
      1 => 'variable_realm_list_environment',
      2 => 'variable_realm_weight_global',
      3 => 'variable_realm_weight_environment',
    ),
  ),
  'views_block_hashes' => array(),
  'views_defaults' => array(
    'workbench_current_user' => FALSE,
    'glossary' => FALSE,
    'tracker' => FALSE,
    'workbench_edited' => TRUE,
    'workbench_access_content' => TRUE,
    'workbench_recent_content' => TRUE,
    'backlinks' => FALSE,
    'workbench_moderation' => TRUE,
    'zlucenie' => TRUE,
  ),
  'views_exposed_filter_any_label' => 'new_any',
  'views_show_additional_queries' => 0,
  'views_ui_always_live_preview' => 1,
  'views_ui_custom_theme' => '_default',
  'views_ui_display_embed' => 0,
  'views_ui_show_advanced_column' => 0,
  'views_ui_show_advanced_help_warning' => 1,
  'views_ui_show_listing_filters' => 0,
  'views_ui_show_master_display' => 1,
  'views_ui_show_performance_statistics' => 0,
  'views_ui_show_preview_information' => 1,
  'views_ui_show_sql_query' => 0,
  'views_ui_show_sql_query_where' => 'above',
  'workbench_access' => 'taxonomy',
  'workbench_access_allow_multiple' => 0,
  'workbench_access_auto_assign' => 1,
  'workbench_access_custom_form' => 0,
  'workbench_access_label' => 'Lexikálna skupina',
  'workbench_access_menu' => array(
    'main-menu' => 0,
    'management' => 0,
    'navigation' => 0,
    'user-menu' => 0,
    'devel' => 0,
  ),
  'workbench_access_menu_limit' => 1,
  'workbench_access_node_type_article' => 0,
  'workbench_access_node_type_gheslo' => 1,
  'workbench_access_node_type_heslo' => 1,
  'workbench_access_node_type_ilustracia' => 1,
  'workbench_access_node_type_importovane_heslo' => 0,
  'workbench_access_node_type_osobnost' => 1,
  'workbench_access_node_type_oznam' => 1,
  'workbench_access_node_type_page' => 0,
  'workbench_access_taxonomy' => array(
    'lexikalne_skupiny' => 'lexikalne_skupiny',
    'subory' => 0,
    'tags' => 0,
  ),
  'workbench_moderation_default_state_gheslo' => 'draft',
  'workbench_moderation_default_state_heslo' => 'draft',
  'workbench_moderation_default_state_ilustracia' => 'nova_ilustracia',
  'workbench_moderation_default_state_importovane_heslo' => 'importovane',
  'workbench_moderation_default_state_osobnost' => 'draft',
  'workbench_moderation_default_state_oznam' => 'draft',
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
);

return $realm_variables;
}
