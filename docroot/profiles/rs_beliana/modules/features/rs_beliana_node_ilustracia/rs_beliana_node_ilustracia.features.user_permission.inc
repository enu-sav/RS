<?php
/**
 * @file
 * rs_beliana_node_ilustracia.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_ilustracia_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_subor_ilustracie'.
  $permissions['create field_subor_ilustracie'] = array(
    'name' => 'create field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_subor_ilustracie'.
  $permissions['edit field_subor_ilustracie'] = array(
    'name' => 'edit field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_subor_ilustracie'.
  $permissions['edit own field_subor_ilustracie'] = array(
    'name' => 'edit own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_subor_ilustracie'.
  $permissions['view field_subor_ilustracie'] = array(
    'name' => 'view field_subor_ilustracie',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_subor_ilustracie'.
  $permissions['view own field_subor_ilustracie'] = array(
    'name' => 'view own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
