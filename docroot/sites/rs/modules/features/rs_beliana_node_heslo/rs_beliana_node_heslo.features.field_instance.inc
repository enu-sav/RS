<?php
/**
 * @file
 * rs_beliana_node_heslo.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rs_beliana_node_heslo_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_heslo-comment_body'.
  $field_instances['comment-comment_node_heslo-comment_body'] = array(
    'bundle' => 'comment_node_heslo',
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

  // Exported field_instance: 'node-heslo-field_atributy'.
  $field_instances['node-heslo-field_atributy'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Atribúty sú pomôcka pri vyhľadávaní obsahu alebo kontrole hesiel.',
    'display' => array(
      'default' => array(
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
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atributy',
    'label' => 'Atribúty',
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
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum'.
  $field_instances['node-heslo-field_datum'] = array(
    'bundle' => 'heslo',
    'deleted' => 0,
    'description' => 'Do polí Dátum a Dátum 2 sa pri uložení hesla automaticky prenesú dátumy uvedené v záhlaví hesla (nesmú byť zafarbené). Pokiaľ v záhlaví žiadne dátumy nie sú, môžete sem zadať významné dátumy z textu hesla (napr 14. júl 1789 v hesle Bastila). Na poradí nezáleží. Uvádzajte len jednoznačné dátumy od roku 1000. Dátum bude použitý vo webovej verzii.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
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
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum_aktualizacie'.
  $field_instances['node-heslo-field_datum_aktualizacie'] = array(
    'bundle' => 'heslo',
    'deleted' => 0,
    'description' => 'Zadajte dátum aktualizácie vydaného hesla v tvare <strong>RRRR/MM/DD</strong> napr. 2020/04/25. Dátum uvedený pod poľom sa nemusí zhodovať s aktuálnym dátumom. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum_autorovho_textu'.
  $field_instances['node-heslo-field_datum_autorovho_textu'] = array(
    'bundle' => 'heslo',
    'deleted' => 0,
    'description' => 'Vypĺňané programovo. Dátum, keď bolo vyplnené pole "Dĺžka autorovho textu" ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_autorovho_textu',
    'label' => 'Dátum uloženia údajov pre vyplatenie',
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
      'weight' => 25,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum_prebratia'.
  $field_instances['node-heslo-field_datum_prebratia'] = array(
    'bundle' => 'heslo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
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
      'weight' => 31,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum_prveho_zverejnenia'.
  $field_instances['node-heslo-field_datum_prveho_zverejnenia'] = array(
    'bundle' => 'heslo',
    'deleted' => 0,
    'description' => 'Do poľa sa programovo ukladá čas prvého zverejnenia hesla na webe',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
    'field_name' => 'field_datum_prveho_zverejnenia',
    'label' => 'Dátum prvého zverejnenia',
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
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum_vyplatenia'.
  $field_instances['node-heslo-field_datum_vyplatenia'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 29,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_dlzka_autorovho_textu_zad'.
  $field_instances['node-heslo-field_dlzka_autorovho_textu_zad'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte počet znakov textu. Ak zadáte číslo 0, systém doplní počet znakov tejto verzie.',
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
        'weight' => 14,
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
      'min' => 0,
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

  // Exported field_instance: 'node-heslo-field_doplnkova_ls'.
  $field_instances['node-heslo-field_doplnkova_ls'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Popri Lexikálnej skupine slúži na kategorizáciu hesla na webe (nevkladajte rovnakú skupinu ako je Lexikálna skupina) ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 31,
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_errta'.
  $field_instances['node-heslo-field_errta'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Opravy, ktoré sa majú uviesť vo zväzku Erráta. Opravy uveďte formou "pôvodné >> opravené;", napríklad "King of Blue >> Kind of Blue;", a to vždy na samostatný riadok a na koniec dajte znak ;. Ak sú zmeny rozsiahle (napr. heslo je celkom prepísané), uveďte len "rozsiahle zmeny".',
    'display' => array(
      'default' => array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_errta',
    'label' => 'Erráta',
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
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_ilustracia'.
  $field_instances['node-heslo-field_ilustracia'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vložte potrebný počet ilustrácií.  Zadajte prvé písmená jej názvu ilustrácie. Ilustráciu treba najskôr <a href="ilustracia" target="_blank">vytvoriť</a>. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
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
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 5,
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
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_komentar_instrukcie'.
  $field_instances['node-heslo-field_komentar_instrukcie'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text určený pre autora redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text možno zmazať.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'lite_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_komentar_instrukcie',
    'label' => 'Komentár/inštrukcie/návrh/zdôvodnenie',
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

  // Exported field_instance: 'node-heslo-field_lexikalna_skupina'.
  $field_instances['node-heslo-field_lexikalna_skupina'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorý sa otvorí. Zadávať môžete len svoje lexikálne skupiny.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
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

  // Exported field_instance: 'node-heslo-field_na_zoradenie'.
  $field_instances['node-heslo-field_na_zoradenie'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ',
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
        'weight' => 14,
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
        'size' => 120,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_pouzite_zdroje'.
  $field_instances['node-heslo-field_pouzite_zdroje'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uveďte zdroje, ktoré boli použité. Môžu to byť aj odkazy na web. Prípadne zo zdroja skopírujte aj relevantný text (max. niekoľko riadkov).',
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
      'weight' => 24,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_povodne_lexikalne_skupiny'.
  $field_instances['node-heslo-field_povodne_lexikalne_skupiny'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pomocné pole: lexikálne skupiny hesiel, z ktorých bolo heslo vytvorené zlúčením. Vyplňuje sa automaticky pri zlučovaní hesiel.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_povodne_lexikalne_skupiny',
    'label' => 'Povodne lexikalne skupiny',
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
      'weight' => 20,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_redaktori_zluceneho'.
  $field_instances['node-heslo-field_redaktori_zluceneho'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pomocné pole: zoznam redaktorov zlúčených hesiel. Vyplní sa automaticky pri zlučovaní hesiel.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_redaktori_zluceneho',
    'label' => 'Redaktori zlúčeného hesla',
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
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_remote_id'.
  $field_instances['node-heslo-field_remote_id'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
        'weight' => 0,
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
      'weight' => 30,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_spravit_1_korekturu'.
  $field_instances['node-heslo-field_spravit_1_korekturu'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pomocné pole používané na zapamätanie zoznamu redaktorov, ktorí majú vidieť zlúčené heslo v 1. alebo 2. korektúre. Vyplňuje sa automaticky',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spravit_1_korekturu',
    'label' => 'Spravit korekturu',
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
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_table'.
  $field_instances['node-heslo-field_table'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vložte tabuľku so základnými údajmi o štátoch ap.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_table_weight'.
  $field_instances['node-heslo-field_table_weight'] = array(
    'bundle' => 'heslo',
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_taxsubor'.
  $field_instances['node-heslo-field_taxsubor'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zo zoznamu vyberte názov súboru, do ktorého má byť heslo zaradené. Názov súboru je daný názvom svojho posledného hesla.',
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
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
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_text_hesla'.
  $field_instances['node-heslo-field_text_hesla'] = array(
    'bundle' => 'heslo',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text_hesla',
    'label' => 'Text hesla',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_text_z_gh'.
  $field_instances['node-heslo-field_text_z_gh'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pôvodný text hesla v generálnom heslári pred importovaním z XLS súborov. XLS tabuľka heslára mala 8 stĺpcov ZODAD, HESLO, P_R, L_S, AUT, IL, POZN a POZN 2 . Obsah stĺpcov je uvedený v zátvorke, POZN a POZN2 sú spojené.
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text_z_gh',
    'label' => 'Záznam z pôvodného GH',
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
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_vyplatit'.
  $field_instances['node-heslo-field_vyplatit'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zvoľte spôsob vypracovania hesla. Ak pole ešte nechcete vyplniť, nevoľte nič alebo zvoľte N/A.<br />
Pri odosielanú hesla VR1 však pole musí byť vyplnené.<br /> 
Po uložení hesla voľbu nemožno zmeniť.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
        'weight' => 5,
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
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_vyslo_knizne'.
  $field_instances['node-heslo-field_vyslo_knizne'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vyslo_knizne',
    'label' => 'Vyšlo knižne',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_zlucene_do'.
  $field_instances['node-heslo-field_zlucene_do'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zlucene_do',
    'label' => 'Zlúčené do',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_zlucene_z'.
  $field_instances['node-heslo-field_zlucene_z'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zlucene_z',
    'label' => 'Zlúčené z',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_zmluva'.
  $field_instances['node-heslo-field_zmluva'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zadajte číslo zmluvy, na základe ktorej bolo heslo objednané. Ak ho nepoznáte, zadajte číslo zmluvy, ktorá bola aktívna v čase odovzdanie textu autorom (<a href="https://rs.beliana.sav.sk/content/urcenie-cisla-zmluvy-na-vyplatenie">viac o určení čísla zmluvy</a>).',
    'display' => array(
      'default' => array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zmluva',
    'label' => 'Zmluva na vyplatenie',
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

  // Exported field_instance: 'node-heslo-field_zverejnit_meno_autora'.
  $field_instances['node-heslo-field_zverejnit_meno_autora'] = array(
    'bundle' => 'heslo',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
      'weight' => 27,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-title_field'.
  $field_instances['node-heslo-title_field'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
        'weight' => 0,
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
        'size' => 100,
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
  t('Do poľa sa programovo ukladá čas prvého zverejnenia hesla na webe');
  t('Doplnková lexikálna skupina');
  t('Dátum aktualizácie');
  t('Dátum prebratia obsahu');
  t('Dátum prvého zverejnenia');
  t('Dátum uloženia údajov pre vyplatenie');
  t('Dátum vyplatenia');
  t('Dátum výročia');
  t('Erráta');
  t('Ilustrácie');
  t('Komentár/inštrukcie/návrh/zdôvodnenie');
  t('Lexikálna skupina');
  t('Na zoradenie');
  t('Názov');
  t('Opravy, ktoré sa majú uviesť vo zväzku Erráta. Opravy uveďte formou "pôvodné >> opravené;", napríklad "King of Blue >> Kind of Blue;", a to vždy na samostatný riadok a na koniec dajte znak ;. Ak sú zmeny rozsiahle (napr. heslo je celkom prepísané), uveďte len "rozsiahle zmeny".');
  t('Pomocné pole používané na zapamätanie zoznamu redaktorov, ktorí majú vidieť zlúčené heslo v 1. alebo 2. korektúre. Vyplňuje sa automaticky');
  t('Pomocné pole: lexikálne skupiny hesiel, z ktorých bolo heslo vytvorené zlúčením. Vyplňuje sa automaticky pri zlučovaní hesiel.');
  t('Pomocné pole: zoznam redaktorov zlúčených hesiel. Vyplní sa automaticky pri zlučovaní hesiel.');
  t('Popri Lexikálnej skupine slúži na kategorizáciu hesla na webe (nevkladajte rovnakú skupinu ako je Lexikálna skupina) ');
  t('Použité zdroje');
  t('Povodne lexikalne skupiny');
  t('Pozícia tabuľky pre geografické heslá');
  t('Pozície sú číslované od 0 (t. j. ak má byť tabuľka celkom hore nad obrázkami, vložte 0)');
  t('Počet znakov na vyplatenie');
  t('Pôvodný text hesla v generálnom heslári pred importovaním z XLS súborov. XLS tabuľka heslára mala 8 stĺpcov ZODAD, HESLO, P_R, L_S, AUT, IL, POZN a POZN 2 . Obsah stĺpcov je uvedený v zátvorke, POZN a POZN2 sú spojené.
');
  t('Redaktori zlúčeného hesla');
  t('Remote ID');
  t('Spravit korekturu');
  t('Súbor');
  t('Tabuľka pre geografické heslá');
  t('Text hesla');
  t('Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ');
  t('Text určený pre autora redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text možno zmazať.');
  t('Uveďte zdroje, ktoré boli použité. Môžu to byť aj odkazy na web. Prípadne zo zdroja skopírujte aj relevantný text (max. niekoľko riadkov).');
  t('Vložte potrebný počet ilustrácií.  Zadajte prvé písmená jej názvu ilustrácie. Ilustráciu treba najskôr <a href="ilustracia" target="_blank">vytvoriť</a>. ');
  t('Vložte tabuľku so základnými údajmi o štátoch ap.');
  t('Vyplatenie odmeny');
  t('Vypĺňané programovo. Dátum, keď bolo vyplnené pole "Dĺžka autorovho textu" ');
  t('Vyšlo knižne');
  t('Zadajte dátum aktualizácie vydaného hesla v tvare <strong>RRRR/MM/DD</strong> napr. 2020/04/25. Dátum uvedený pod poľom sa nemusí zhodovať s aktuálnym dátumom. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.');
  t('Zadajte počet znakov textu. Ak zadáte číslo 0, systém doplní počet znakov tejto verzie.');
  t('Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorý sa otvorí. Zadávať môžete len svoje lexikálne skupiny.');
  t('Zadajte číslo zmluvy, na základe ktorej bolo heslo objednané. Ak ho nepoznáte, zadajte číslo zmluvy, ktorá bola aktívna v čase odovzdanie textu autorom (<a href="https://rs.beliana.sav.sk/content/urcenie-cisla-zmluvy-na-vyplatenie">viac o určení čísla zmluvy</a>).');
  t('Zlúčené do');
  t('Zlúčené z');
  t('Zmluva na vyplatenie');
  t('Zo zoznamu vyberte názov súboru, do ktorého má byť heslo zaradené. Názov súboru je daný názvom svojho posledného hesla.');
  t('Zverejniť meno autora');
  t('Zvoľte spôsob vypracovania hesla. Ak pole ešte nechcete vyplniť, nevoľte nič alebo zvoľte N/A.<br />
Pri odosielanú hesla VR1 však pole musí byť vyplnené.<br /> 
Po uložení hesla voľbu nemožno zmeniť.');
  t('Záznam z pôvodného GH');

  return $field_instances;
}
