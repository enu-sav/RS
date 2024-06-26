<?php
/**
 * @file
 * rs_beliana_node_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished article content'.
  $permissions['view any unpublished article content'] = array(
    'name' => 'view any unpublished article content',
    'roles' => array(
      'Komentátor' => 'Komentátor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
