<?php
/**
 * @file
 * rs_beliana_forum.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer advanced forum'.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view forum statistics'.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view last edited notice'.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'advanced_forum',
  );

  return $permissions;
}
