<?php
/**
 * @file
 * rs_beliana_node_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_node_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_node_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Základná stránka'),
      'base' => 'node_content',
      'description' => t('Použite <em>základné stránky</em> pre statický obsah, ako napr. stránka \'O nás\'.'),
      'has_title' => '1',
      'title_label' => t('Názov'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
