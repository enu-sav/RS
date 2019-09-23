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

  // Exported permission: 'create field_datum_prevzatia'.
  $permissions['create field_datum_prevzatia'] = array(
    'name' => 'create field_datum_prevzatia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_prevzatia_rsw'.
  $permissions['create field_datum_prevzatia_rsw'] = array(
    'name' => 'create field_datum_prevzatia_rsw',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_na_zoradenie'.
  $permissions['create field_na_zoradenie'] = array(
    'name' => 'create field_na_zoradenie',
    'roles' => array(
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_obrazok_navrh_'.
  $permissions['create field_obrazok_navrh_'] = array(
    'name' => 'create field_obrazok_navrh_',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_odmena'.
  $permissions['create field_odmena'] = array(
    'name' => 'create field_odmena',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_prenesene_do_rs'.
  $permissions['create field_prenesene_do_rs'] = array(
    'name' => 'create field_prenesene_do_rs',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_prenesene_do_rsw'.
  $permissions['create field_prenesene_do_rsw'] = array(
    'name' => 'create field_prenesene_do_rsw',
    'roles' => array(
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_taxsubor'.
  $permissions['create field_taxsubor'] = array(
    'name' => 'create field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_url_autora_diela_l'.
  $permissions['create field_url_autora_diela_l'] = array(
    'name' => 'create field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create ilustracia content'.
  $permissions['create ilustracia content'] = array(
    'name' => 'create ilustracia content',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'iGrafik' => 'iGrafik',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create title_field'.
  $permissions['create title_field'] = array(
    'name' => 'create title_field',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
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
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'iGrafik' => 'iGrafik',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_datum_prevzatia'.
  $permissions['edit field_datum_prevzatia'] = array(
    'name' => 'edit field_datum_prevzatia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_prevzatia_rsw'.
  $permissions['edit field_datum_prevzatia_rsw'] = array(
    'name' => 'edit field_datum_prevzatia_rsw',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_institucia'.
  $permissions['edit field_institucia'] = array(
    'name' => 'edit field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_licencia1'.
  $permissions['edit field_licencia1'] = array(
    'name' => 'edit field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meno_autora_diela'.
  $permissions['edit field_meno_autora_diela'] = array(
    'name' => 'edit field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meno_autora_snimky_diela'.
  $permissions['edit field_meno_autora_snimky_diela'] = array(
    'name' => 'edit field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_modifikovane'.
  $permissions['edit field_modifikovane'] = array(
    'name' => 'edit field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_na_zoradenie'.
  $permissions['edit field_na_zoradenie'] = array(
    'name' => 'edit field_na_zoradenie',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_nazov_diela'.
  $permissions['edit field_nazov_diela'] = array(
    'name' => 'edit field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_obrazok_navrh_'.
  $permissions['edit field_obrazok_navrh_'] = array(
    'name' => 'edit field_obrazok_navrh_',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_odmena'.
  $permissions['edit field_odmena'] = array(
    'name' => 'edit field_odmena',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_popis_modifikacie'.
  $permissions['edit field_popis_modifikacie'] = array(
    'name' => 'edit field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pouzit'.
  $permissions['edit field_pouzit'] = array(
    'name' => 'edit field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_prenesene_do_rs'.
  $permissions['edit field_prenesene_do_rs'] = array(
    'name' => 'edit field_prenesene_do_rs',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_prenesene_do_rsw'.
  $permissions['edit field_prenesene_do_rsw'] = array(
    'name' => 'edit field_prenesene_do_rsw',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_subor_ilustracie'.
  $permissions['edit field_subor_ilustracie'] = array(
    'name' => 'edit field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_taxsubor'.
  $permissions['edit field_taxsubor'] = array(
    'name' => 'edit field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_autora_diela_l'.
  $permissions['edit field_url_autora_diela_l'] = array(
    'name' => 'edit field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_diela_l'.
  $permissions['edit field_url_diela_l'] = array(
    'name' => 'edit field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_url_textu_licencie_l'.
  $permissions['edit field_url_textu_licencie_l'] = array(
    'name' => 'edit field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zdroj_ilustracie'.
  $permissions['edit field_zdroj_ilustracie'] = array(
    'name' => 'edit field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_prevzatia'.
  $permissions['edit own field_datum_prevzatia'] = array(
    'name' => 'edit own field_datum_prevzatia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_prevzatia_rsw'.
  $permissions['edit own field_datum_prevzatia_rsw'] = array(
    'name' => 'edit own field_datum_prevzatia_rsw',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_na_zoradenie'.
  $permissions['edit own field_na_zoradenie'] = array(
    'name' => 'edit own field_na_zoradenie',
    'roles' => array(
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_obrazok_navrh_'.
  $permissions['edit own field_obrazok_navrh_'] = array(
    'name' => 'edit own field_obrazok_navrh_',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_odmena'.
  $permissions['edit own field_odmena'] = array(
    'name' => 'edit own field_odmena',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_prenesene_do_rs'.
  $permissions['edit own field_prenesene_do_rs'] = array(
    'name' => 'edit own field_prenesene_do_rs',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_prenesene_do_rsw'.
  $permissions['edit own field_prenesene_do_rsw'] = array(
    'name' => 'edit own field_prenesene_do_rsw',
    'roles' => array(
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_taxsubor'.
  $permissions['edit own field_taxsubor'] = array(
    'name' => 'edit own field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_url_autora_diela_l'.
  $permissions['edit own field_url_autora_diela_l'] = array(
    'name' => 'edit own field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own ilustracia content'.
  $permissions['edit own ilustracia content'] = array(
    'name' => 'edit own ilustracia content',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'iGrafik' => 'iGrafik',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own title_field'.
  $permissions['edit own title_field'] = array(
    'name' => 'edit own title_field',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit title_field'.
  $permissions['edit title_field'] = array(
    'name' => 'edit title_field',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view any unpublished ilustracia content'.
  $permissions['view any unpublished ilustracia content'] = array(
    'name' => 'view any unpublished ilustracia content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_datum_prevzatia'.
  $permissions['view field_datum_prevzatia'] = array(
    'name' => 'view field_datum_prevzatia',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_prevzatia_rsw'.
  $permissions['view field_datum_prevzatia_rsw'] = array(
    'name' => 'view field_datum_prevzatia_rsw',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_drzitel_prav'.
  $permissions['view field_drzitel_prav'] = array(
    'name' => 'view field_drzitel_prav',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_na_zoradenie'.
  $permissions['view field_na_zoradenie'] = array(
    'name' => 'view field_na_zoradenie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_obrazok_navrh_'.
  $permissions['view field_obrazok_navrh_'] = array(
    'name' => 'view field_obrazok_navrh_',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
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
      'authenticated user' => 'authenticated user',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_prenesene_do_rs'.
  $permissions['view field_prenesene_do_rs'] = array(
    'name' => 'view field_prenesene_do_rs',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_prenesene_do_rsw'.
  $permissions['view field_prenesene_do_rsw'] = array(
    'name' => 'view field_prenesene_do_rsw',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
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
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_taxsubor'.
  $permissions['view field_taxsubor'] = array(
    'name' => 'view field_taxsubor',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_prevzatia'.
  $permissions['view own field_datum_prevzatia'] = array(
    'name' => 'view own field_datum_prevzatia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_prevzatia_rsw'.
  $permissions['view own field_datum_prevzatia_rsw'] = array(
    'name' => 'view own field_datum_prevzatia_rsw',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_institucia'.
  $permissions['view own field_institucia'] = array(
    'name' => 'view own field_institucia',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_licencia1'.
  $permissions['view own field_licencia1'] = array(
    'name' => 'view own field_licencia1',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meno_autora_diela'.
  $permissions['view own field_meno_autora_diela'] = array(
    'name' => 'view own field_meno_autora_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meno_autora_snimky_diela'.
  $permissions['view own field_meno_autora_snimky_diela'] = array(
    'name' => 'view own field_meno_autora_snimky_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_modifikovane'.
  $permissions['view own field_modifikovane'] = array(
    'name' => 'view own field_modifikovane',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_na_zoradenie'.
  $permissions['view own field_na_zoradenie'] = array(
    'name' => 'view own field_na_zoradenie',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_nazov_diela'.
  $permissions['view own field_nazov_diela'] = array(
    'name' => 'view own field_nazov_diela',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_obrazok_navrh_'.
  $permissions['view own field_obrazok_navrh_'] = array(
    'name' => 'view own field_obrazok_navrh_',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_odmena'.
  $permissions['view own field_odmena'] = array(
    'name' => 'view own field_odmena',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_popis_modifikacie'.
  $permissions['view own field_popis_modifikacie'] = array(
    'name' => 'view own field_popis_modifikacie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pouzit'.
  $permissions['view own field_pouzit'] = array(
    'name' => 'view own field_pouzit',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_prenesene_do_rs'.
  $permissions['view own field_prenesene_do_rs'] = array(
    'name' => 'view own field_prenesene_do_rs',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_prenesene_do_rsw'.
  $permissions['view own field_prenesene_do_rsw'] = array(
    'name' => 'view own field_prenesene_do_rsw',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_subor_ilustracie'.
  $permissions['view own field_subor_ilustracie'] = array(
    'name' => 'view own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_taxsubor'.
  $permissions['view own field_taxsubor'] = array(
    'name' => 'view own field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_autora_diela_l'.
  $permissions['view own field_url_autora_diela_l'] = array(
    'name' => 'view own field_url_autora_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_diela_l'.
  $permissions['view own field_url_diela_l'] = array(
    'name' => 'view own field_url_diela_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_url_textu_licencie_l'.
  $permissions['view own field_url_textu_licencie_l'] = array(
    'name' => 'view own field_url_textu_licencie_l',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zdroj_ilustracie'.
  $permissions['view own field_zdroj_ilustracie'] = array(
    'name' => 'view own field_zdroj_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own title_field'.
  $permissions['view own title_field'] = array(
    'name' => 'view own title_field',
    'roles' => array(
      'administrátor' => 'administrátor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view title_field'.
  $permissions['view title_field'] = array(
    'name' => 'view title_field',
    'roles' => array(
      'administrátor' => 'administrátor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
