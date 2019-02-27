<?php
/**
 * @file
 * rs_beliana_workbench.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function rs_beliana_workbench_workbench_moderation_export_states() {
  $items = array(
    'published' => array(
      'name' => 'published',
      'label' => 'published',
      'description' => 'nepoužívané',
      'weight' => 10,
    ),
  );
  return $items;
}
