<?php
/**
 * @file
 * rs_beliana_node_heslo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_heslo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_datum_prveho_zverejnenia'.
  $permissions['create field_datum_prveho_zverejnenia'] = array(
    'name' => 'create field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_redaktori_zluceneho'.
  $permissions['create field_redaktori_zluceneho'] = array(
    'name' => 'create field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_prveho_zverejnenia'.
  $permissions['edit field_datum_prveho_zverejnenia'] = array(
    'name' => 'edit field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_redaktori_zluceneho'.
  $permissions['edit field_redaktori_zluceneho'] = array(
    'name' => 'edit field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_prveho_zverejnenia'.
  $permissions['edit own field_datum_prveho_zverejnenia'] = array(
    'name' => 'edit own field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_redaktori_zluceneho'.
  $permissions['edit own field_redaktori_zluceneho'] = array(
    'name' => 'edit own field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_prveho_zverejnenia'.
  $permissions['view field_datum_prveho_zverejnenia'] = array(
    'name' => 'view field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_redaktori_zluceneho'.
  $permissions['view field_redaktori_zluceneho'] = array(
    'name' => 'view field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_prveho_zverejnenia'.
  $permissions['view own field_datum_prveho_zverejnenia'] = array(
    'name' => 'view own field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_redaktori_zluceneho'.
  $permissions['view own field_redaktori_zluceneho'] = array(
    'name' => 'view own field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
