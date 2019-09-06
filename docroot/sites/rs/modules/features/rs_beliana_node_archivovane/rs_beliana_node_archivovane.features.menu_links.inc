<?php
/**
 * @file
 * rs_beliana_node_archivovane.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rs_beliana_node_archivovane_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_archivovan-knin:node/add/archivovane-knizne.
  $menu_links['navigation_archivovan-knin:node/add/archivovane-knizne'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/archivovane-knizne',
    'router_path' => 'node/add/archivovane-knizne',
    'link_title' => 'Archivované knižné',
    'options' => array(
      'identifier' => 'navigation_archivovan-knin:node/add/archivovane-knizne',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivované knižné');

  return $menu_links;
}
