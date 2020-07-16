<?php
/**
 * @file
 * rs_beliana_node_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create body'.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrátor' => 'administrátor',
      'zRedaktor' => 'zRedaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit body'.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own body'.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished page content'.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'administrátor' => 'administrátor',
      'zRedaktor' => 'zRedaktor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view body'.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own body'.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
