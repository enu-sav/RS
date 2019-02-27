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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
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
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
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

  // Exported permission: 'block view revisions in published state'.
  $permissions['block view revisions in published state'] = array(
    'name' => 'block view revisions in published state',
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

  // Exported permission: 'edit revisions in any state'.
  $permissions['edit revisions in any state'] = array(
    'name' => 'edit revisions in any state',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'edit revisions in published state'.
  $permissions['edit revisions in published state'] = array(
    'name' => 'edit revisions in published state',
    'roles' => array(),
    'module' => 'workbench_state_access',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
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
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
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
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'workbench_moderation',
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
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
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
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}
