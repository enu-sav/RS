<?php

/**
 * @file
 * rs_beliana_node_importovane_heslo.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rs_beliana_node_importovane_heslo_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_importovane_heslo-comment_body'.
  $field_instances['comment-comment_node_importovane_heslo-comment_body'] = array(
    'bundle' => 'comment_node_importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Komentujte len heslá, ku ktorým sa dostanete cez menu <strong>Komentovať</strong> (hore na lište).<br />
Z textu hesla vyššie môžete kopírovať pomocou CRTL-C/CTRL-V, matematické rovnice však nemusia byť skopírované správne.<br />
Ak je text v poriadku, uveďte <strong>Text OK</strong>.',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_atributy'.
  $field_instances['node-importovane_heslo-field_atributy'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Atribúty sú pomôcka pri vyhľadávaní obsahu alebo kontrole hesiel.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atributy',
    'label' => 'Atribúty',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'node-importovane_heslo-field_datum'.
  $field_instances['node-importovane_heslo-field_datum'] = array(
    'bundle' => 'importovane_heslo',
    'deleted' => 0,
    'description' => 'Do polí Dátum a Dátum 2 sa pri uložení hesla automaticky prenesú dátumy uvedené v záhlaví hesla (nesmú byť zafarbené). Pokiaľ v záhlaví žiadne dátumy nie sú, môžete sem zadať významné dátumy z textu hesla (napr 14. júl 1789 v hesle Bastila). Na poradí nezáleží. Uvádzajte len jednoznačné dátumy od roku 1000. Dátum bude použitý vo webovej verzii.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 6,
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum',
    'label' => 'Dátum výročia',
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
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_datum_aktualizacie'.
  $field_instances['node-importovane_heslo-field_datum_aktualizacie'] = array(
    'bundle' => 'importovane_heslo',
    'deleted' => 0,
    'description' => 'Zadajte dátum aktualizácie vydaného hesla v tvare RRRR/MM/DD napr. 2020/04/25. Dátum uvedený pod poľom sa nemusí zhodovať s aktuálnym dátumom. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 7,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_aktualizacie',
    'label' => 'Dátum aktualizácie',
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
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-importovane_heslo-field_datum_autorovho_textu'.
  $field_instances['node-importovane_heslo-field_datum_autorovho_textu'] = array(
    'bundle' => 'importovane_heslo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 11,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_autorovho_textu',
    'label' => 'Dátum uloženia údajov pre vyplatenie',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
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
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_datum_vyplatenia'.
  $field_instances['node-importovane_heslo-field_datum_vyplatenia'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_vyplatenia',
    'label' => 'Dátum vyplatenia',
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
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-importovane_heslo-field_dlzka_autorovho_textu_zad'.
  $field_instances['node-importovane_heslo-field_dlzka_autorovho_textu_zad'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 10,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dlzka_autorovho_textu_zad',
    'label' => 'Počet znakov na vyplatenie',
    'required' => 1,
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
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_doplnkova_ls'.
  $field_instances['node-importovane_heslo-field_doplnkova_ls'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Popri Lexikálnej skupine slúži na kategorizáciu hesla na webe (nevkladajte rovnakú skupinu ako je v poli Lexikálna skupina)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_doplnkova_ls',
    'label' => 'Doplnková lexikálna skupina',
    'required' => 0,
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
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_ilustracia'.
  $field_instances['node-importovane_heslo-field_ilustracia'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte názov ilustrácie. Ak ilustrácia ešte nie je v systéme, treba ju najskôr vytvoriť pomocou <strong>Vytvoriť > Ilustrácia</strong> na hornej lište.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'hide_title' => FALSE,
          'links' => 1,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
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
        'module' => 'entityreference',
        'settings' => array(),
        'type' => 'entityreference_entity_id',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ilustracia',
    'label' => 'Ilustrácie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-importovane_heslo-field_komentar_instrukcie'.
  $field_instances['node-importovane_heslo-field_komentar_instrukcie'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text určený pre autora, redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text možno zmazať.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
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
    'field_name' => 'field_komentar_instrukcie',
    'label' => 'Komentár/inštrukcie',
    'required' => 0,
    'settings' => array(
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_konzultacia_data'.
  $field_instances['node-importovane_heslo-field_konzultacia_data'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_konzultacia_data',
    'label' => 'Konzultácia dáta',
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
      'weight' => 25,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_lexikalna_skupina'.
  $field_instances['node-importovane_heslo-field_lexikalna_skupina'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorý sa otvorí. Zadávať môžete len svoje lexikálne skupiny. Slúži na riadenie prístupu k heslám a na kategorizáciu hesla na webe. Ak chcete heslo priradiť autorovi, zadajte len jednu hodnotu.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lexikalna_skupina',
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

  // Exported field_instance: 'node-importovane_heslo-field_na_zoradenie'.
  $field_instances['node-importovane_heslo-field_na_zoradenie'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_objednavka'.
  $field_instances['node-importovane_heslo-field_objednavka'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nevypĺňať – vyplní sa automaticky pri vytvorení objednávky.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objednavka',
    'label' => 'Objednávka',
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
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_pouzite_zdroje'.
  $field_instances['node-importovane_heslo-field_pouzite_zdroje'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte zdroje, ktoré boli použité. Môžu to byť aj odkazy na web. Prípadne zo zdroja skopírujte aj relevantný text (max. niekoľko riadkov).',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pouzite_zdroje',
    'label' => 'Použité zdroje',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_povodny_autor'.
  $field_instances['node-importovane_heslo-field_povodny_autor'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_povodny_autor',
    'label' => 'Pôvodný autor hesla',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_table'.
  $field_instances['node-importovane_heslo-field_table'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vložte tabuľku so základnými údajmi o štátoch ap.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_table',
    'label' => 'Tabuľka pre geografické heslá',
    'required' => 0,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_table_weight'.
  $field_instances['node-importovane_heslo-field_table_weight'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pozície sú číslované od 0 (t. j. ak má byť tabuľka celkom hore nad obrázkami, vložte 0)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_table_weight',
    'label' => 'Pozícia tabuľky pre geografické heslá',
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
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_taxsubor'.
  $field_instances['node-importovane_heslo-field_taxsubor'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Názov súboru sa doplní automaticky na základe názvu hesla',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_text_hesla'.
  $field_instances['node-importovane_heslo-field_text_hesla'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'liteformatter',
        'settings' => array(),
        'type' => 'liteformatter_formatter',
        'weight' => 0,
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text_hesla',
    'label' => 'Text hesla',
    'required' => 0,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_vyplatit'.
  $field_instances['node-importovane_heslo-field_vyplatit'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pole je <strong>potrebné vyplniť</strong> len vtedy, ak ho chcete zo stavu "U redaktora" odoslať do stavu "U výst. redaktora". Ide najmä o situáciu, keď heslo bolo prepracované autorom. V ostatných prípadoch môže zostať nevyplnené.
Zvoľte spôsob vypracovania hesla. Ak pole ešte nechcete vyplniť, nevoľte nič alebo zvoľte N/A.<br />
Pri odosielaní hesla VR však pole musí byť vyplnené.<br /> 
Po uložení hesla voľbu nemožno zmeniť.<br />
<strong>Položku "Vyriešené v knižnom RS" nepoužívajte, je vyhradená pre heslá prenesené z knižného RS.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vyplatit',
    'label' => 'Vyplatenie odmeny',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_zmluva'.
  $field_instances['node-importovane_heslo-field_zmluva'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte číslo zmluvy, na základe ktorej bolo heslo dané na vypracovanie',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zmluva',
    'label' => 'Zmluva na vyplatenie',
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
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-importovane_heslo-field_zverejnit_meno_autora'.
  $field_instances['node-importovane_heslo-field_zverejnit_meno_autora'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Zaškrtnite, ak sa majú na webe zobraziť meno a stručný životopis.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zverejnit_meno_autora',
    'label' => 'Zverejniť meno autora',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-title_field'.
  $field_instances['node-importovane_heslo-title_field'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Názov',
    'required' => 1,
    'settings' => array(
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
  t('Atribúty');
  t('Atribúty sú pomôcka pri vyhľadávaní obsahu alebo kontrole hesiel.');
  t('Comment');
  t('Do polí Dátum a Dátum 2 sa pri uložení hesla automaticky prenesú dátumy uvedené v záhlaví hesla (nesmú byť zafarbené). Pokiaľ v záhlaví žiadne dátumy nie sú, môžete sem zadať významné dátumy z textu hesla (napr 14. júl 1789 v hesle Bastila). Na poradí nezáleží. Uvádzajte len jednoznačné dátumy od roku 1000. Dátum bude použitý vo webovej verzii.');
  t('Doplnková lexikálna skupina');
  t('Dátum aktualizácie');
  t('Dátum uloženia údajov pre vyplatenie');
  t('Dátum vyplatenia');
  t('Dátum výročia');
  t('Ilustrácie');
  t('Komentujte len heslá, ku ktorým sa dostanete cez menu <strong>Komentovať</strong> (hore na lište).<br />
Z textu hesla vyššie môžete kopírovať pomocou CRTL-C/CTRL-V, matematické rovnice však nemusia byť skopírované správne.<br />
Ak je text v poriadku, uveďte <strong>Text OK</strong>.');
  t('Komentár/inštrukcie');
  t('Konzultácia dáta');
  t('Lexikálna skupina');
  t('Na zoradenie');
  t('Nevypĺňať – vyplní sa automaticky pri vytvorení objednávky.');
  t('Názov');
  t('Názov súboru sa doplní automaticky na základe názvu hesla');
  t('Objednávka');
  t('Pole je <strong>potrebné vyplniť</strong> len vtedy, ak ho chcete zo stavu "U redaktora" odoslať do stavu "U výst. redaktora". Ide najmä o situáciu, keď heslo bolo prepracované autorom. V ostatných prípadoch môže zostať nevyplnené.
Zvoľte spôsob vypracovania hesla. Ak pole ešte nechcete vyplniť, nevoľte nič alebo zvoľte N/A.<br />
Pri odosielaní hesla VR však pole musí byť vyplnené.<br /> 
Po uložení hesla voľbu nemožno zmeniť.<br />
<strong>Položku "Vyriešené v knižnom RS" nepoužívajte, je vyhradená pre heslá prenesené z knižného RS.</strong>');
  t('Popri Lexikálnej skupine slúži na kategorizáciu hesla na webe (nevkladajte rovnakú skupinu ako je v poli Lexikálna skupina)');
  t('Použité zdroje');
  t('Pozícia tabuľky pre geografické heslá');
  t('Pozície sú číslované od 0 (t. j. ak má byť tabuľka celkom hore nad obrázkami, vložte 0)');
  t('Počet znakov na vyplatenie');
  t('Pôvodný autor hesla');
  t('Súbor');
  t('Tabuľka pre geografické heslá');
  t('Text hesla');
  t('Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ');
  t('Text určený pre autora, redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text možno zmazať.');
  t('Uveďte zdroje, ktoré boli použité. Môžu to byť aj odkazy na web. Prípadne zo zdroja skopírujte aj relevantný text (max. niekoľko riadkov).');
  t('Vložte tabuľku so základnými údajmi o štátoch ap.');
  t('Vyplatenie odmeny');
  t('Zadajte dátum aktualizácie vydaného hesla v tvare RRRR/MM/DD napr. 2020/04/25. Dátum uvedený pod poľom sa nemusí zhodovať s aktuálnym dátumom. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.');
  t('Zadajte názov ilustrácie. Ak ilustrácia ešte nie je v systéme, treba ju najskôr vytvoriť pomocou <strong>Vytvoriť > Ilustrácia</strong> na hornej lište.');
  t('Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorý sa otvorí. Zadávať môžete len svoje lexikálne skupiny. Slúži na riadenie prístupu k heslám a na kategorizáciu hesla na webe. Ak chcete heslo priradiť autorovi, zadajte len jednu hodnotu.');
  t('Zadajte číslo zmluvy, na základe ktorej bolo heslo dané na vypracovanie');
  t('Zaškrtnite, ak sa majú na webe zobraziť meno a stručný životopis.');
  t('Zmluva na vyplatenie');
  t('Zverejniť meno autora');

  return $field_instances;
}
