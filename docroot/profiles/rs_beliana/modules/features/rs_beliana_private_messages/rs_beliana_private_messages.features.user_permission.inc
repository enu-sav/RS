<?php
/**
 * @file
 * rs_beliana_private_messages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_private_messages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  return $permissions;
}
