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
    'description' => 'Zadajte dátum súvisiaci s heslom: prvá hodnota je dátum alebo začiatok udalosti alebo dátum narodenia, druhá hodnota je dátum konca udalosti alebo dátum úmrtia. Uvádzajte len jednoznačné dátumy od roku 1000. Dátum bude použitý vo webovej verzii.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(),
        'type' => 'date_plain',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 5,
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
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
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
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
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ilustracia',
    'label' => 'Ilustrácia',
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_komentar_instrukcie'.
  $field_instances['node-heslo-field_komentar_instrukcie'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text určený pre autora redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text môžno zmazať.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_komentar_instrukcie',
    'label' => 'Komentár/inštrukcie/návrh/zdôvodnenie',
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
      'weight' => 2,
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
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
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
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_povodne_lexikalne_skupiny'.
  $field_instances['node-heslo-field_povodne_lexikalne_skupiny'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lexikálne skupiny hesiel, z ktorých bolo heslo vytvorené zlúčením.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-heslo-field_spravit_1_korekturu'.
  $field_instances['node-heslo-field_spravit_1_korekturu'] = array(
    'bundle' => 'heslo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pomocné pole požívané na zapamätanie zoznamu redaktorov, ktorí majú vidieť zlúčené heslo v 1. korektúre.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
    'label' => 'Spravit 1. korekturu',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text_hesla',
    'label' => 'Text hesla',
    'required' => 1,
    'settings' => array(
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
      'weight' => 3,
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
      'weight' => 16,
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
      'weight' => 13,
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
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
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
      'weight' => 12,
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
  t('Dátum');
  t('Erráta');
  t('Ilustrácia');
  t('Komentár/inštrukcie/návrh/zdôvodnenie');
  t('Lexikálna skupina');
  t('Lexikálne skupiny hesiel, z ktorých bolo heslo vytvorené zlúčením.');
  t('Na zoradenie');
  t('Názov');
  t('Pomocné pole požívané na zapamätanie zoznamu redaktorov, ktorí majú vidieť zlúčené heslo v 1. korektúre.');
  t('Povodne lexikalne skupiny');
  t('Pôvodný text hesla v generálnom heslári pred importovaním z XLS súborov. XLS tabuľka heslára mala 8 stĺpcov ZODAD, HESLO, P_R, L_S, AUT, IL, POZN a POZN 2 . Obsah stĺpcov je uvedený v zátvorke, POZN a POZN2 sú spojené.
');
  t('Spravit 1. korekturu');
  t('Súbor');
  t('Text hesla');
  t('Text na použitie pri abecednom zoraďovaní hesiel. Použite len malé písmená bez diakritiky okrem znakov č, ž a š. Na správne zoradenie rovnako znejúcich hesiel na koniec pridajte podčiarnik \'_\' a vhodnú kombináciu znakov a, b, c.... ');
  t('Text určený pre autora redaktora alebo správcu heslára. Ak už v poli text existuje, nový text pridajte na začiatok. Nepotrebný starý text môžno zmazať.');
  t('Vložte potrebný počet ilustrácií.  Zadajte prvé písmená jej názvu ilustrácie. Ilustráciu treba najskôr <a href="ilustracia" target="_blank">vytvoriť</a>. ');
  t('Vyplatenie odmeny');
  t('Zadajte dátum súvisiaci s heslom: prvá hodnota je dátum alebo začiatok udalosti alebo dátum narodenia, druhá hodnota je dátum konca udalosti alebo dátum úmrtia. Uvádzajte len jednoznačné dátumy od roku 1000. Dátum bude použitý vo webovej verzii.');
  t('Zadajte časť názvu lex. skupiny, napr. "deji" a vyberte zo zoznamu, ktorí sa otvorí. Zadávať môžete len svoje lexikálne skupiny.');
  t('Zlúčené do');
  t('Zlúčené z');
  t('Zo zoznamu vyberte názov súboru, do ktorého má byť heslo zaradené. Názov súboru je daný názvom svojho posledného hesla.');
  t('Zvoľte spôsob vypracovania hesla. ');
  t('Záznam z pôvodného GH');

  return $field_instances;
}
