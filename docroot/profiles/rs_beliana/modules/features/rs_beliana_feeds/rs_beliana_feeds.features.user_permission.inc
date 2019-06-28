<?php
/**
 * @file
 * rs_beliana_feeds.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_feeds_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'clear reimport_exp_il feeds'.
  $permissions['clear reimport_exp_il feeds'] = array(
    'name' => 'clear reimport_exp_il feeds',
    'roles' => array(
      'administrátor' => 'administrátor',
      'iGrafik' => 'iGrafik',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import reimport_exp_il feeds'.
  $permissions['import reimport_exp_il feeds'] = array(
    'name' => 'import reimport_exp_il feeds',
    'roles' => array(
      'administrátor' => 'administrátor',
      'iGrafik' => 'iGrafik',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper reimport_exp_il'.
  $permissions['tamper reimport_exp_il'] = array(
    'name' => 'tamper reimport_exp_il',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock reimport_exp_il feeds'.
  $permissions['unlock reimport_exp_il feeds'] = array(
    'name' => 'unlock reimport_exp_il feeds',
    'roles' => array(
      'administrátor' => 'administrátor',
      'iGrafik' => 'iGrafik',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
