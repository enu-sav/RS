<?php
/**
 * @file
 * rs_beliana_forum.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rs_beliana_forum_taxonomy_default_vocabularies() {
  return array(
    'forums' => array(
      'name' => 'Fórum',
      'machine_name' => 'forums',
      'description' => 'Slovník navigácie fóra',
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
    ),
  );
}
