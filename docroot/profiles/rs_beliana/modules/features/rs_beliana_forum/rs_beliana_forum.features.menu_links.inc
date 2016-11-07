<?php
/**
 * @file
 * rs_beliana_forum.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rs_beliana_forum_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_advanced-forum:admin/config/content/advanced-forum.
  $menu_links['management_advanced-forum:admin/config/content/advanced-forum'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/advanced-forum',
    'router_path' => 'admin/config/content/advanced-forum',
    'link_title' => 'Advanced Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Advanced Forum with these settings.',
      ),
      'identifier' => 'management_advanced-forum:admin/config/content/advanced-forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced Forum');

  return $menu_links;
}
