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

  // Exported permission: 'create field_table'.
  $permissions['create field_table'] = array(
    'name' => 'create field_table',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_table_weight'.
  $permissions['create field_table_weight'] = array(
    'name' => 'create field_table_weight',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vyslo_knizne'.
  $permissions['create field_vyslo_knizne'] = array(
    'name' => 'create field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create importovane_heslo content'.
  $permissions['create importovane_heslo content'] = array(
    'name' => 'create importovane_heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
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
      'Grafik' => 'Grafik',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Komentátor' => 'Komentátor',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'ig-redaktor' => 'ig-redaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_table'.
  $permissions['edit field_table'] = array(
    'name' => 'edit field_table',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_table_weight'.
  $permissions['edit field_table_weight'] = array(
    'name' => 'edit field_table_weight',
    'roles' => array(
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vyslo_knizne'.
  $permissions['edit field_vyslo_knizne'] = array(
    'name' => 'edit field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_table'.
  $permissions['edit own field_table'] = array(
    'name' => 'edit own field_table',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_table_weight'.
  $permissions['edit own field_table_weight'] = array(
    'name' => 'edit own field_table_weight',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vyslo_knizne'.
  $permissions['edit own field_vyslo_knizne'] = array(
    'name' => 'edit own field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own importovane_heslo content'.
  $permissions['edit own importovane_heslo content'] = array(
    'name' => 'edit own importovane_heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished importovane_heslo content'.
  $permissions['view any unpublished importovane_heslo content'] = array(
    'name' => 'view any unpublished importovane_heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_table'.
  $permissions['view field_table'] = array(
    'name' => 'view field_table',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_table_weight'.
  $permissions['view field_table_weight'] = array(
    'name' => 'view field_table_weight',
    'roles' => array(
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vyslo_knizne'.
  $permissions['view field_vyslo_knizne'] = array(
    'name' => 'view field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_table'.
  $permissions['view own field_table'] = array(
    'name' => 'view own field_table',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_table_weight'.
  $permissions['view own field_table_weight'] = array(
    'name' => 'view own field_table_weight',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vyslo_knizne'.
  $permissions['view own field_vyslo_knizne'] = array(
    'name' => 'view own field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
