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

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished forum content'.
  $permissions['view any unpublished forum content'] = array(
    'name' => 'view any unpublished forum content',
    'roles' => array(),
    'module' => 'view_unpublished',
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
