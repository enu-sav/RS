<?php
/**
 * @file
 * rs_beliana_node_heslo.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rs_beliana_node_heslo_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_redaktori_zluceneho'.
  $field_bases['field_redaktori_zluceneho'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_redaktori_zluceneho',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'lexikalne_skupiny',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'title_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
