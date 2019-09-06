<?php
/**
 * @file
 * rs_beliana_node_archivovane.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_node_archivovane_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_node_archivovane_node_info() {
  $items = array(
    'archivovane_knizne' => array(
      'name' => t('Archivované knižné'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Názov'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
