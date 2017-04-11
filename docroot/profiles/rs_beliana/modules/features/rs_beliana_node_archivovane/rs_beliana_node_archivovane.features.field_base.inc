<?php
/**
 * @file
 * rs_beliana_node_archivovane.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rs_beliana_node_archivovane_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_aheslo_text'.
  $field_bases['field_aheslo_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_aheslo_text',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
