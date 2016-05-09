<?php
/**
 * @file
 * redak_n_syst_m_beliana_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rs_beliana_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__lexikalne_skupiny';
  $strongarm->value = array();
  $export['field_bundle_settings_taxonomy_term__lexikalne_skupiny'] = $strongarm;

  return $export;
}
