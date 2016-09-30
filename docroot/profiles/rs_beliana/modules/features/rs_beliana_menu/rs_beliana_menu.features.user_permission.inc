<?php
/**
 * @file
 * rs_beliana_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ckeditor_lite'.
  $permissions['administer ckeditor_lite'] = array(
    'name' => 'administer ckeditor_lite',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'ckeditor_lite',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'ckeditor_lite highlight changes'.
  $permissions['ckeditor_lite highlight changes'] = array(
    'name' => 'ckeditor_lite highlight changes',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'ckeditor_lite',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  return $permissions;
}
