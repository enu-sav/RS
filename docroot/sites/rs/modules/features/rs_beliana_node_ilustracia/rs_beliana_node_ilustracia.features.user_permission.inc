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

  // Exported permission: 'create field_alternativny_text'.
  $permissions['create field_alternativny_text'] = array(
    'name' => 'create field_alternativny_text',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_zverejnenia'.
  $permissions['create field_datum_zverejnenia'] = array(
    'name' => 'create field_datum_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_drzitel_prav'.
  $permissions['create field_drzitel_prav'] = array(
    'name' => 'create field_drzitel_prav',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_institucia'.
  $permissions['create field_institucia'] = array(
    'name' => 'create field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_instrukcie_pre_typografa'.
  $permissions['create field_instrukcie_pre_typografa'] = array(
    'name' => 'create field_instrukcie_pre_typografa',
    'roles' => array(
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_licencia1'.
  $permissions['create field_licencia1'] = array(
    'name' => 'create field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_meno_autora_diela'.
  $permissions['create field_meno_autora_diela'] = array(
    'name' => 'create field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_meno_autora_snimky_diela'.
  $permissions['create field_meno_autora_snimky_diela'] = array(
    'name' => 'create field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_modifikovane'.
  $permissions['create field_modifikovane'] = array(
    'name' => 'create field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_nazov_diela'.
  $permissions['create field_nazov_diela'] = array(
    'name' => 'create field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_obrazok_odkaz'.
  $permissions['create field_obrazok_odkaz'] = array(
    'name' => 'create field_obrazok_odkaz',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 2X' => 'Výstupný redaktor 2X',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_odmena'.
  $permissions['create field_odmena'] = array(
    'name' => 'create field_odmena',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_original'.
  $permissions['create field_original'] = array(
    'name' => 'create field_original',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_popis_modifikacie'.
  $permissions['create field_popis_modifikacie'] = array(
    'name' => 'create field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pouzit'.
  $permissions['create field_pouzit'] = array(
    'name' => 'create field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_subor_ilustracie'.
  $permissions['create field_subor_ilustracie'] = array(
    'name' => 'create field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_autora_diela_l'.
  $permissions['create field_url_autora_diela_l'] = array(
    'name' => 'create field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_diela_l'.
  $permissions['create field_url_diela_l'] = array(
    'name' => 'create field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_textu_licencie_l'.
  $permissions['create field_url_textu_licencie_l'] = array(
    'name' => 'create field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zdroj_ilustracie'.
  $permissions['create field_zdroj_ilustracie'] = array(
    'name' => 'create field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create ilustracia content'.
  $permissions['create ilustracia content'] = array(
    'name' => 'create ilustracia content',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ilustracia content'.
  $permissions['delete any ilustracia content'] = array(
    'name' => 'delete any ilustracia content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ilustracia content'.
  $permissions['delete own ilustracia content'] = array(
    'name' => 'delete own ilustracia content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ilustracia content'.
  $permissions['edit any ilustracia content'] = array(
    'name' => 'edit any ilustracia content',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Komentátor' => 'Komentátor',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_alternativny_text'.
  $permissions['edit field_alternativny_text'] = array(
    'name' => 'edit field_alternativny_text',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_zverejnenia'.
  $permissions['edit field_datum_zverejnenia'] = array(
    'name' => 'edit field_datum_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_drzitel_prav'.
  $permissions['edit field_drzitel_prav'] = array(
    'name' => 'edit field_drzitel_prav',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_institucia'.
  $permissions['edit field_institucia'] = array(
    'name' => 'edit field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_instrukcie_pre_typografa'.
  $permissions['edit field_instrukcie_pre_typografa'] = array(
    'name' => 'edit field_instrukcie_pre_typografa',
    'roles' => array(
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_licencia1'.
  $permissions['edit field_licencia1'] = array(
    'name' => 'edit field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meno_autora_diela'.
  $permissions['edit field_meno_autora_diela'] = array(
    'name' => 'edit field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meno_autora_snimky_diela'.
  $permissions['edit field_meno_autora_snimky_diela'] = array(
    'name' => 'edit field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_modifikovane'.
  $permissions['edit field_modifikovane'] = array(
    'name' => 'edit field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_nazov_diela'.
  $permissions['edit field_nazov_diela'] = array(
    'name' => 'edit field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_obrazok_odkaz'.
  $permissions['edit field_obrazok_odkaz'] = array(
    'name' => 'edit field_obrazok_odkaz',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 2X' => 'Výstupný redaktor 2X',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_odmena'.
  $permissions['edit field_odmena'] = array(
    'name' => 'edit field_odmena',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_original'.
  $permissions['edit field_original'] = array(
    'name' => 'edit field_original',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_popis_modifikacie'.
  $permissions['edit field_popis_modifikacie'] = array(
    'name' => 'edit field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pouzit'.
  $permissions['edit field_pouzit'] = array(
    'name' => 'edit field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_subor_ilustracie'.
  $permissions['edit field_subor_ilustracie'] = array(
    'name' => 'edit field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_autora_diela_l'.
  $permissions['edit field_url_autora_diela_l'] = array(
    'name' => 'edit field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_diela_l'.
  $permissions['edit field_url_diela_l'] = array(
    'name' => 'edit field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_textu_licencie_l'.
  $permissions['edit field_url_textu_licencie_l'] = array(
    'name' => 'edit field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zdroj_ilustracie'.
  $permissions['edit field_zdroj_ilustracie'] = array(
    'name' => 'edit field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_alternativny_text'.
  $permissions['edit own field_alternativny_text'] = array(
    'name' => 'edit own field_alternativny_text',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_zverejnenia'.
  $permissions['edit own field_datum_zverejnenia'] = array(
    'name' => 'edit own field_datum_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_drzitel_prav'.
  $permissions['edit own field_drzitel_prav'] = array(
    'name' => 'edit own field_drzitel_prav',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_institucia'.
  $permissions['edit own field_institucia'] = array(
    'name' => 'edit own field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_instrukcie_pre_typografa'.
  $permissions['edit own field_instrukcie_pre_typografa'] = array(
    'name' => 'edit own field_instrukcie_pre_typografa',
    'roles' => array(
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_licencia1'.
  $permissions['edit own field_licencia1'] = array(
    'name' => 'edit own field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_meno_autora_diela'.
  $permissions['edit own field_meno_autora_diela'] = array(
    'name' => 'edit own field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_meno_autora_snimky_diela'.
  $permissions['edit own field_meno_autora_snimky_diela'] = array(
    'name' => 'edit own field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_modifikovane'.
  $permissions['edit own field_modifikovane'] = array(
    'name' => 'edit own field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_nazov_diela'.
  $permissions['edit own field_nazov_diela'] = array(
    'name' => 'edit own field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_obrazok_odkaz'.
  $permissions['edit own field_obrazok_odkaz'] = array(
    'name' => 'edit own field_obrazok_odkaz',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 2X' => 'Výstupný redaktor 2X',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_odmena'.
  $permissions['edit own field_odmena'] = array(
    'name' => 'edit own field_odmena',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_original'.
  $permissions['edit own field_original'] = array(
    'name' => 'edit own field_original',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_popis_modifikacie'.
  $permissions['edit own field_popis_modifikacie'] = array(
    'name' => 'edit own field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pouzit'.
  $permissions['edit own field_pouzit'] = array(
    'name' => 'edit own field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_subor_ilustracie'.
  $permissions['edit own field_subor_ilustracie'] = array(
    'name' => 'edit own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_autora_diela_l'.
  $permissions['edit own field_url_autora_diela_l'] = array(
    'name' => 'edit own field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_diela_l'.
  $permissions['edit own field_url_diela_l'] = array(
    'name' => 'edit own field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_textu_licencie_l'.
  $permissions['edit own field_url_textu_licencie_l'] = array(
    'name' => 'edit own field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zdroj_ilustracie'.
  $permissions['edit own field_zdroj_ilustracie'] = array(
    'name' => 'edit own field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own ilustracia content'.
  $permissions['edit own ilustracia content'] = array(
    'name' => 'edit own ilustracia content',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished ilustracia content'.
  $permissions['view any unpublished ilustracia content'] = array(
    'name' => 'view any unpublished ilustracia content',
    'roles' => array(
      'Komentátor' => 'Komentátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_alternativny_text'.
  $permissions['view field_alternativny_text'] = array(
    'name' => 'view field_alternativny_text',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_zverejnenia'.
  $permissions['view field_datum_zverejnenia'] = array(
    'name' => 'view field_datum_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_drzitel_prav'.
  $permissions['view field_drzitel_prav'] = array(
    'name' => 'view field_drzitel_prav',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_institucia'.
  $permissions['view field_institucia'] = array(
    'name' => 'view field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_instrukcie_pre_typografa'.
  $permissions['view field_instrukcie_pre_typografa'] = array(
    'name' => 'view field_instrukcie_pre_typografa',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_licencia1'.
  $permissions['view field_licencia1'] = array(
    'name' => 'view field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_meno_autora_diela'.
  $permissions['view field_meno_autora_diela'] = array(
    'name' => 'view field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_meno_autora_snimky_diela'.
  $permissions['view field_meno_autora_snimky_diela'] = array(
    'name' => 'view field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_modifikovane'.
  $permissions['view field_modifikovane'] = array(
    'name' => 'view field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_nazov_diela'.
  $permissions['view field_nazov_diela'] = array(
    'name' => 'view field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_obrazok_odkaz'.
  $permissions['view field_obrazok_odkaz'] = array(
    'name' => 'view field_obrazok_odkaz',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_odmena'.
  $permissions['view field_odmena'] = array(
    'name' => 'view field_odmena',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_original'.
  $permissions['view field_original'] = array(
    'name' => 'view field_original',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_popis_modifikacie'.
  $permissions['view field_popis_modifikacie'] = array(
    'name' => 'view field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pouzit'.
  $permissions['view field_pouzit'] = array(
    'name' => 'view field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_subor_ilustracie'.
  $permissions['view field_subor_ilustracie'] = array(
    'name' => 'view field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_url_autora_diela_l'.
  $permissions['view field_url_autora_diela_l'] = array(
    'name' => 'view field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_url_diela_l'.
  $permissions['view field_url_diela_l'] = array(
    'name' => 'view field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_url_textu_licencie_l'.
  $permissions['view field_url_textu_licencie_l'] = array(
    'name' => 'view field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zdroj_ilustracie'.
  $permissions['view field_zdroj_ilustracie'] = array(
    'name' => 'view field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_alternativny_text'.
  $permissions['view own field_alternativny_text'] = array(
    'name' => 'view own field_alternativny_text',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_zverejnenia'.
  $permissions['view own field_datum_zverejnenia'] = array(
    'name' => 'view own field_datum_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_drzitel_prav'.
  $permissions['view own field_drzitel_prav'] = array(
    'name' => 'view own field_drzitel_prav',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_institucia'.
  $permissions['view own field_institucia'] = array(
    'name' => 'view own field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_instrukcie_pre_typografa'.
  $permissions['view own field_instrukcie_pre_typografa'] = array(
    'name' => 'view own field_instrukcie_pre_typografa',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_licencia1'.
  $permissions['view own field_licencia1'] = array(
    'name' => 'view own field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meno_autora_diela'.
  $permissions['view own field_meno_autora_diela'] = array(
    'name' => 'view own field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meno_autora_snimky_diela'.
  $permissions['view own field_meno_autora_snimky_diela'] = array(
    'name' => 'view own field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_modifikovane'.
  $permissions['view own field_modifikovane'] = array(
    'name' => 'view own field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_nazov_diela'.
  $permissions['view own field_nazov_diela'] = array(
    'name' => 'view own field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_obrazok_odkaz'.
  $permissions['view own field_obrazok_odkaz'] = array(
    'name' => 'view own field_obrazok_odkaz',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_odmena'.
  $permissions['view own field_odmena'] = array(
    'name' => 'view own field_odmena',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_original'.
  $permissions['view own field_original'] = array(
    'name' => 'view own field_original',
    'roles' => array(
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_popis_modifikacie'.
  $permissions['view own field_popis_modifikacie'] = array(
    'name' => 'view own field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pouzit'.
  $permissions['view own field_pouzit'] = array(
    'name' => 'view own field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_subor_ilustracie'.
  $permissions['view own field_subor_ilustracie'] = array(
    'name' => 'view own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_autora_diela_l'.
  $permissions['view own field_url_autora_diela_l'] = array(
    'name' => 'view own field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_diela_l'.
  $permissions['view own field_url_diela_l'] = array(
    'name' => 'view own field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_textu_licencie_l'.
  $permissions['view own field_url_textu_licencie_l'] = array(
    'name' => 'view own field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zdroj_ilustracie'.
  $permissions['view own field_zdroj_ilustracie'] = array(
    'name' => 'view own field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
