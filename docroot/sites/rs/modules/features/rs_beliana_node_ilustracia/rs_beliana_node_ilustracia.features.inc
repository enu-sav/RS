<?php
/**
 * @file
 * rs_beliana_node_ilustracia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_node_ilustracia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rs_beliana_node_ilustracia_node_info() {
  $items = array(
    'ilustracia' => array(
      'name' => t('Ilustrácia'),
      'base' => 'node_content',
      'description' => t('Ilustrácia k heslu. Zvoľte rovnaký názov ako je názov súvisiaceho hesla (prípadne pridajte "Il.1" alebo podobne)  a rovnakú lexikálnu skupinu. Po vytvorení treba ilustráciu heslu priradiť (otvoriť heslo na úpravu a nastaviť pole Ilustrácia).'),
      'has_title' => '1',
      'title_label' => t('Ilustrácia'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
