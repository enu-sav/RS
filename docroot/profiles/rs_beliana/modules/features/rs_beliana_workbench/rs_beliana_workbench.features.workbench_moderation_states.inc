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
    'moved' => array(
      'name' => 'moved',
      'label' => 'Prevzatá ilustrácia',
      'description' => 'Ilustrácia prevzatá do redakčného systému. Tam sa definitívne rozhodne, či aj bude použitá',
      'weight' => -9,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => '',
      'weight' => -7,
    ),
  );
  return $items;
}
