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

  // Exported field_instance: 'user-user-field_posobisko'.
  $field_instances['user-user-field_posobisko'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte: oddelenie, inštitúcia, mesto, štát (ak je iný ako Slovensko)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_posobisko',
    'label' => 'Pôsobisko',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 5,
            ),
            'full_html' => array(
              'weight' => 2,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 120,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
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

  // Exported field_instance: 'user-user-field_titul_pred_menom'.
  $field_instances['user-user-field_titul_pred_menom'] = array(
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_titul_pred_menom',
    'label' => 'Titul pred menom',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 5,
            ),
            'full_html' => array(
              'weight' => 2,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
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
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'user-user-field_titul_za_menom'.
  $field_instances['user-user-field_titul_za_menom'] = array(
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_titul_za_menom',
    'label' => 'Titul za menom',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 5,
            ),
            'full_html' => array(
              'weight' => 2,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'user-user-field_zivotopis'.
  $field_instances['user-user-field_zivotopis'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pole vyplnia len autori, ktorí súhlasia s uvádzaním svojho mena pri článkoch zverejnených na webe na stránke beliana.sav.sk. Životopis bude na tejto stránke dostupný a bude doplnený zoznamom autorových hesiel.<br />
Odporúčaný obsah:<br />
<br />
Vzdelanie a zamestnanie<br />
19XX – 19XX Univerzita XXX<br />
19XX – 19XX Univerzita XXX, doktorandské štúdium<br />
19XX – súčasnosť Slovenská akadémia vied, XXX ústav<br />
<br />
Oblasti záujmu<br />
fyzika polovodičov, fyzika tuhých látok<br />
<br />
Vybrané publikácie<br />
(odporúčaný počet: 3)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_zivotopis',
    'label' => 'Stručný životopis',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 5,
            ),
            'full_html' => array(
              'weight' => 2,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Autorská zmluva');
  t('Meno');
  t('Pole vyplnia len autori, ktorí súhlasia s uvádzaním svojho mena pri článkoch zverejnených na webe na stránke beliana.sav.sk. Životopis bude na tejto stránke dostupný a bude doplnený zoznamom autorových hesiel.<br />
Odporúčaný obsah:<br />
<br />
Vzdelanie a zamestnanie<br />
19XX – 19XX Univerzita XXX<br />
19XX – 19XX Univerzita XXX, doktorandské štúdium<br />
19XX – súčasnosť Slovenská akadémia vied, XXX ústav<br />
<br />
Oblasti záujmu<br />
fyzika polovodičov, fyzika tuhých látok<br />
<br />
Vybrané publikácie<br />
(odporúčaný počet: 3)');
  t('Priezvisko');
  t('Pôsobisko');
  t('Stručný životopis');
  t('Titul pred menom');
  t('Titul za menom');
  t('Uveďte: oddelenie, inštitúcia, mesto, štát (ak je iný ako Slovensko)');
  t('Vložte číslo autorskej zmluvy autora. U ostatných používateľov nechajte prázdne.');

  return $field_instances;
}
