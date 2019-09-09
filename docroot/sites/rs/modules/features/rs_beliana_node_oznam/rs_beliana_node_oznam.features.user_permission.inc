<?php
/**
 * @file
 * rs_beliana_node_oznam.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_oznam_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create oznam content'.
  $permissions['create oznam content'] = array(
    'name' => 'create oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any oznam content'.
  $permissions['delete any oznam content'] = array(
    'name' => 'delete any oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own oznam content'.
  $permissions['delete own oznam content'] = array(
    'name' => 'delete own oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any oznam content'.
  $permissions['edit any oznam content'] = array(
    'name' => 'edit any oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own oznam content'.
  $permissions['edit own oznam content'] = array(
    'name' => 'edit own oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished oznam content'.
  $permissions['view any unpublished oznam content'] = array(
    'name' => 'view any unpublished oznam content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
