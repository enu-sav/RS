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

  // Exported permission: 'create field_meno_autora_snimky_diela'.
  $permissions['create field_meno_autora_snimky_diela'] = array(
    'name' => 'create field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_modifikovane'.
  $permissions['create field_modifikovane'] = array(
    'name' => 'create field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_subor_ilustracie'.
  $permissions['create field_subor_ilustracie'] = array(
    'name' => 'create field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_autora_diela_l'.
  $permissions['create field_url_autora_diela_l'] = array(
    'name' => 'create field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_diela_l'.
  $permissions['create field_url_diela_l'] = array(
    'name' => 'create field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_textu_licencie_l'.
  $permissions['create field_url_textu_licencie_l'] = array(
    'name' => 'create field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meno_autora_snimky_diela'.
  $permissions['edit field_meno_autora_snimky_diela'] = array(
    'name' => 'edit field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_modifikovane'.
  $permissions['edit field_modifikovane'] = array(
    'name' => 'edit field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_subor_ilustracie'.
  $permissions['edit field_subor_ilustracie'] = array(
    'name' => 'edit field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_autora_diela_l'.
  $permissions['edit field_url_autora_diela_l'] = array(
    'name' => 'edit field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_diela_l'.
  $permissions['edit field_url_diela_l'] = array(
    'name' => 'edit field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_textu_licencie_l'.
  $permissions['edit field_url_textu_licencie_l'] = array(
    'name' => 'edit field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_meno_autora_snimky_diela'.
  $permissions['edit own field_meno_autora_snimky_diela'] = array(
    'name' => 'edit own field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_modifikovane'.
  $permissions['edit own field_modifikovane'] = array(
    'name' => 'edit own field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_subor_ilustracie'.
  $permissions['edit own field_subor_ilustracie'] = array(
    'name' => 'edit own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_autora_diela_l'.
  $permissions['edit own field_url_autora_diela_l'] = array(
    'name' => 'edit own field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_diela_l'.
  $permissions['edit own field_url_diela_l'] = array(
    'name' => 'edit own field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_textu_licencie_l'.
  $permissions['edit own field_url_textu_licencie_l'] = array(
    'name' => 'edit own field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_meno_autora_snimky_diela'.
  $permissions['view field_meno_autora_snimky_diela'] = array(
    'name' => 'view field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_modifikovane'.
  $permissions['view field_modifikovane'] = array(
    'name' => 'view field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_subor_ilustracie'.
  $permissions['view field_subor_ilustracie'] = array(
    'name' => 'view field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_url_autora_diela_l'.
  $permissions['view field_url_autora_diela_l'] = array(
    'name' => 'view field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_url_diela_l'.
  $permissions['view field_url_diela_l'] = array(
    'name' => 'view field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_url_textu_licencie_l'.
  $permissions['view field_url_textu_licencie_l'] = array(
    'name' => 'view field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meno_autora_snimky_diela'.
  $permissions['view own field_meno_autora_snimky_diela'] = array(
    'name' => 'view own field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_modifikovane'.
  $permissions['view own field_modifikovane'] = array(
    'name' => 'view own field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_subor_ilustracie'.
  $permissions['view own field_subor_ilustracie'] = array(
    'name' => 'view own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_autora_diela_l'.
  $permissions['view own field_url_autora_diela_l'] = array(
    'name' => 'view own field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_diela_l'.
  $permissions['view own field_url_diela_l'] = array(
    'name' => 'view own field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_textu_licencie_l'.
  $permissions['view own field_url_textu_licencie_l'] = array(
    'name' => 'view own field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
