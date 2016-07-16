<?php

/**
 * Implementaion of hook_feeds_processor_targets_alter().
 */
function feeds_empty_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
  foreach ($targets as $target => &$info) {
    $targets[$target]['form_callbacks'][] = 'feeds_empty_form_callback';
    $targets[$target]['summary_callbacks'][] = 'feeds_empty_summary_callback';
  }
}

/**
 * Mapping summary callback.
 */
function feeds_empty_summary_callback($mapping, $target, $form, $form_state) {
  $summary = t('Reuse old values if empty: ');
  if (!empty($mapping['feeds_empty_use_old'])) {
    $summary .= t('<strong>Yes</strong>');
  }
  else {
    $summary .= t('<strong>No</strong>');
  }

  if (isset($target['feeds_empty_old_summary_callback'])) {
    foreach ($target['feeds_empty_old_summary_callback'] as $key => $value) {
      $summary = $summary . '<br />' . $value($mapping, $target, $form, $form_state);
    }
  }

  return $summary;
}

/**
 * Mapping form callback.
 */
function feeds_empty_form_callback($mapping, $target, $form, $form_state) {
  $mapping_form = array();

  $mapping_form['feeds_empty_use_old'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use old value if empty'),
    '#default_value' => !empty($mapping['feeds_empty_use_old']),
  );

  foreach ($variable as $key => $value) {
    if (isset($target['feeds_empty_old_form_callback'])) {
      $mapping_form += $value($mapping, $target, $form, $form_state);
    }
  }

  return $mapping_form;
}

/**
 * Implements hook_feeds_presave().
 */
function feeds_empty_feeds_presave(FeedsSource $source, $entity, $item, $entity_id) {
  // Get the mapping from source.
  $mappings = $source->importer->processor->config['mappings'];

  array_change_key_case($item, CASE_LOWER);

  // Walk through fields mappings
  foreach ($mappings as $mapping) {

    $mapping_field_source_name = mb_strtolower($mapping['source']);
    $mapping_field_target_name = $mapping['target'];

    $source_field_value = $item[$mapping_field_source_name];
    if (is_array($source_field_value)) {
      $source_field_value = reset($source_field_value);
    }

    // Will do only if our setting on that mapping is set.
    if (empty($mapping['feeds_empty_use_old']) ) {
      continue;
    }

    // Will do only if we have really empty source value.
    if (!empty($source_field_value)) {
      continue;
    }

    $field_name = $mapping_field_target_name;
    if (!empty($mapping['real_target'])) {
      $field_name = $mapping['real_target'];
    }

    // Get the first part of the field name (in case of field_image:uri)
    $field_name = explode(':', $field_name);
    $field_name = reset($field_name);

    // Respect feeds_taxonomy_hierarchy module fileld naming
    if (preg_match('/^.+_hierarchical$/', $field_name)) {
      $field_name = substr($field_name, 0, -13);
    }

    // Get unchanged entity if we had not yet.
    if (empty($old_entity)) {
      $entity_type = $source->importer->processor->entityType();
      $old_entity = entity_load_unchanged($entity_type, $entity_id);
    }

    // If we've got unchanged entity, get the value of the field from there
    // and set it to the new entity.
    if (!empty($old_entity)) {
      $entity->$field_name = $old_entity->$field_name;
    }

  }
}
