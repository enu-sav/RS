<?php
/**
 * @file
 * rs_beliana_node_archivovane.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_archivovane_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create archivovane_knizne content'.
  $permissions['create archivovane_knizne content'] = array(
    'name' => 'create archivovane_knizne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any archivovane_knizne content'.
  $permissions['delete any archivovane_knizne content'] = array(
    'name' => 'delete any archivovane_knizne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own archivovane_knizne content'.
  $permissions['delete own archivovane_knizne content'] = array(
    'name' => 'delete own archivovane_knizne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any archivovane_knizne content'.
  $permissions['edit any archivovane_knizne content'] = array(
    'name' => 'edit any archivovane_knizne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own archivovane_knizne content'.
  $permissions['edit own archivovane_knizne content'] = array(
    'name' => 'edit own archivovane_knizne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished archivovane_knizne content'.
  $permissions['view any unpublished archivovane_knizne content'] = array(
    'name' => 'view any unpublished archivovane_knizne content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
