<?php
/**
 * @file
 * redak_n_syst_m_beliana_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rs_beliana_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'lexikalne_skupiny' => array(
      'name' => 'Beliana',
      'machine_name' => 'lexikalne_skupiny',
      'description' => 'Lexikálne kategórie Beliany',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'subory' => array(
      'name' => 'Súbory',
      'machine_name' => 'subory',
      'description' => 'Súbory Beliany: Alare, Ante, ...',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
