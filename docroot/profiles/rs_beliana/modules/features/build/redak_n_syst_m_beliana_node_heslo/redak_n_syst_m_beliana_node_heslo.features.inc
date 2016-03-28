<?php
/**
 * @file
 * redak_n_syst_m_beliana_node_heslo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redak_n_syst_m_beliana_node_heslo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function redak_n_syst_m_beliana_node_heslo_node_info() {
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
