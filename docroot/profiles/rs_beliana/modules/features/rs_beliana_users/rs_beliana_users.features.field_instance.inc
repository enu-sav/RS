<?php
/**
 * @file
 * rs_beliana_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rs_beliana_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_autorska_zmluva'.
  $field_instances['user-user-field_autorska_zmluva'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vložte číslo autorskej zmluvy autora. U ostatných používateľov nechajte prázdne.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_autorska_zmluva',
    'label' => 'Autorská zmluva',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'user-user-field_meno'.
  $field_instances['user-user-field_meno'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_meno',
    'label' => 'Meno',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'user-user-field_priezvisko'.
  $field_instances['user-user-field_priezvisko'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_priezvisko',
    'label' => 'Priezvisko',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Autorská zmluva');
  t('Meno');
  t('Priezvisko');
  t('Vložte číslo autorskej zmluvy autora. U ostatných používateľov nechajte prázdne.');

  return $field_instances;
}
