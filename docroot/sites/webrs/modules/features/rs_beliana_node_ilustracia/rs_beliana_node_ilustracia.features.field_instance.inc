<?php
/**
 * @file
 * rs_beliana_node_ilustracia.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rs_beliana_node_ilustracia_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_ilustracia-comment_body'.
  $field_instances['comment-comment_node_ilustracia-comment_body'] = array(
    'bundle' => 'comment_node_ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-ilustracia-field_alternativny_text'.
  $field_instances['node-ilustracia-field_alternativny_text'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternatívny text k ilustrácii určený pre nevidiacich. Netreba vypĺňať, ak text k ilustrácii má menej ako 125 znakov a neobsahuje formátovanie (napr. matematické rovnice).',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_alternativny_text',
    'label' => 'Alternatívny text',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 125,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_datum_prebratia'.
  $field_instances['node-ilustracia-field_datum_prebratia'] = array(
    'bundle' => 'ilustracia',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_prebratia',
    'label' => 'Dátum prebratia obsahu',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'Y/m/d - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 30,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_datum_zverejnenia'.
  $field_instances['node-ilustracia-field_datum_zverejnenia'] = array(
    'bundle' => 'ilustracia',
    'deleted' => 0,
    'description' => 'Dátum zverejnenia ilustrácie na webe alebo v knihe. Dopĺňané programovo, slúži na vyplácanie odmeny',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_zverejnenia',
    'label' => 'Dátum zverejnenia',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'Y/m/d - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 28,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_drzitel_prav'.
  $field_instances['node-ilustracia-field_drzitel_prav'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte, kto je držiteľom práv licencovaného diela (informácia môže byť dostupná v príslušnej zmluve o použití). Držiteľ práv bude uvedený v oznámení o licencii (© autor)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_drzitel_prav',
    'label' => 'Držiteľ práv',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_freemap_url'.
  $field_instances['node-ilustracia-field_freemap_url'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 22,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_freemap_url',
    'label' => 'Freemap url',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_institucia'.
  $field_instances['node-ilustracia-field_institucia'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte názov inštitúcie, ktorá poskytla licenciu na použitie diela, meno múzea, kde sa dielo nachádza alebo názov inštitúcie, z ktorej stránky bolo (CC alebo public domain) dielo prevzaté. Príklad: Met Museum, NASA (nie Flickr, Pixabay a pod)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 10,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 11,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_institucia',
    'label' => 'Inštitúcia',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_komentar_instrukcie'.
  $field_instances['node-ilustracia-field_komentar_instrukcie'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text určený pre autora, redaktora alebo grafika. Ak už v poli text je, nový text pridajte na začiatok.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 16,
      ),
      'export' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 17,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_komentar_instrukcie',
    'label' => 'Komentár/inštrukcie',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_lexikalna_skupina_il'.
  $field_instances['node-ilustracia-field_lexikalna_skupina_il'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte rovnakú lexikálnu skupinu, akú má zodpovedajúce heslo.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lexikalna_skupina_il',
    'label' => 'Lexikálna skupina',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 1,
  );

  // Exported field_instance: 'node-ilustracia-field_licencia1'.
  $field_instances['node-ilustracia-field_licencia1'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte konkrétnu verziu CC licencie alebo zvoľte "Iná verejná licencia"',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_licencia1',
    'label' => 'Typ CC licencie',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_mapa_obrazok_fid'.
  $field_instances['node-ilustracia-field_mapa_obrazok_fid'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mapa_obrazok_fid',
    'label' => 'Mapa - Obrazok fid',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_meno_autora_diela'.
  $field_instances['node-ilustracia-field_meno_autora_diela'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte meno autora (maliara, fotografa, architekta) diela alebo uveďte <em>Neznámy autor</em>. Ak autor diela nie je dôležitý, nechajte prázdne. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meno_autora_diela',
    'label' => 'Meno autora diela',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_meno_autora_snimky_diela'.
  $field_instances['node-ilustracia-field_meno_autora_snimky_diela'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte meno autora fotografickej snímky trojrozmerného diela (objekt, socha, stavba). ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meno_autora_snimky_diela',
    'label' => 'Meno autora snímky',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_modifikovane'.
  $field_instances['node-ilustracia-field_modifikovane'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zaškrtnite, ak boli originál obrázka upravený (orezanie, zmena kontrastu, ...). V prípade licencií CC s atribútom No Derivates (ND, bez odvodeného obsahu) dielo nemožno modifikovať.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_modifikovane',
    'label' => 'Modifikované',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_na_zoradenie'.
  $field_instances['node-ilustracia-field_na_zoradenie'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_na_zoradenie',
    'label' => 'Na zoradenie',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_nazov_diela'.
  $field_instances['node-ilustracia-field_nazov_diela'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte názov diela. Ak názov nie je podstatný, pole nechajte prázdne.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 9,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 10,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nazov_diela',
    'label' => 'Názov diela',
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_obrazok_navrh_'.
  $field_instances['node-ilustracia-field_obrazok_navrh_'] = array(
    'bundle' => 'ilustracia',
    'deleted' => 0,
    'description' => 'Autor alebo redaktor sem vloží návrh obrázka. V prípade potreby ho výtvarný redaktor upraví alebo prekreslí a obrázok vymení.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'export' => array(
        'label' => 'inline',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_obrazok_navrh_',
    'label' => 'Obrázok (návrh/náhľad)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'ilustracia/navrh',
      'file_extensions' => 'png jpg jpeg gif pdf',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_obrazok_odkaz'.
  $field_instances['node-ilustracia-field_obrazok_odkaz'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Alternatíva k poľu Obrázok (návrh/náhľad)</strong>: Autor alebo redaktor vloží odkaz na súbor obrázka na internetovej stránke. Ak sa toto pole vyplní, vyplniť treba aj pole <em>URL stránky s obrázkom a údajmi k dielu</em>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'beliana',
        'settings' => array(
          'link' => 0,
          'size' => 'large',
        ),
        'type' => 'beliana_external_image',
        'weight' => 3,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'beliana',
        'settings' => array(
          'link' => 0,
          'size' => 'large',
        ),
        'type' => 'beliana_external_image',
        'weight' => 3,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_obrazok_odkaz',
    'label' => 'Obrázok - odkaz (návrh/náhľad)',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 120,
      ),
      'type' => 'url_external',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_odmena'.
  $field_instances['node-ilustracia-field_odmena'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_odmena',
    'label' => 'Odmena',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 27,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_original'.
  $field_instances['node-ilustracia-field_original'] = array(
    'bundle' => 'ilustracia',
    'deleted' => 0,
    'description' => 'Vložte originál rastrového obrázka (jpg, tif), <b>ak sa líši</b> od obrázka, ktorý bol vložený do poľa <i>Súbory ilustrácie</i>, napr. ak má väčšie rozlíšenie, nie je orezaný a pod.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 19,
      ),
      'export' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 21,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_original',
    'label' => 'Originál rastrového obrázka',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'ilustracia/original',
      'file_extensions' => 'jpg jpeg tif',
      'max_filesize' => '30 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_popis'.
  $field_instances['node-ilustracia-field_popis'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte text do popisu ilustrácie ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'export' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_popis',
    'label' => 'Text k ilustrácii',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_popis_modifikacie'.
  $field_instances['node-ilustracia-field_popis_modifikacie'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Stručne uveďte popis úpravy, napr, "upravený kontrast", "odstránené nežiaduce objekty" a podobne',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_popis_modifikacie',
    'label' => 'Popis modifikácie',
    'required' => 1,
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_pouzit'.
  $field_instances['node-ilustracia-field_pouzit'] = array(
    'bundle' => 'ilustracia',
    'default_value' => array(
      0 => array(
        'value' => 'Zobrazit_na_webe',
      ),
      1 => array(
        'value' => 'Zaradit_do_tlace',
      ),
    ),
    'deleted' => 0,
    'description' => 'Zvoľte, kde má byť obrázok použitý. "Zobraziť na webe" možno zvoliť len vtedy, ak to licenčné podmienky diela umožňujú: <br />- Ak je v poli "Typ ilustrácie" uvedené "Vlastná ilustrácia EnÚ", "Voľné dielo", "Creative Commons" alebo "Logo, erb, zástava", alebo ak je ilustrácia vložená pomocou poľa "Obrázok - odkaz (návrh/náhľad)", tak dielo možno zobraziť na webe. <br />- V prípadoch "Autorské dielo" a "Muzeálny objekt" záleží na zmluve EnÚ s príslušnou inštitúciou. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'export' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pouzit',
    'label' => 'Použiť',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_remote_id'.
  $field_instances['node-ilustracia-field_remote_id'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_remote_id',
    'label' => 'Remote ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_subor_ilustracie'.
  $field_instances['node-ilustracia-field_subor_ilustracie'] = array(
    'bundle' => 'ilustracia',
    'deleted' => 0,
    'description' => '<b>Vložte súbory obrázka určeného na zverejnenie.</b> Rastrový obrázok treba vložiť vo formáte <b>jpg</b> (v rozlíšení pre web — cca 1500 x 1500 pixelov. Originál s väčším rozlíšením – ak je k dispozícii – vložte do poľa <i>Originál obrázka</i>).
Pokiaľ ide o vektorový obrázok, tak treba vložiť <b>svg</b> (pre webovú verziu) a <b>eps</b> (pre tlačenú verziu). Okrem toho treba vložiť aj zdrojové súbory, napr. <b>cdr</b>, <b>odg</b>, <b>cdx</b>, <b>asy</b> alebo podobne (podľa aplikácie, v ktorej bol vektorový obrázok vytvorený).
Nevkladať dva jpg obrázky alebo spolu jpg a png.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 20,
      ),
      'export' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 6,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subor_ilustracie',
    'label' => 'Súbory ilustrácie',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'ilustracia/na_zverejnenie',
      'file_extensions' => 'jpg cdr eps svg png odg cdx tif jpeg tex asy dia gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_taxsubor'.
  $field_instances['node-ilustracia-field_taxsubor'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_taxsubor',
    'label' => 'Súbor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_url_autora_diela_l'.
  $field_instances['node-ilustracia-field_url_autora_diela_l'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte URL autora alebo inštitúcie, z ktorej stránky bolo dielo prevzaté. Príklady: stránka múzea (https://www.metmuseum.org/), inštitúcie (https://www.nasa.gov/), album autora na flckr a pod.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 13,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 14,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url_autora_diela_l',
    'label' => 'URL autora diela alebo inštitúcie',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'convert_aliases' => 0,
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 24,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_url_diela_l'.
  $field_instances['node-ilustracia-field_url_diela_l'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte odkaz (URL) na stránku, odkiaľ bolo dielo prevzaté. Na stránke sú okrem obrázka aj podrobnejšie údaje.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 14,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 15,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url_diela_l',
    'label' => 'URL stránky s obrázkom a údajmi k dielu',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'convert_aliases' => 0,
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 25,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_url_textu_licencie_l'.
  $field_instances['node-ilustracia-field_url_textu_licencie_l'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pokiaľ je zvolená hodnota "Iná verejná licencia" v poli "Typ CC licencie", veďte odkaz na text licencie, ktorá bola použitá na stránke diela.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'custom_title' => '',
        ),
        'type' => 'link_default',
        'weight' => 13,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url_textu_licencie_l',
    'label' => 'URL textu licencie',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'convert_aliases' => 0,
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-field_zdroj_ilustracie'.
  $field_instances['node-ilustracia-field_zdroj_ilustracie'] = array(
    'bundle' => 'ilustracia',
    'default_value' => array(
      0 => array(
        'value' => 'Zatiaľ neurčený',
      ),
    ),
    'deleted' => 0,
    'description' => 'Ak ide o trojrozmerné dielo (socha, objekt, stavba), ktoré je dostupné na verejnom priestranstve (socha v parku, budova v meste a pod.), tak voľba typu ilustrácie súvisí s fotografickou snímkou diela, nie dielom samotným. <br />
"Muzeálny objekt": trojrozmerné dielo (socha, objekt) umiestnené v múzeu, galérii, chráme a podobne. <br />
"Vlastná ilustrácia EnÚ": ilustrácia, ktorú vytvoril zamestnanec EnÚ alebo bola vytvorená na objednávku EnÚ <br />
Ak je zaškrtnuté "Creative Commons alebo iná verejná licencia", treba vyplniť aj polia "Typ CC licencie" a ďalšie súvisiace polia (najmä "URL diela", "Meno autora (snímky) diela", "URL autora diela alebo inštitúcie")
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zdroj_ilustracie',
    'label' => 'Typ ilustrácie',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-ilustracia-title_field'.
  $field_instances['node-ilustracia-title_field'] = array(
    'bundle' => 'ilustracia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte rovnaký názov, ako je názov zodpovedajúceho hesla. Môžete pridať aj ďalší text, napr. "Ilustrácia1" a podobne.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'export' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Názov',
    'required' => 1,
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
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>Vložte súbory obrázka určeného na zverejnenie.</b> Rastrový obrázok treba vložiť vo formáte <b>jpg</b> (v rozlíšení pre web — cca 1500 x 1500 pixelov. Originál s väčším rozlíšením – ak je k dispozícii – vložte do poľa <i>Originál obrázka</i>).
Pokiaľ ide o vektorový obrázok, tak treba vložiť <b>svg</b> (pre webovú verziu) a <b>eps</b> (pre tlačenú verziu). Okrem toho treba vložiť aj zdrojové súbory, napr. <b>cdr</b>, <b>odg</b>, <b>cdx</b>, <b>asy</b> alebo podobne (podľa aplikácie, v ktorej bol vektorový obrázok vytvorený).
Nevkladať dva jpg obrázky alebo spolu jpg a png.');
  t('<strong>Alternatíva k poľu Obrázok (návrh/náhľad)</strong>: Autor alebo redaktor vloží odkaz na súbor obrázka na internetovej stránke. Ak sa toto pole vyplní, vyplniť treba aj pole <em>URL stránky s obrázkom a údajmi k dielu</em>');
  t('Ak ide o trojrozmerné dielo (socha, objekt, stavba), ktoré je dostupné na verejnom priestranstve (socha v parku, budova v meste a pod.), tak voľba typu ilustrácie súvisí s fotografickou snímkou diela, nie dielom samotným. <br />
"Muzeálny objekt": trojrozmerné dielo (socha, objekt) umiestnené v múzeu, galérii, chráme a podobne. <br />
"Vlastná ilustrácia EnÚ": ilustrácia, ktorú vytvoril zamestnanec EnÚ alebo bola vytvorená na objednávku EnÚ <br />
Ak je zaškrtnuté "Creative Commons alebo iná verejná licencia", treba vyplniť aj polia "Typ CC licencie" a ďalšie súvisiace polia (najmä "URL diela", "Meno autora (snímky) diela", "URL autora diela alebo inštitúcie")
');
  t('Alternatívny text');
  t('Alternatívny text k ilustrácii určený pre nevidiacich. Netreba vypĺňať, ak text k ilustrácii má menej ako 125 znakov a neobsahuje formátovanie (napr. matematické rovnice).');
  t('Autor alebo redaktor sem vloží návrh obrázka. V prípade potreby ho výtvarný redaktor upraví alebo prekreslí a obrázok vymení.');
  t('Comment');
  t('Držiteľ práv');
  t('Dátum prebratia obsahu');
  t('Dátum zverejnenia');
  t('Dátum zverejnenia ilustrácie na webe alebo v knihe. Dopĺňané programovo, slúži na vyplácanie odmeny');
  t('Freemap url');
  t('Inštitúcia');
  t('Komentár/inštrukcie');
  t('Lexikálna skupina');
  t('Mapa - Obrazok fid');
  t('Meno autora diela');
  t('Meno autora snímky');
  t('Modifikované');
  t('Na zoradenie');
  t('Názov');
  t('Názov diela');
  t('Obrázok (návrh/náhľad)');
  t('Obrázok - odkaz (návrh/náhľad)');
  t('Odmena');
  t('Originál rastrového obrázka');
  t('Pokiaľ je zvolená hodnota "Iná verejná licencia" v poli "Typ CC licencie", veďte odkaz na text licencie, ktorá bola použitá na stránke diela.');
  t('Popis modifikácie');
  t('Použiť');
  t('Remote ID');
  t('Stručne uveďte popis úpravy, napr, "upravený kontrast", "odstránené nežiaduce objekty" a podobne');
  t('Súbor');
  t('Súbory ilustrácie');
  t('Text k ilustrácii');
  t('Text určený pre autora, redaktora alebo grafika. Ak už v poli text je, nový text pridajte na začiatok.');
  t('Typ CC licencie');
  t('Typ ilustrácie');
  t('URL autora diela alebo inštitúcie');
  t('URL stránky s obrázkom a údajmi k dielu');
  t('URL textu licencie');
  t('Uveďte URL autora alebo inštitúcie, z ktorej stránky bolo dielo prevzaté. Príklady: stránka múzea (https://www.metmuseum.org/), inštitúcie (https://www.nasa.gov/), album autora na flckr a pod.');
  t('Uveďte konkrétnu verziu CC licencie alebo zvoľte "Iná verejná licencia"');
  t('Uveďte meno autora (maliara, fotografa, architekta) diela alebo uveďte <em>Neznámy autor</em>. Ak autor diela nie je dôležitý, nechajte prázdne. ');
  t('Uveďte meno autora fotografickej snímky trojrozmerného diela (objekt, socha, stavba). ');
  t('Uveďte názov diela. Ak názov nie je podstatný, pole nechajte prázdne.');
  t('Uveďte názov inštitúcie, ktorá poskytla licenciu na použitie diela, meno múzea, kde sa dielo nachádza alebo názov inštitúcie, z ktorej stránky bolo (CC alebo public domain) dielo prevzaté. Príklad: Met Museum, NASA (nie Flickr, Pixabay a pod)');
  t('Uveďte odkaz (URL) na stránku, odkiaľ bolo dielo prevzaté. Na stránke sú okrem obrázka aj podrobnejšie údaje.');
  t('Uveďte text do popisu ilustrácie ');
  t('Uveďte, kto je držiteľom práv licencovaného diela (informácia môže byť dostupná v príslušnej zmluve o použití). Držiteľ práv bude uvedený v oznámení o licencii (© autor)');
  t('Vložte originál rastrového obrázka (jpg, tif), <b>ak sa líši</b> od obrázka, ktorý bol vložený do poľa <i>Súbory ilustrácie</i>, napr. ak má väčšie rozlíšenie, nie je orezaný a pod.');
  t('Zadajte rovnakú lexikálnu skupinu, akú má zodpovedajúce heslo.');
  t('Zadajte rovnaký názov, ako je názov zodpovedajúceho hesla. Môžete pridať aj ďalší text, napr. "Ilustrácia1" a podobne.');
  t('Zaškrtnite, ak boli originál obrázka upravený (orezanie, zmena kontrastu, ...). V prípade licencií CC s atribútom No Derivates (ND, bez odvodeného obsahu) dielo nemožno modifikovať.');
  t('Zvoľte, kde má byť obrázok použitý. "Zobraziť na webe" možno zvoliť len vtedy, ak to licenčné podmienky diela umožňujú: <br />- Ak je v poli "Typ ilustrácie" uvedené "Vlastná ilustrácia EnÚ", "Voľné dielo", "Creative Commons" alebo "Logo, erb, zástava", alebo ak je ilustrácia vložená pomocou poľa "Obrázok - odkaz (návrh/náhľad)", tak dielo možno zobraziť na webe. <br />- V prípadoch "Autorské dielo" a "Muzeálny objekt" záleží na zmluve EnÚ s príslušnou inštitúciou. ');

  return $field_instances;
}
