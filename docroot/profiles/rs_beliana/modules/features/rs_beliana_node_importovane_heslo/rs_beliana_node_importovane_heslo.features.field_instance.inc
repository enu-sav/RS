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
      'weight' => 10,
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
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
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
        'weight' => 6,
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

  // Exported field_instance: 'node-importovane_heslo-field_datum_aktualizacie'.
  $field_instances['node-importovane_heslo-field_datum_aktualizacie'] = array(
    'bundle' => 'importovane_heslo',
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
    'field_name' => 'field_datum_aktualizacie',
    'label' => 'Dátum aktualizácie',
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
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_errta'.
  $field_instances['node-importovane_heslo-field_errta'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Opravy, ktoré sa majú uviesť vo zväzku Erráta. Opravy uveďte formou "pôvodné >> opravené;", napríklad "King of Blue >> Kind of Blue;", a to vždy na samostatný riadok a na koniec dajte znak ;. Ak sú zmeny rozsiahle (napr. heslo je celkom prepísané), uveďte len "rozsiahle zmeny".',
    'display' => array(
      'default' => array(
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
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-importovane_heslo-field_ilustracia'.
  $field_instances['node-importovane_heslo-field_ilustracia'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'use_content_language' => TRUE,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 9,
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
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
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

  // Exported field_instance: 'node-importovane_heslo-field_lexikalna_skupina'.
  $field_instances['node-importovane_heslo-field_lexikalna_skupina'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vyberte lexikálnu skupinu najnižšej úrovne (nemá podúrovne a vždy má v texte zátvorky).',
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
      'weight' => 2,
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

  // Exported field_instance: 'node-importovane_heslo-field_taxsubor'.
  $field_instances['node-importovane_heslo-field_taxsubor'] = array(
    'bundle' => 'importovane_heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Názov súboru sa doplní automaticky na základe názvu hesla',
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
      'weight' => 9,
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
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
          'filtered_html' => 0,
          'full_html' => 'full_html',
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
        'weight' => 9,
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
  t('Dátum');
  t('Dátum aktualizácie');
  t('Erráta');
  t('Ilustrácie');
  t('Komentár/inštrukcie');
  t('Lexikálna skupina');
  t('Na zoradenie');
  t('Názov');
  t('Názov súboru sa doplní automaticky na základe názvu hesla');
  t('Opravy, ktoré sa majú uviesť vo zväzku Erráta. Opravy uveďte formou "pôvodné >> opravené;", napríklad "King of Blue >> Kind of Blue;", a to vždy na samostatný riadok a na koniec dajte znak ;. Ak sú zmeny rozsiahle (napr. heslo je celkom prepísané), uveďte len "rozsiahle zmeny".');
  t('Súbor');
  t('Text hesla');
  t('Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ');
  t('Text určený pre autora, redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text možno zmazať.');
  t('Vyberte lexikálnu skupinu najnižšej úrovne (nemá podúrovne a vždy má v texte zátvorky).');
  t('Zadajte dátum aktualizácie vydaného hesla. Aktualizáciou môže byť napr. prispôsobenie textu hesla novele zákona, vloženie dátumu úmrtia osoby, aktualizácia štatistických údajov v geografickom hesle, závažná vecná oprava alebo doplnenie textu hesla a podobne. Aktualizáciou nie je oprava chýb, preklepov, odkazov či odstránenie skratiek.');

  return $field_instances;
}
