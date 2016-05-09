<?php
/**
 * @file
 * redak_n_syst_m_beliana_node_oznam.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_node_oznam_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_node_oznam_node_info() {
  $items = array(
    'oznam' => array(
      'name' => t('Oznam'),
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
