<?php
/**
 * @file
 * rs_beliana_node_importovane_heslo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_importovane_heslo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_doplnkova_ls'.
  $permissions['create field_doplnkova_ls'] = array(
    'name' => 'create field_doplnkova_ls',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create importovane_heslo content'.
  $permissions['create importovane_heslo content'] = array(
    'name' => 'create importovane_heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any importovane_heslo content'.
  $permissions['delete any importovane_heslo content'] = array(
    'name' => 'delete any importovane_heslo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own importovane_heslo content'.
  $permissions['delete own importovane_heslo content'] = array(
    'name' => 'delete own importovane_heslo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any importovane_heslo content'.
  $permissions['edit any importovane_heslo content'] = array(
    'name' => 'edit any importovane_heslo content',
    'roles' => array(
      'Autor' => 'Autor',
      'Etymologický redaktor' => 'Etymologický redaktor',
      'Grafik' => 'Grafik',
      'Jazykový korektor' => 'Jazykový korektor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'useradmin' => 'useradmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_doplnkova_ls'.
  $permissions['edit field_doplnkova_ls'] = array(
    'name' => 'edit field_doplnkova_ls',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_doplnkova_ls'.
  $permissions['edit own field_doplnkova_ls'] = array(
    'name' => 'edit own field_doplnkova_ls',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own importovane_heslo content'.
  $permissions['edit own importovane_heslo content'] = array(
    'name' => 'edit own importovane_heslo content',
    'roles' => array(
      'Autor' => 'Autor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished importovane_heslo content'.
  $permissions['view any unpublished importovane_heslo content'] = array(
    'name' => 'view any unpublished importovane_heslo content',
    'roles' => array(
      'Etymologický redaktor' => 'Etymologický redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_doplnkova_ls'.
  $permissions['view field_doplnkova_ls'] = array(
    'name' => 'view field_doplnkova_ls',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_doplnkova_ls'.
  $permissions['view own field_doplnkova_ls'] = array(
    'name' => 'view own field_doplnkova_ls',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
