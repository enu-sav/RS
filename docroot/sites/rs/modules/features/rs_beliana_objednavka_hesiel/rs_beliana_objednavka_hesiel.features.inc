<?php

/**
 * @file
 * rs_beliana_objednavka_hesiel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_objednavka_hesiel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_objednavka_hesiel_node_info() {
  $items = array(
    'objednavka_hesiel' => array(
      'name' => t('Objednávka hesiel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
