<?php
/**
 * @file
 * rs_beliana_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in lexikalne_skupiny'.
  $permissions['delete terms in lexikalne_skupiny'] = array(
    'name' => 'delete terms in lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subory'.
  $permissions['delete terms in subory'] = array(
    'name' => 'delete terms in subory',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in lexikalne_skupiny'.
  $permissions['edit terms in lexikalne_skupiny'] = array(
    'name' => 'edit terms in lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subory'.
  $permissions['edit terms in subory'] = array(
    'name' => 'edit terms in subory',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
