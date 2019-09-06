<?php
/**
 * @file
 * rs_beliana_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'views',
  );

  return $permissions;
}
