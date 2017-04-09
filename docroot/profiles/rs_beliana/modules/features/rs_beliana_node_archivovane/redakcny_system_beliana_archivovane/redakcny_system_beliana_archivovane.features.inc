<?php
/**
 * @file
 * redakcny_system_beliana_archivovane.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redakcny_system_beliana_archivovane_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function redakcny_system_beliana_archivovane_node_info() {
  $items = array(
    'archivovane_knizne' => array(
      'name' => t('Archivovane knizne'),
      'base' => 'node_content',
      'description' => t('Pôvodná importovaná verzia hesiel, ktoré boli knižne vydané v 1. - 8. zväzku '),
      'has_title' => '1',
      'title_label' => t('Názov'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
