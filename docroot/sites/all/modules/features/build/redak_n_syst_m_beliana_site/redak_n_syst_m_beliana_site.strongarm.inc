<?php
/**
 * @file
 * redak_n_syst_m_beliana_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redak_n_syst_m_beliana_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.account' => TRUE,
    'admin_menu.search' => FALSE,
    'admin_menu.users' => FALSE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = FALSE;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '900';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Bratislava';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'd.m.Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dblog_row_limit';
  $strongarm->value = '1000';
  $export['dblog_row_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_builder_base_dir';
  $strongarm->value = 'sites/all/modules/features/build';
  $export['features_builder_base_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_builder_prefix_label';
  $strongarm->value = 'Redakčný systém Beliana';
  $export['features_builder_prefix_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_builder_prefix_name';
  $strongarm->value = 'redak_n_syst_m_beliana';
  $export['features_builder_prefix_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minimum_word_size';
  $strongarm->value = '3';
  $export['minimum_word_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_promote';
  $strongarm->value = '0';
  $export['node_rank_promote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_recent';
  $strongarm->value = '0';
  $export['node_rank_recent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_relevance';
  $strongarm->value = '0';
  $export['node_rank_relevance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_sticky';
  $strongarm->value = '0';
  $export['node_rank_sticky'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlap_cjk';
  $strongarm->value = 1;
  $export['overlap_cjk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '3600';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'user' => 'user',
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '500';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'node';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blocks_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_blocks_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_gheslo';
  $strongarm->value = array();
  $export['simplify_comments_gheslo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_comments_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_heslo';
  $strongarm->value = array();
  $export['simplify_comments_heslo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_ilustracia';
  $strongarm->value = array();
  $export['simplify_comments_ilustracia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_importovane_heslo';
  $strongarm->value = array();
  $export['simplify_comments_importovane_heslo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_oznam';
  $strongarm->value = array();
  $export['simplify_comments_oznam'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_gheslo';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'path',
  );
  $export['simplify_nodes_gheslo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_nodes_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_heslo';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'path',
  );
  $export['simplify_nodes_heslo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_ilustracia';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'path',
  );
  $export['simplify_nodes_ilustracia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_importovane_heslo';
  $strongarm->value = array(
    0 => 'revision',
    1 => 'path',
  );
  $export['simplify_nodes_importovane_heslo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_oznam';
  $strongarm->value = array();
  $export['simplify_nodes_oznam'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_taxonomy_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_lexikalne_skupiny';
  $strongarm->value = array(
    0 => 'path',
  );
  $export['simplify_taxonomy_lexikalne_skupiny'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_subory';
  $strongarm->value = array();
  $export['simplify_taxonomy_subory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_users_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_users_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'SK';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'test@sospreskoly.org';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Redakčný systém Beliana';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_adminimal_settings';
  $strongarm->value = array(
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
  );
  $export['theme_adminimal_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bartik_settings';
  $strongarm->value = array(
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
  );
  $export['theme_bartik_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_beliana_theme_settings';
  $strongarm->value = array(
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
  );
  $export['theme_beliana_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'adminimal';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_garland_settings';
  $strongarm->value = array(
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
  );
  $export['theme_garland_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
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
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_file_lowercase';
  $strongarm->value = 1;
  $export['transliteration_file_lowercase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_file_uploads';
  $strongarm->value = 1;
  $export['transliteration_file_uploads'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_file_uploads_display_name';
  $strongarm->value = 1;
  $export['transliteration_file_uploads_display_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'transliteration_search';
  $strongarm->value = 1;
  $export['transliteration_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'msramek22@gmail.com',
    1 => 'miro.michalicka@gmail.com',
  );
  $export['update_notify_emails'] = $strongarm;

  return $export;
}
