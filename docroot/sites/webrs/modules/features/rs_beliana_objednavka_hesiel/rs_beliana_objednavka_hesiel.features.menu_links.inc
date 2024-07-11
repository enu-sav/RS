<?php
/**
 * @file
 * rs_beliana_objednavka_hesiel.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rs_beliana_objednavka_hesiel_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_objednvka-hesiel:node/add/objednavka-hesiel.
  $menu_links['navigation_objednvka-hesiel:node/add/objednavka-hesiel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/objednavka-hesiel',
    'router_path' => 'node/add/objednavka-hesiel',
    'link_title' => 'Objednávka hesiel',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_objednvka-hesiel:node/add/objednavka-hesiel',
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
  t('Objednávka hesiel');

  return $menu_links;
}
