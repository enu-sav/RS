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
      'administrátor' => 'administrátor',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'Oznamy' => 'Oznamy',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create taxonomy_forums'.
  $permissions['create taxonomy_forums'] = array(
    'name' => 'create taxonomy_forums',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Oznamy' => 'Oznamy',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'Oznamy' => 'Oznamy',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own taxonomy_forums'.
  $permissions['edit own taxonomy_forums'] = array(
    'name' => 'edit own taxonomy_forums',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit taxonomy_forums'.
  $permissions['edit taxonomy_forums'] = array(
    'name' => 'edit taxonomy_forums',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view last edited notice'.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view own taxonomy_forums'.
  $permissions['view own taxonomy_forums'] = array(
    'name' => 'view own taxonomy_forums',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view taxonomy_forums'.
  $permissions['view taxonomy_forums'] = array(
    'name' => 'view taxonomy_forums',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
