<?php
/**
 * @file
 * rs_beliana_workbench.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_workbench_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'access workbench access by role'.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench access'.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'assign workbench access'.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'batch update workbench access'.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'block view revisions in _ilustr_cia_u_autora state'.
  $permissions['block view revisions in _ilustr_cia_u_autora state'] = array(
    'name' => 'block view revisions in _ilustr_cia_u_autora state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in draft state'.
  $permissions['block view revisions in draft state'] = array(
    'name' => 'block view revisions in draft state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in ilustracia_na_webe state'.
  $permissions['block view revisions in ilustracia_na_webe state'] = array(
    'name' => 'block view revisions in ilustracia_na_webe state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in ilustracia_na_zverejnenie state'.
  $permissions['block view revisions in ilustracia_na_zverejnenie state'] = array(
    'name' => 'block view revisions in ilustracia_na_zverejnenie state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in ilustracia_u_grafika state'.
  $permissions['block view revisions in ilustracia_u_grafika state'] = array(
    'name' => 'block view revisions in ilustracia_u_grafika state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in ilustracia_u_redaktora state'.
  $permissions['block view revisions in ilustracia_u_redaktora state'] = array(
    'name' => 'block view revisions in ilustracia_u_redaktora state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in ilustracia_u_vyst_redaktora_5 state'.
  $permissions['block view revisions in ilustracia_u_vyst_redaktora_5 state'] = array(
    'name' => 'block view revisions in ilustracia_u_vyst_redaktora_5 state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in importovane state'.
  $permissions['block view revisions in importovane state'] = array(
    'name' => 'block view revisions in importovane state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in importovane_u_jr2 state'.
  $permissions['block view revisions in importovane_u_jr2 state'] = array(
    'name' => 'block view revisions in importovane_u_jr2 state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in importovane_u_vr state'.
  $permissions['block view revisions in importovane_u_vr state'] = array(
    'name' => 'block view revisions in importovane_u_vr state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in importovane_vyradene state'.
  $permissions['block view revisions in importovane_vyradene state'] = array(
    'name' => 'block view revisions in importovane_vyradene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in na_jazykovu_korekturu state'.
  $permissions['block view revisions in na_jazykovu_korekturu state'] = array(
    'name' => 'block view revisions in na_jazykovu_korekturu state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in na_opakovane_zverejnenie state'.
  $permissions['block view revisions in na_opakovane_zverejnenie state'] = array(
    'name' => 'block view revisions in na_opakovane_zverejnenie state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in na_zalomenie state'.
  $permissions['block view revisions in na_zalomenie state'] = array(
    'name' => 'block view revisions in na_zalomenie state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in na_zverejnenie state'.
  $permissions['block view revisions in na_zverejnenie state'] = array(
    'name' => 'block view revisions in na_zverejnenie state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in navrhnute_na_vyradenie state'.
  $permissions['block view revisions in navrhnute_na_vyradenie state'] = array(
    'name' => 'block view revisions in navrhnute_na_vyradenie state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in needs_review state'.
  $permissions['block view revisions in needs_review state'] = array(
    'name' => 'block view revisions in needs_review state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in nova_ilustracia state'.
  $permissions['block view revisions in nova_ilustracia state'] = array(
    'name' => 'block view revisions in nova_ilustracia state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in pozdr_an_ state'.
  $permissions['block view revisions in pozdr_an_ state'] = array(
    'name' => 'block view revisions in pozdr_an_ state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in publikovane_na_webe state'.
  $permissions['block view revisions in publikovane_na_webe state'] = array(
    'name' => 'block view revisions in publikovane_na_webe state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in published state'.
  $permissions['block view revisions in published state'] = array(
    'name' => 'block view revisions in published state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_autora state'.
  $permissions['block view revisions in u_autora state'] = array(
    'name' => 'block view revisions in u_autora state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_konzultanta state'.
  $permissions['block view revisions in u_konzultanta state'] = array(
    'name' => 'block view revisions in u_konzultanta state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in ukoncenezluene state'.
  $permissions['block view revisions in ukoncenezluene state'] = array(
    'name' => 'block view revisions in ukoncenezluene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in vyradene state'.
  $permissions['block view revisions in vyradene state'] = array(
    'name' => 'block view revisions in vyradene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in zaradene state'.
  $permissions['block view revisions in zaradene state'] = array(
    'name' => 'block view revisions in zaradene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in zlucene state'.
  $permissions['block view revisions in zlucene state'] = array(
    'name' => 'block view revisions in zlucene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in zverejnene_oprava state'.
  $permissions['block view revisions in zverejnene_oprava state'] = array(
    'name' => 'block view revisions in zverejnene_oprava state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in zverejnene_vratene state'.
  $permissions['block view revisions in zverejnene_vratene state'] = array(
    'name' => 'block view revisions in zverejnene_vratene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'edit revisions in _ilustr_cia_u_autora state'.
  $permissions['edit revisions in _ilustr_cia_u_autora state'] = array(
    'name' => 'edit revisions in _ilustr_cia_u_autora state',
    'roles' => array(
      'Autor' => 'Autor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in any state'.
  $permissions['edit revisions in any state'] = array(
    'name' => 'edit revisions in any state',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in draft state'.
  $permissions['edit revisions in draft state'] = array(
    'name' => 'edit revisions in draft state',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in ilustracia_na_webe state'.
  $permissions['edit revisions in ilustracia_na_webe state'] = array(
    'name' => 'edit revisions in ilustracia_na_webe state',
    'roles' => array(
      'Grafik' => 'Grafik',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in ilustracia_na_zverejnenie state'.
  $permissions['edit revisions in ilustracia_na_zverejnenie state'] = array(
    'name' => 'edit revisions in ilustracia_na_zverejnenie state',
    'roles' => array(
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in ilustracia_u_grafika state'.
  $permissions['edit revisions in ilustracia_u_grafika state'] = array(
    'name' => 'edit revisions in ilustracia_u_grafika state',
    'roles' => array(
      'Grafik' => 'Grafik',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in ilustracia_u_redaktora state'.
  $permissions['edit revisions in ilustracia_u_redaktora state'] = array(
    'name' => 'edit revisions in ilustracia_u_redaktora state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in ilustracia_u_vyst_redaktora_5 state'.
  $permissions['edit revisions in ilustracia_u_vyst_redaktora_5 state'] = array(
    'name' => 'edit revisions in ilustracia_u_vyst_redaktora_5 state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Výstupný redaktor' => 'Výstupný redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in importovane state'.
  $permissions['edit revisions in importovane state'] = array(
    'name' => 'edit revisions in importovane state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'garant' => 'garant',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in importovane_u_jr2 state'.
  $permissions['edit revisions in importovane_u_jr2 state'] = array(
    'name' => 'edit revisions in importovane_u_jr2 state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in importovane_u_vr state'.
  $permissions['edit revisions in importovane_u_vr state'] = array(
    'name' => 'edit revisions in importovane_u_vr state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Výstupný redaktor' => 'Výstupný redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in importovane_vyradene state'.
  $permissions['edit revisions in importovane_vyradene state'] = array(
    'name' => 'edit revisions in importovane_vyradene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in na_jazykovu_korekturu state'.
  $permissions['edit revisions in na_jazykovu_korekturu state'] = array(
    'name' => 'edit revisions in na_jazykovu_korekturu state',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in na_opakovane_zverejnenie state'.
  $permissions['edit revisions in na_opakovane_zverejnenie state'] = array(
    'name' => 'edit revisions in na_opakovane_zverejnenie state',
    'roles' => array(
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in na_zalomenie state'.
  $permissions['edit revisions in na_zalomenie state'] = array(
    'name' => 'edit revisions in na_zalomenie state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in na_zverejnenie state'.
  $permissions['edit revisions in na_zverejnenie state'] = array(
    'name' => 'edit revisions in na_zverejnenie state',
    'roles' => array(
      'Výstupný redaktor' => 'Výstupný redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in navrhnute_na_vyradenie state'.
  $permissions['edit revisions in navrhnute_na_vyradenie state'] = array(
    'name' => 'edit revisions in navrhnute_na_vyradenie state',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in needs_review state'.
  $permissions['edit revisions in needs_review state'] = array(
    'name' => 'edit revisions in needs_review state',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in nova_ilustracia state'.
  $permissions['edit revisions in nova_ilustracia state'] = array(
    'name' => 'edit revisions in nova_ilustracia state',
    'roles' => array(
      'Grafik' => 'Grafik',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in pozdr_an_ state'.
  $permissions['edit revisions in pozdr_an_ state'] = array(
    'name' => 'edit revisions in pozdr_an_ state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in publikovane_na_webe state'.
  $permissions['edit revisions in publikovane_na_webe state'] = array(
    'name' => 'edit revisions in publikovane_na_webe state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in published state'.
  $permissions['edit revisions in published state'] = array(
    'name' => 'edit revisions in published state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in u_autora state'.
  $permissions['edit revisions in u_autora state'] = array(
    'name' => 'edit revisions in u_autora state',
    'roles' => array(
      'Autor' => 'Autor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in u_konzultanta state'.
  $permissions['edit revisions in u_konzultanta state'] = array(
    'name' => 'edit revisions in u_konzultanta state',
    'roles' => array(
      'Konzultant' => 'Konzultant',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in ukoncenezluene state'.
  $permissions['edit revisions in ukoncenezluene state'] = array(
    'name' => 'edit revisions in ukoncenezluene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in vyradene state'.
  $permissions['edit revisions in vyradene state'] = array(
    'name' => 'edit revisions in vyradene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in zaradene state'.
  $permissions['edit revisions in zaradene state'] = array(
    'name' => 'edit revisions in zaradene state',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in zlucene state'.
  $permissions['edit revisions in zlucene state'] = array(
    'name' => 'edit revisions in zlucene state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in zverejnene_oprava state'.
  $permissions['edit revisions in zverejnene_oprava state'] = array(
    'name' => 'edit revisions in zverejnene_oprava state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in zverejnene_vratene state'.
  $permissions['edit revisions in zverejnene_vratene state'] = array(
    'name' => 'edit revisions in zverejnene_vratene state',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'moderate content from draft to vyradene'.
  $permissions['moderate content from draft to vyradene'] = array(
    'name' => 'moderate content from draft to vyradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to zaradene'.
  $permissions['moderate content from draft to zaradene'] = array(
    'name' => 'moderate content from draft to zaradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ilustracia_u_redaktora to _ilustr_cia_u_autora'.
  $permissions['moderate content from ilustracia_u_redaktora to _ilustr_cia_u_autora'] = array(
    'name' => 'moderate content from ilustracia_u_redaktora to _ilustr_cia_u_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from importovane to importovane_u_jr2'.
  $permissions['moderate content from importovane to importovane_u_jr2'] = array(
    'name' => 'moderate content from importovane to importovane_u_jr2',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from importovane_u_jr2 to importovane'.
  $permissions['moderate content from importovane_u_jr2 to importovane'] = array(
    'name' => 'moderate content from importovane_u_jr2 to importovane',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from importovane_u_jr2 to importovane_u_vr'.
  $permissions['moderate content from importovane_u_jr2 to importovane_u_vr'] = array(
    'name' => 'moderate content from importovane_u_jr2 to importovane_u_vr',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from importovane_u_vr to importovane'.
  $permissions['moderate content from importovane_u_vr to importovane'] = array(
    'name' => 'moderate content from importovane_u_vr to importovane',
    'roles' => array(
      'Výstupný redaktor' => 'Výstupný redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from na_zverejnenie to needs_review'.
  $permissions['moderate content from na_zverejnenie to needs_review'] = array(
    'name' => 'moderate content from na_zverejnenie to needs_review',
    'roles' => array(
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from navrhnute_na_vyradenie to vyradene'.
  $permissions['moderate content from navrhnute_na_vyradenie to vyradene'] = array(
    'name' => 'moderate content from navrhnute_na_vyradenie to vyradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from navrhnute_na_vyradenie to zaradene'.
  $permissions['moderate content from navrhnute_na_vyradenie to zaradene'] = array(
    'name' => 'moderate content from navrhnute_na_vyradenie to zaradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to na_zverejnenie'.
  $permissions['moderate content from needs_review to na_zverejnenie'] = array(
    'name' => 'moderate content from needs_review to na_zverejnenie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to u_autora'.
  $permissions['moderate content from needs_review to u_autora'] = array(
    'name' => 'moderate content from needs_review to u_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to u_konzultanta'.
  $permissions['moderate content from needs_review to u_konzultanta'] = array(
    'name' => 'moderate content from needs_review to u_konzultanta',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from nova_ilustracia to _ilustr_cia_u_autora'.
  $permissions['moderate content from nova_ilustracia to _ilustr_cia_u_autora'] = array(
    'name' => 'moderate content from nova_ilustracia to _ilustr_cia_u_autora',
    'roles' => array(
      'Autor' => 'Autor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from nova_ilustracia to ilustracia_u_redaktora'.
  $permissions['moderate content from nova_ilustracia to ilustracia_u_redaktora'] = array(
    'name' => 'moderate content from nova_ilustracia to ilustracia_u_redaktora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from publikovane_na_webe to zverejnene_oprava'.
  $permissions['moderate content from publikovane_na_webe to zverejnene_oprava'] = array(
    'name' => 'moderate content from publikovane_na_webe to zverejnene_oprava',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from publikovane_na_webe to zverejnene_vratene'.
  $permissions['moderate content from publikovane_na_webe to zverejnene_vratene'] = array(
    'name' => 'moderate content from publikovane_na_webe to zverejnene_vratene',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_autora to needs_review'.
  $permissions['moderate content from u_autora to needs_review'] = array(
    'name' => 'moderate content from u_autora to needs_review',
    'roles' => array(
      'Autor' => 'Autor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_konzultanta to needs_review'.
  $permissions['moderate content from u_konzultanta to needs_review'] = array(
    'name' => 'moderate content from u_konzultanta to needs_review',
    'roles' => array(
      'Konzultant' => 'Konzultant',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from vyradene to zaradene'.
  $permissions['moderate content from vyradene to zaradene'] = array(
    'name' => 'moderate content from vyradene to zaradene',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to draft'.
  $permissions['moderate content from zaradene to draft'] = array(
    'name' => 'moderate content from zaradene to draft',
    'roles' => array(
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to navrhnute_na_vyradenie'.
  $permissions['moderate content from zaradene to navrhnute_na_vyradenie'] = array(
    'name' => 'moderate content from zaradene to navrhnute_na_vyradenie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to needs_review'.
  $permissions['moderate content from zaradene to needs_review'] = array(
    'name' => 'moderate content from zaradene to needs_review',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to u_autora'.
  $permissions['moderate content from zaradene to u_autora'] = array(
    'name' => 'moderate content from zaradene to u_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to vyradene'.
  $permissions['moderate content from zaradene to vyradene'] = array(
    'name' => 'moderate content from zaradene to vyradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zverejnene_oprava to na_opakovane_zverejnenie'.
  $permissions['moderate content from zverejnene_oprava to na_opakovane_zverejnenie'] = array(
    'name' => 'moderate content from zverejnene_oprava to na_opakovane_zverejnenie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zverejnene_oprava to zverejnene_vratene'.
  $permissions['moderate content from zverejnene_oprava to zverejnene_vratene'] = array(
    'name' => 'moderate content from zverejnene_oprava to zverejnene_vratene',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zverejnene_vratene to na_opakovane_zverejnenie'.
  $permissions['moderate content from zverejnene_vratene to na_opakovane_zverejnenie'] = array(
    'name' => 'moderate content from zverejnene_vratene to na_opakovane_zverejnenie',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zverejnene_vratene to zverejnene_oprava'.
  $permissions['moderate content from zverejnene_vratene to zverejnene_oprava'] = array(
    'name' => 'moderate content from zverejnene_vratene to zverejnene_oprava',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view revisions in any state'.
  $permissions['view revisions in any state'] = array(
    'name' => 'view revisions in any state',
    'roles' => array(
      'Etymologický redaktor' => 'Etymologický redaktor',
      'Grafik' => 'Grafik',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'guest' => 'guest',
      'useradmin' => 'useradmin',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'view workbench access information'.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'view workbench taxonomy pages'.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}
