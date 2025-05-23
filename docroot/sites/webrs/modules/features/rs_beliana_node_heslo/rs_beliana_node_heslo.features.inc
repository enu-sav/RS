<?php

/**
 * @file
 * rs_beliana_node_heslo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_node_heslo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "ultimate_cron" && $api == "ultimate_cron") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_node_heslo_node_info() {
  $items = array(
    'heslo' => array(
      'name' => t('Heslo'),
      'base' => 'node_content',
      'description' => t('Heslo bude vytvorené v stave "Navrhnuté". Po odsúhlasení správcom heslára sa stav zmení na "Zaradené" a redaktor ho môže priradiť autorovi na vypracovanie. '),
      'has_title' => '1',
      'title_label' => t('Názov hesla'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
