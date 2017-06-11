<?php
/**
 * @file
 * rs_beliana_users.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function rs_beliana_users_workbench_moderation_export_transitions() {
  $items = array(
    'u_vyst_redaktora_4:u_jaz_redaktora_2' => array(
      'from_name' => 'u_vyst_redaktora_4',
      'to_name' => 'u_jaz_redaktora_2',
      'name' => 'u_vyst_redaktora4-u_jaz_redaktora2',
    ),
  );
  return $items;
}
