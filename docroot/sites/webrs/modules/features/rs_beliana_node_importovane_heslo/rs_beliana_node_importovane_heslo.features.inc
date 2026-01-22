<?php

/**
 * @file
 * rs_beliana_node_importovane_heslo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_node_importovane_heslo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_node_importovane_heslo_node_info() {
  $items = array(
    'importovane_heslo' => array(
      'name' => t('Importované heslo'),
      'base' => 'node_content',
      'description' => t('Knižne vydané heslo dielov 1 - 7. Importované z doc súborov, ktoré boli použité ako podklady na tlač'),
      'has_title' => '1',
      'title_label' => t('Záhlavie'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
