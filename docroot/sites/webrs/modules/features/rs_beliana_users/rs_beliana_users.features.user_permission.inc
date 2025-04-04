<?php

/**
 * @file
 * rs_beliana_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'useradmin' => 'useradmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer simplify'.
  $permissions['administer simplify'] = array(
    'name' => 'administer simplify',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create field_zivotopis'.
  $permissions['create field_zivotopis'] = array(
    'name' => 'create field_zivotopis',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zivotopis'.
  $permissions['edit field_zivotopis'] = array(
    'name' => 'edit field_zivotopis',
    'roles' => array(
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zivotopis'.
  $permissions['edit own field_zivotopis'] = array(
    'name' => 'edit own field_zivotopis',
    'roles' => array(
      'Autor' => 'Autor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'view field_zivotopis'.
  $permissions['view field_zivotopis'] = array(
    'name' => 'view field_zivotopis',
    'roles' => array(
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view hidden fields'.
  $permissions['view hidden fields'] = array(
    'name' => 'view hidden fields',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'view own field_zivotopis'.
  $permissions['view own field_zivotopis'] = array(
    'name' => 'view own field_zivotopis',
    'roles' => array(
      'Autor' => 'Autor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
