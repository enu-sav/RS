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
      'weight' => 9,
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
    'label' => 'Dátum',
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_datum_aktualizacie'.
  $field_instances['node-heslo-field_datum_aktualizacie'] = array(
    'bundle' => 'heslo',
    'deleted' => 0,
    'description' => 'Zadajte dátum aktualizácie vydaného hesla. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.',
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
      'weight' => 13,
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
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_errta'.
  $field_instances['node-heslo-field_errta'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 12,
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
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
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
    'description' => 'Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorí sa otvorí. Zadávať môžete len svoje lexikálne skupiny.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
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
        'label' => 'above',
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
      'weight' => 21,
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 16,
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
      'weight' => 18,
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
      'weight' => 17,
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
      'weight' => 10,
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
        'label' => 'above',
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_vyplatit'.
  $field_instances['node-heslo-field_vyplatit'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zvoľte spôsob vypracovania hesla. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 11,
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
      'weight' => 15,
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
      'weight' => 14,
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
  t('Dátum');
  t('Dátum aktualizácie');
  t('Dátum prvého zverejnenia');
  t('Erráta');
  t('Ilustrácie');
  t('Komentár/inštrukcie/návrh/zdôvodnenie');
  t('Lexikálna skupina');
  t('Na zoradenie');
  t('Názov');
  t('Pomocné pole používané na zapamätanie zoznamu redaktorov, ktorí majú vidieť zlúčené heslo v 1. alebo 2. korektúre. Vyplňuje sa automaticky');
  t('Pomocné pole: lexikálne skupiny hesiel, z ktorých bolo heslo vytvorené zlúčením. Vyplňuje sa automaticky pri zlučovaní hesiel.');
  t('Pomocné pole: zoznam redaktorov zlúčených hesiel. Vyplní sa automaticky pri zlučovaní hesiel.');
  t('Použité zdroje');
  t('Povodne lexikalne skupiny');
  t('Pôvodný text hesla v generálnom heslári pred importovaním z XLS súborov. XLS tabuľka heslára mala 8 stĺpcov ZODAD, HESLO, P_R, L_S, AUT, IL, POZN a POZN 2 . Obsah stĺpcov je uvedený v zátvorke, POZN a POZN2 sú spojené.
');
  t('Redaktori zlúčeného hesla');
  t('Spravit korekturu');
  t('Súbor');
  t('Text hesla');
  t('Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ');
  t('Text určený pre autora redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text možno zmazať.');
  t('Uveďte zdroje, ktoré boli použité. Môžu to byť aj odkazy na web. Prípadne zo zdroja skopírujte aj relevantný text (max. niekoľko riadkov).');
  t('Vložte potrebný počet ilustrácií.  Zadajte prvé písmená jej názvu ilustrácie. Ilustráciu treba najskôr <a href="ilustracia" target="_blank">vytvoriť</a>. ');
  t('Vyplatenie odmeny');
  t('Zadajte dátum aktualizácie vydaného hesla. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.');
  t('Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorí sa otvorí. Zadávať môžete len svoje lexikálne skupiny.');
  t('Zlúčené do');
  t('Zlúčené z');
  t('Zo zoznamu vyberte názov súboru, do ktorého má byť heslo zaradené. Názov súboru je daný názvom svojho posledného hesla.');
  t('Zvoľte spôsob vypracovania hesla. ');
  t('Záznam z pôvodného GH');

  return $field_instances;
}
