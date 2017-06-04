<?php
/**
 * @file
 * rs_beliana_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator dev'.
  $permissions['access environment indicator dev'] = array(
    'name' => 'access environment indicator dev',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator prod'.
  $permissions['access environment indicator prod'] = array(
    'name' => 'access environment indicator prod',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access flood unblock'.
  $permissions['access flood unblock'] = array(
    'name' => 'access flood unblock',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'flood_unblock',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer mathjax'.
  $permissions['administer mathjax'] = array(
    'name' => 'administer mathjax',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'mathjax',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer sharedemail'.
  $permissions['administer sharedemail'] = array(
    'name' => 'administer sharedemail',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'sharedemail',
  );

  // Exported permission: 'administer simplify'.
  $permissions['administer simplify'] = array(
    'name' => 'administer simplify',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench access'.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'assign workbench access'.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'batch update workbench access'.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'block view revisions in 1_korektura state'.
  $permissions['block view revisions in 1_korektura state'] = array(
    'name' => 'block view revisions in 1_korektura state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in 2_korekt_ra state'.
  $permissions['block view revisions in 2_korekt_ra state'] = array(
    'name' => 'block view revisions in 2_korekt_ra state',
    'roles' => array(),
    'module' => 'workbench_state_access',
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

  // Exported permission: 'block view revisions in importovane state'.
  $permissions['block view revisions in importovane state'] = array(
    'name' => 'block view revisions in importovane state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in na_jazykovu_korekturu state'.
  $permissions['block view revisions in na_jazykovu_korekturu state'] = array(
    'name' => 'block view revisions in na_jazykovu_korekturu state',
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

  // Exported permission: 'block view revisions in u_jaz_redaktora_2 state'.
  $permissions['block view revisions in u_jaz_redaktora_2 state'] = array(
    'name' => 'block view revisions in u_jaz_redaktora_2 state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_konzultanta state'.
  $permissions['block view revisions in u_konzultanta state'] = array(
    'name' => 'block view revisions in u_konzultanta state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_v_st_redaktora_5 state'.
  $permissions['block view revisions in u_v_st_redaktora_5 state'] = array(
    'name' => 'block view revisions in u_v_st_redaktora_5 state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_vyst_redaktora_2 state'.
  $permissions['block view revisions in u_vyst_redaktora_2 state'] = array(
    'name' => 'block view revisions in u_vyst_redaktora_2 state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_vyst_redaktora_3 state'.
  $permissions['block view revisions in u_vyst_redaktora_3 state'] = array(
    'name' => 'block view revisions in u_vyst_redaktora_3 state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'block view revisions in u_vyst_redaktora_4 state'.
  $permissions['block view revisions in u_vyst_redaktora_4 state'] = array(
    'name' => 'block view revisions in u_vyst_redaktora_4 state',
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

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear bb feeds'.
  $permissions['clear bb feeds'] = array(
    'name' => 'clear bb feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear beliana_importovanie_gh feeds'.
  $permissions['clear beliana_importovanie_gh feeds'] = array(
    'name' => 'clear beliana_importovanie_gh feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear import_ilustr_cie feeds'.
  $permissions['clear import_ilustr_cie feeds'] = array(
    'name' => 'clear import_ilustr_cie feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear import_pou_vate_ov_beliany feeds'.
  $permissions['clear import_pou_vate_ov_beliany feeds'] = array(
    'name' => 'clear import_pou_vate_ov_beliany feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_atributy'.
  $permissions['create field_atributy'] = array(
    'name' => 'create field_atributy',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_lexikalna_skupina'.
  $permissions['create field_lexikalna_skupina'] = array(
    'name' => 'create field_lexikalna_skupina',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_na_zoradenie'.
  $permissions['create field_na_zoradenie'] = array(
    'name' => 'create field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_povodne_lexikalne_skupiny'.
  $permissions['create field_povodne_lexikalne_skupiny'] = array(
    'name' => 'create field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_spravit_1_korekturu'.
  $permissions['create field_spravit_1_korekturu'] = array(
    'name' => 'create field_spravit_1_korekturu',
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
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_taxsubor'.
  $permissions['create field_taxsubor'] = array(
    'name' => 'create field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_text_z_gh'.
  $permissions['create field_text_z_gh'] = array(
    'name' => 'create field_text_z_gh',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vyplatit'.
  $permissions['create field_vyplatit'] = array(
    'name' => 'create field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zlucene_do'.
  $permissions['create field_zlucene_do'] = array(
    'name' => 'create field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zlucene_z'.
  $permissions['create field_zlucene_z'] = array(
    'name' => 'create field_zlucene_z',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create heslo content'.
  $permissions['create heslo content'] = array(
    'name' => 'create heslo content',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
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
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create importovane_heslo content'.
  $permissions['create importovane_heslo content'] = array(
    'name' => 'create importovane_heslo content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create oznam content'.
  $permissions['create oznam content'] = array(
    'name' => 'create oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create title_field'.
  $permissions['create title_field'] = array(
    'name' => 'create title_field',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any heslo content'.
  $permissions['delete any heslo content'] = array(
    'name' => 'delete any heslo content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ilustracia content'.
  $permissions['delete any ilustracia content'] = array(
    'name' => 'delete any ilustracia content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any importovane_heslo content'.
  $permissions['delete any importovane_heslo content'] = array(
    'name' => 'delete any importovane_heslo content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any oznam content'.
  $permissions['delete any oznam content'] = array(
    'name' => 'delete any oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own heslo content'.
  $permissions['delete own heslo content'] = array(
    'name' => 'delete own heslo content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ilustracia content'.
  $permissions['delete own ilustracia content'] = array(
    'name' => 'delete own ilustracia content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own importovane_heslo content'.
  $permissions['delete own importovane_heslo content'] = array(
    'name' => 'delete own importovane_heslo content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own oznam content'.
  $permissions['delete own oznam content'] = array(
    'name' => 'delete own oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in lexikalne_skupiny'.
  $permissions['delete terms in lexikalne_skupiny'] = array(
    'name' => 'delete terms in lexikalne_skupiny',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subory'.
  $permissions['delete terms in subory'] = array(
    'name' => 'delete terms in subory',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any heslo content'.
  $permissions['edit any heslo content'] = array(
    'name' => 'edit any heslo content',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
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
      'Redaktor' => 'Redaktor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any importovane_heslo content'.
  $permissions['edit any importovane_heslo content'] = array(
    'name' => 'edit any importovane_heslo content',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any oznam content'.
  $permissions['edit any oznam content'] = array(
    'name' => 'edit any oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_atributy'.
  $permissions['edit field_atributy'] = array(
    'name' => 'edit field_atributy',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lexikalna_skupina'.
  $permissions['edit field_lexikalna_skupina'] = array(
    'name' => 'edit field_lexikalna_skupina',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_na_zoradenie'.
  $permissions['edit field_na_zoradenie'] = array(
    'name' => 'edit field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_povodne_lexikalne_skupiny'.
  $permissions['edit field_povodne_lexikalne_skupiny'] = array(
    'name' => 'edit field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_spravit_1_korekturu'.
  $permissions['edit field_spravit_1_korekturu'] = array(
    'name' => 'edit field_spravit_1_korekturu',
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
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_taxsubor'.
  $permissions['edit field_taxsubor'] = array(
    'name' => 'edit field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_text_z_gh'.
  $permissions['edit field_text_z_gh'] = array(
    'name' => 'edit field_text_z_gh',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vyplatit'.
  $permissions['edit field_vyplatit'] = array(
    'name' => 'edit field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zlucene_do'.
  $permissions['edit field_zlucene_do'] = array(
    'name' => 'edit field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zlucene_z'.
  $permissions['edit field_zlucene_z'] = array(
    'name' => 'edit field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own field_atributy'.
  $permissions['edit own field_atributy'] = array(
    'name' => 'edit own field_atributy',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lexikalna_skupina'.
  $permissions['edit own field_lexikalna_skupina'] = array(
    'name' => 'edit own field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_na_zoradenie'.
  $permissions['edit own field_na_zoradenie'] = array(
    'name' => 'edit own field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_povodne_lexikalne_skupiny'.
  $permissions['edit own field_povodne_lexikalne_skupiny'] = array(
    'name' => 'edit own field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_spravit_1_korekturu'.
  $permissions['edit own field_spravit_1_korekturu'] = array(
    'name' => 'edit own field_spravit_1_korekturu',
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
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_taxsubor'.
  $permissions['edit own field_taxsubor'] = array(
    'name' => 'edit own field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_text_z_gh'.
  $permissions['edit own field_text_z_gh'] = array(
    'name' => 'edit own field_text_z_gh',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vyplatit'.
  $permissions['edit own field_vyplatit'] = array(
    'name' => 'edit own field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zlucene_do'.
  $permissions['edit own field_zlucene_do'] = array(
    'name' => 'edit own field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zlucene_z'.
  $permissions['edit own field_zlucene_z'] = array(
    'name' => 'edit own field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own heslo content'.
  $permissions['edit own heslo content'] = array(
    'name' => 'edit own heslo content',
    'roles' => array(
      'Autor' => 'Autor',
    ),
    'module' => 'node',
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
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own importovane_heslo content'.
  $permissions['edit own importovane_heslo content'] = array(
    'name' => 'edit own importovane_heslo content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own oznam content'.
  $permissions['edit own oznam content'] = array(
    'name' => 'edit own oznam content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own title_field'.
  $permissions['edit own title_field'] = array(
    'name' => 'edit own title_field',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit revisions in 1_korektura state'.
  $permissions['edit revisions in 1_korektura state'] = array(
    'name' => 'edit revisions in 1_korektura state',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in 2_korekt_ra state'.
  $permissions['edit revisions in 2_korekt_ra state'] = array(
    'name' => 'edit revisions in 2_korekt_ra state',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_state_access',
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
      'admin' => 'admin',
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

  // Exported permission: 'edit revisions in ilustracia_na_zverejnenie state'.
  $permissions['edit revisions in ilustracia_na_zverejnenie state'] = array(
    'name' => 'edit revisions in ilustracia_na_zverejnenie state',
    'roles' => array(),
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
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in importovane state'.
  $permissions['edit revisions in importovane state'] = array(
    'name' => 'edit revisions in importovane state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
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

  // Exported permission: 'edit revisions in na_zalomenie state'.
  $permissions['edit revisions in na_zalomenie state'] = array(
    'name' => 'edit revisions in na_zalomenie state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in na_zverejnenie state'.
  $permissions['edit revisions in na_zverejnenie state'] = array(
    'name' => 'edit revisions in na_zverejnenie state',
    'roles' => array(
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
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
      'iredaktor' => 'iredaktor',
    ),
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

  // Exported permission: 'edit revisions in u_jaz_redaktora_2 state'.
  $permissions['edit revisions in u_jaz_redaktora_2 state'] = array(
    'name' => 'edit revisions in u_jaz_redaktora_2 state',
    'roles' => array(
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
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

  // Exported permission: 'edit revisions in u_v_st_redaktora_5 state'.
  $permissions['edit revisions in u_v_st_redaktora_5 state'] = array(
    'name' => 'edit revisions in u_v_st_redaktora_5 state',
    'roles' => array(
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in u_vyst_redaktora_2 state'.
  $permissions['edit revisions in u_vyst_redaktora_2 state'] = array(
    'name' => 'edit revisions in u_vyst_redaktora_2 state',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in u_vyst_redaktora_3 state'.
  $permissions['edit revisions in u_vyst_redaktora_3 state'] = array(
    'name' => 'edit revisions in u_vyst_redaktora_3 state',
    'roles' => array(
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in u_vyst_redaktora_4 state'.
  $permissions['edit revisions in u_vyst_redaktora_4 state'] = array(
    'name' => 'edit revisions in u_vyst_redaktora_4 state',
    'roles' => array(
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in zlucene state'.
  $permissions['edit revisions in zlucene state'] = array(
    'name' => 'edit revisions in zlucene state',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit terms in lexikalne_skupiny'.
  $permissions['edit terms in lexikalne_skupiny'] = array(
    'name' => 'edit terms in lexikalne_skupiny',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subory'.
  $permissions['edit terms in subory'] = array(
    'name' => 'edit terms in subory',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit title_field'.
  $permissions['edit title_field'] = array(
    'name' => 'edit title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import bb feeds'.
  $permissions['import bb feeds'] = array(
    'name' => 'import bb feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import beliana_importovanie_gh feeds'.
  $permissions['import beliana_importovanie_gh feeds'] = array(
    'name' => 'import beliana_importovanie_gh feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import import_ilustr_cie feeds'.
  $permissions['import import_ilustr_cie feeds'] = array(
    'name' => 'import import_ilustr_cie feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import import_pou_vate_ov_beliany feeds'.
  $permissions['import import_pou_vate_ov_beliany feeds'] = array(
    'name' => 'import import_pou_vate_ov_beliany feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'moderate content from 1_korektura to u_vyst_redaktora_3'.
  $permissions['moderate content from 1_korektura to u_vyst_redaktora_3'] = array(
    'name' => 'moderate content from 1_korektura to u_vyst_redaktora_3',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from 2_korekt_ra to u_vyst_redaktora_3'.
  $permissions['moderate content from 2_korekt_ra to u_vyst_redaktora_3'] = array(
    'name' => 'moderate content from 2_korekt_ra to u_vyst_redaktora_3',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from _ilustr_cia_u_autora to ilustracia_u_redaktora'.
  $permissions['moderate content from _ilustr_cia_u_autora to ilustracia_u_redaktora'] = array(
    'name' => 'moderate content from _ilustr_cia_u_autora to ilustracia_u_redaktora',
    'roles' => array(
      'Autor' => 'Autor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to vyradene'.
  $permissions['moderate content from draft to vyradene'] = array(
    'name' => 'moderate content from draft to vyradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to zaradene'.
  $permissions['moderate content from draft to zaradene'] = array(
    'name' => 'moderate content from draft to zaradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ilustracia_na_zverejnenie to ilustracia_u_redaktora'.
  $permissions['moderate content from ilustracia_na_zverejnenie to ilustracia_u_redaktora'] = array(
    'name' => 'moderate content from ilustracia_na_zverejnenie to ilustracia_u_redaktora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ilustracia_u_grafika to ilustracia_u_redaktora'.
  $permissions['moderate content from ilustracia_u_grafika to ilustracia_u_redaktora'] = array(
    'name' => 'moderate content from ilustracia_u_grafika to ilustracia_u_redaktora',
    'roles' => array(
      'Grafik' => 'Grafik',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ilustracia_u_redaktora to _ilustr_cia_u_autora'.
  $permissions['moderate content from ilustracia_u_redaktora to _ilustr_cia_u_autora'] = array(
    'name' => 'moderate content from ilustracia_u_redaktora to _ilustr_cia_u_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ilustracia_u_redaktora to ilustracia_na_zverejnenie'.
  $permissions['moderate content from ilustracia_u_redaktora to ilustracia_na_zverejnenie'] = array(
    'name' => 'moderate content from ilustracia_u_redaktora to ilustracia_na_zverejnenie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ilustracia_u_redaktora to ilustracia_u_grafika'.
  $permissions['moderate content from ilustracia_u_redaktora to ilustracia_u_grafika'] = array(
    'name' => 'moderate content from ilustracia_u_redaktora to ilustracia_u_grafika',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from na_jazykovu_korekturu to 1_korektura'.
  $permissions['moderate content from na_jazykovu_korekturu to 1_korektura'] = array(
    'name' => 'moderate content from na_jazykovu_korekturu to 1_korektura',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from na_zalomenie to u_v_st_redaktora_5'.
  $permissions['moderate content from na_zalomenie to u_v_st_redaktora_5'] = array(
    'name' => 'moderate content from na_zalomenie to u_v_st_redaktora_5',
    'roles' => array(
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from na_zverejnenie to needs_review'.
  $permissions['moderate content from na_zverejnenie to needs_review'] = array(
    'name' => 'moderate content from na_zverejnenie to needs_review',
    'roles' => array(
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from na_zverejnenie to u_vyst_redaktora_2'.
  $permissions['moderate content from na_zverejnenie to u_vyst_redaktora_2'] = array(
    'name' => 'moderate content from na_zverejnenie to u_vyst_redaktora_2',
    'roles' => array(
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from navrhnute_na_vyradenie to vyradene'.
  $permissions['moderate content from navrhnute_na_vyradenie to vyradene'] = array(
    'name' => 'moderate content from navrhnute_na_vyradenie to vyradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from navrhnute_na_vyradenie to zaradene'.
  $permissions['moderate content from navrhnute_na_vyradenie to zaradene'] = array(
    'name' => 'moderate content from navrhnute_na_vyradenie to zaradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to na_zverejnenie'.
  $permissions['moderate content from needs_review to na_zverejnenie'] = array(
    'name' => 'moderate content from needs_review to na_zverejnenie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to u_autora'.
  $permissions['moderate content from needs_review to u_autora'] = array(
    'name' => 'moderate content from needs_review to u_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to u_konzultanta'.
  $permissions['moderate content from needs_review to u_konzultanta'] = array(
    'name' => 'moderate content from needs_review to u_konzultanta',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from nova_ilustracia to _ilustr_cia_u_autora'.
  $permissions['moderate content from nova_ilustracia to _ilustr_cia_u_autora'] = array(
    'name' => 'moderate content from nova_ilustracia to _ilustr_cia_u_autora',
    'roles' => array(
      'Autor' => 'Autor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from nova_ilustracia to ilustracia_u_grafika'.
  $permissions['moderate content from nova_ilustracia to ilustracia_u_grafika'] = array(
    'name' => 'moderate content from nova_ilustracia to ilustracia_u_grafika',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from nova_ilustracia to ilustracia_u_redaktora'.
  $permissions['moderate content from nova_ilustracia to ilustracia_u_redaktora'] = array(
    'name' => 'moderate content from nova_ilustracia to ilustracia_u_redaktora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_autora to needs_review'.
  $permissions['moderate content from u_autora to needs_review'] = array(
    'name' => 'moderate content from u_autora to needs_review',
    'roles' => array(
      'Autor' => 'Autor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_jaz_redaktora_2 to u_v_st_redaktora_5'.
  $permissions['moderate content from u_jaz_redaktora_2 to u_v_st_redaktora_5'] = array(
    'name' => 'moderate content from u_jaz_redaktora_2 to u_v_st_redaktora_5',
    'roles' => array(
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_konzultanta to needs_review'.
  $permissions['moderate content from u_konzultanta to needs_review'] = array(
    'name' => 'moderate content from u_konzultanta to needs_review',
    'roles' => array(
      'Konzultant' => 'Konzultant',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_v_st_redaktora_5 to na_zalomenie'.
  $permissions['moderate content from u_v_st_redaktora_5 to na_zalomenie'] = array(
    'name' => 'moderate content from u_v_st_redaktora_5 to na_zalomenie',
    'roles' => array(
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_2 to na_jazykovu_korekturu'.
  $permissions['moderate content from u_vyst_redaktora_2 to na_jazykovu_korekturu'] = array(
    'name' => 'moderate content from u_vyst_redaktora_2 to na_jazykovu_korekturu',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_2 to na_zverejnenie'.
  $permissions['moderate content from u_vyst_redaktora_2 to na_zverejnenie'] = array(
    'name' => 'moderate content from u_vyst_redaktora_2 to na_zverejnenie',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_2 to ukoncenezluene'.
  $permissions['moderate content from u_vyst_redaktora_2 to ukoncenezluene'] = array(
    'name' => 'moderate content from u_vyst_redaktora_2 to ukoncenezluene',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_3 to 2_korekt_ra'.
  $permissions['moderate content from u_vyst_redaktora_3 to 2_korekt_ra'] = array(
    'name' => 'moderate content from u_vyst_redaktora_3 to 2_korekt_ra',
    'roles' => array(
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_3 to u_jaz_redaktora_2'.
  $permissions['moderate content from u_vyst_redaktora_3 to u_jaz_redaktora_2'] = array(
    'name' => 'moderate content from u_vyst_redaktora_3 to u_jaz_redaktora_2',
    'roles' => array(
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_3 to u_vyst_redaktora_4'.
  $permissions['moderate content from u_vyst_redaktora_3 to u_vyst_redaktora_4'] = array(
    'name' => 'moderate content from u_vyst_redaktora_3 to u_vyst_redaktora_4',
    'roles' => array(
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from u_vyst_redaktora_4 to u_vyst_redaktora_3'.
  $permissions['moderate content from u_vyst_redaktora_4 to u_vyst_redaktora_3'] = array(
    'name' => 'moderate content from u_vyst_redaktora_4 to u_vyst_redaktora_3',
    'roles' => array(
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from vyradene to zaradene'.
  $permissions['moderate content from vyradene to zaradene'] = array(
    'name' => 'moderate content from vyradene to zaradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to draft'.
  $permissions['moderate content from zaradene to draft'] = array(
    'name' => 'moderate content from zaradene to draft',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to navrhnute_na_vyradenie'.
  $permissions['moderate content from zaradene to navrhnute_na_vyradenie'] = array(
    'name' => 'moderate content from zaradene to navrhnute_na_vyradenie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to needs_review'.
  $permissions['moderate content from zaradene to needs_review'] = array(
    'name' => 'moderate content from zaradene to needs_review',
    'roles' => array(
      'Redaktor' => 'Redaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to u_autora'.
  $permissions['moderate content from zaradene to u_autora'] = array(
    'name' => 'moderate content from zaradene to u_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zaradene to vyradene'.
  $permissions['moderate content from zaradene to vyradene'] = array(
    'name' => 'moderate content from zaradene to vyradene',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from zlucene to na_jazykovu_korekturu'.
  $permissions['moderate content from zlucene to na_jazykovu_korekturu'] = array(
    'name' => 'moderate content from zlucene to na_jazykovu_korekturu',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
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

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'features',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'show warning text'.
  $permissions['show warning text'] = array(
    'name' => 'show warning text',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'sharedemail',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'tamper bb'.
  $permissions['tamper bb'] = array(
    'name' => 'tamper bb',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper beliana_importovanie_gh'.
  $permissions['tamper beliana_importovanie_gh'] = array(
    'name' => 'tamper beliana_importovanie_gh',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper import_ilustr_cie'.
  $permissions['tamper import_ilustr_cie'] = array(
    'name' => 'tamper import_ilustr_cie',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper import_pou_vate_ov_beliany'.
  $permissions['tamper import_pou_vate_ov_beliany'] = array(
    'name' => 'tamper import_pou_vate_ov_beliany',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'unlock bb feeds'.
  $permissions['unlock bb feeds'] = array(
    'name' => 'unlock bb feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock beliana_importovanie_gh feeds'.
  $permissions['unlock beliana_importovanie_gh feeds'] = array(
    'name' => 'unlock beliana_importovanie_gh feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock import_ilustr_cie feeds'.
  $permissions['unlock import_ilustr_cie feeds'] = array(
    'name' => 'unlock import_ilustr_cie feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock import_pou_vate_ov_beliany feeds'.
  $permissions['unlock import_pou_vate_ov_beliany feeds'] = array(
    'name' => 'unlock import_pou_vate_ov_beliany feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any unpublished article content'.
  $permissions['view any unpublished article content'] = array(
    'name' => 'view any unpublished article content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished heslo content'.
  $permissions['view any unpublished heslo content'] = array(
    'name' => 'view any unpublished heslo content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished ilustracia content'.
  $permissions['view any unpublished ilustracia content'] = array(
    'name' => 'view any unpublished ilustracia content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished importovane_heslo content'.
  $permissions['view any unpublished importovane_heslo content'] = array(
    'name' => 'view any unpublished importovane_heslo content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished oznam content'.
  $permissions['view any unpublished oznam content'] = array(
    'name' => 'view any unpublished oznam content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished page content'.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_atributy'.
  $permissions['view field_atributy'] = array(
    'name' => 'view field_atributy',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_lexikalna_skupina'.
  $permissions['view field_lexikalna_skupina'] = array(
    'name' => 'view field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_na_zoradenie'.
  $permissions['view field_na_zoradenie'] = array(
    'name' => 'view field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_povodne_lexikalne_skupiny'.
  $permissions['view field_povodne_lexikalne_skupiny'] = array(
    'name' => 'view field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_spravit_1_korekturu'.
  $permissions['view field_spravit_1_korekturu'] = array(
    'name' => 'view field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_subor_ilustracie'.
  $permissions['view field_subor_ilustracie'] = array(
    'name' => 'view field_subor_ilustracie',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_taxsubor'.
  $permissions['view field_taxsubor'] = array(
    'name' => 'view field_taxsubor',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_text_z_gh'.
  $permissions['view field_text_z_gh'] = array(
    'name' => 'view field_text_z_gh',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vyplatit'.
  $permissions['view field_vyplatit'] = array(
    'name' => 'view field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zlucene_do'.
  $permissions['view field_zlucene_do'] = array(
    'name' => 'view field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zlucene_z'.
  $permissions['view field_zlucene_z'] = array(
    'name' => 'view field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view hidden fields'.
  $permissions['view hidden fields'] = array(
    'name' => 'view hidden fields',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'simplify',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own field_atributy'.
  $permissions['view own field_atributy'] = array(
    'name' => 'view own field_atributy',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_lexikalna_skupina'.
  $permissions['view own field_lexikalna_skupina'] = array(
    'name' => 'view own field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_na_zoradenie'.
  $permissions['view own field_na_zoradenie'] = array(
    'name' => 'view own field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_povodne_lexikalne_skupiny'.
  $permissions['view own field_povodne_lexikalne_skupiny'] = array(
    'name' => 'view own field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_spravit_1_korekturu'.
  $permissions['view own field_spravit_1_korekturu'] = array(
    'name' => 'view own field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_subor_ilustracie'.
  $permissions['view own field_subor_ilustracie'] = array(
    'name' => 'view own field_subor_ilustracie',
    'roles' => array(
      'Grafik' => 'Grafik',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'chRedaktor' => 'chRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_taxsubor'.
  $permissions['view own field_taxsubor'] = array(
    'name' => 'view own field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_text_z_gh'.
  $permissions['view own field_text_z_gh'] = array(
    'name' => 'view own field_text_z_gh',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vyplatit'.
  $permissions['view own field_vyplatit'] = array(
    'name' => 'view own field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zlucene_do'.
  $permissions['view own field_zlucene_do'] = array(
    'name' => 'view own field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zlucene_z'.
  $permissions['view own field_zlucene_z'] = array(
    'name' => 'view own field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own title_field'.
  $permissions['view own title_field'] = array(
    'name' => 'view own title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Autor' => 'Autor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions in any state'.
  $permissions['view revisions in any state'] = array(
    'name' => 'view revisions in any state',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view title_field'.
  $permissions['view title_field'] = array(
    'name' => 'view title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'admin' => 'admin',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'view workbench taxonomy pages'.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      'admin' => 'admin',
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
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
