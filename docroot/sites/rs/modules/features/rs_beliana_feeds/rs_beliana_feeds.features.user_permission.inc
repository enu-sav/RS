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

  // Exported permission: 'clear bb feeds'.
  $permissions['clear bb feeds'] = array(
    'name' => 'clear bb feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear beliana_importovanie_gh feeds'.
  $permissions['clear beliana_importovanie_gh feeds'] = array(
    'name' => 'clear beliana_importovanie_gh feeds',
    'roles' => array(),
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
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear reimport_exp_il feeds'.
  $permissions['clear reimport_exp_il feeds'] = array(
    'name' => 'clear reimport_exp_il feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear reimport_gh feeds'.
  $permissions['clear reimport_gh feeds'] = array(
    'name' => 'clear reimport_gh feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear taxoimport feeds'.
  $permissions['clear taxoimport feeds'] = array(
    'name' => 'clear taxoimport feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import bb feeds'.
  $permissions['import bb feeds'] = array(
    'name' => 'import bb feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import beliana_importovanie_gh feeds'.
  $permissions['import beliana_importovanie_gh feeds'] = array(
    'name' => 'import beliana_importovanie_gh feeds',
    'roles' => array(),
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
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import reimport_exp_il feeds'.
  $permissions['import reimport_exp_il feeds'] = array(
    'name' => 'import reimport_exp_il feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import reimport_gh feeds'.
  $permissions['import reimport_gh feeds'] = array(
    'name' => 'import reimport_gh feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import taxoimport feeds'.
  $permissions['import taxoimport feeds'] = array(
    'name' => 'import taxoimport feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper bb'.
  $permissions['tamper bb'] = array(
    'name' => 'tamper bb',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper beliana_importovanie_gh'.
  $permissions['tamper beliana_importovanie_gh'] = array(
    'name' => 'tamper beliana_importovanie_gh',
    'roles' => array(),
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
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper reimport_exp_il'.
  $permissions['tamper reimport_exp_il'] = array(
    'name' => 'tamper reimport_exp_il',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper reimport_gh'.
  $permissions['tamper reimport_gh'] = array(
    'name' => 'tamper reimport_gh',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper taxoimport'.
  $permissions['tamper taxoimport'] = array(
    'name' => 'tamper taxoimport',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock bb feeds'.
  $permissions['unlock bb feeds'] = array(
    'name' => 'unlock bb feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock beliana_importovanie_gh feeds'.
  $permissions['unlock beliana_importovanie_gh feeds'] = array(
    'name' => 'unlock beliana_importovanie_gh feeds',
    'roles' => array(),
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
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock reimport_exp_il feeds'.
  $permissions['unlock reimport_exp_il feeds'] = array(
    'name' => 'unlock reimport_exp_il feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock reimport_gh feeds'.
  $permissions['unlock reimport_gh feeds'] = array(
    'name' => 'unlock reimport_gh feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock taxoimport feeds'.
  $permissions['unlock taxoimport feeds'] = array(
    'name' => 'unlock taxoimport feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
