<?php
/**
 * @file
 * rs_beliana_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rs_beliana_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'archivovane';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Archivované';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Archivované';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    10 => '10',
    6 => '6',
    13 => '13',
    19 => '19',
    14 => '14',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = 'V tomto náhľade sa zobrazujú knižne vydané heslá zväzkov 1 - 8 v originálnej forme, v ktorej boli importované';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $translatables['archivovane'] = array(
    t('Master'),
    t('Archivované'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Krátky popis'),
    t('V tomto náhľade sa zobrazujú knižne vydané heslá zväzkov 1 - 8 v originálnej forme, v ktorej boli importované'),
  );
  $export['archivovane'] = $view;

  $view = new view();
  $view->name = 'beliana';
  $view->description = 'Lists content by moderation state.';
  $view->tag = 'Workbench Moderation';
  $view->base_table = 'node_revision';
  $view->human_name = 'Beliana';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content I\'ve edited';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'zobraziť všetko';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'name_1' => 'name_1',
    'state' => 'state',
    'changed' => 'changed',
    'log' => 'log',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Päta: Globálny: Výsledný súhrn */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Zobrazenie po @per_page položkách, @start - @end z @total';
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You haven\'t created or edited any content.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Vzťah: Workbench Moderation: Uzol */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Vzťah: Obsah: Autor */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'nid';
  /* Vzťah: Content revision: Používateľ */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'nid';
  /* Vzťah: Workbench Moderation: Používateľ */
  $handler->display->display_options['relationships']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['relationships']['uid_2']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['uid_2']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_2']['relationship'] = 'nid';
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['relationship'] = 'nid';
  /* Filter criterion: Používateľ: Aktuálny */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
  $translatables['beliana'] = array(
    t('Defaults'),
    t('Content I\'ve edited'),
    t('zobraziť všetko'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Krátky popis'),
    t('Zobrazenie po @per_page položkách, @start - @end z @total'),
    t('You haven\'t created or edited any content.'),
    t('Uzol'),
    t('autor'),
    t('revision user'),
    t('moderator user'),
    t('Nid'),
    t('Názov'),
    t('Autor'),
    t('Lex. skupina'),
    t('Stav'),
    t('Správa záznamu'),
    t('Typ'),
  );
  $export['beliana'] = $view;

  $view = new view();
  $view->name = 'export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exportovať';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Pole: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = '';
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    696 => '696',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Lexikálna skupina (alt)';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'vyradene' => 'vyradene',
    'len_vyplatit' => 'len_vyplatit',
    'ukoncenezluene' => 'ukoncenezluene',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovanie hesiel';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = 'Pomocou nastavení vyberte požadované heslá, a potom kliknite na oranžové tlačidlo HTML, ktoré sa nachádza celkom dolu vľavo. Vytvorí sa stránka vo formáte HTML, ktorá sa podľa typu a nastavení prehliadača buď priamo v prehliadači zobrazí alebo prehliadač ponúkne inú možnosť. Stránku môžete uložiť do súboru, ktorý môžete otvoriť v textovom editore a tam upraviť, vytlačiť alebo niekomu poslať. Vytvorenú stránku môžete vytlačiť aj priamo z prehliadača. Vybrané heslá sa zobrazia po 20-tich, exportujú sa však všetky vybrané heslá. Povinne treba zadať práve jeden súbor.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'export';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Exportovať a tlačiť';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view.html';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'export.html';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Page-multi */
  $handler = $view->new_display('page', 'Page-multi', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovanie hesiel';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = 'Pomocou nastavení vyberte požadované heslá, a potom kliknite na oranžové tlačidlo HTML, ktoré sa nachádza celkom dolu vľavo. Vytvorí sa stránka vo formáte HTML, ktorá sa podľa typu a nastavení prehliadača buď priamo v prehliadači zobrazí alebo prehliadač ponúkne inú možnosť. Stránku môžete uložiť do súboru, ktorý môžete otvoriť v textovom editore a tam upraviť, vytlačiť alebo niekomu poslať. Vytvorenú stránku môžete vytlačiť aj priamo z prehliadača. Vybrané heslá sa zobrazia po 20-tich, exportujú sa však všetky vybrané heslá. Povinne treba zadať práve jeden súbor.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    27 => 0,
    18 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Lexikálna skupina (alt)';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla (field_text_hesla)';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  $handler->display->display_options['path'] = 'export-multi';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Exportovať a tlačiť-multi';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export-multi */
  $handler = $view->new_display('views_data_export', 'Data export-multi', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view.html';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    27 => 0,
    18 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Lexikálna skupina (alt)';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla (field_text_hesla)';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  $handler->display->display_options['path'] = 'export-multi.html';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $translatables['export'] = array(
    t('Master'),
    t('Exportovať'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Súbor'),
    t('Lexikálna skupina'),
    t('Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.'),
    t('Názov'),
    t('Lexikálna skupina (alt)'),
    t('Page'),
    t('Exportovanie hesiel'),
    t('Krátky popis'),
    t('Pomocou nastavení vyberte požadované heslá, a potom kliknite na oranžové tlačidlo HTML, ktoré sa nachádza celkom dolu vľavo. Vytvorí sa stránka vo formáte HTML, ktorá sa podľa typu a nastavení prehliadača buď priamo v prehliadači zobrazí alebo prehliadač ponúkne inú možnosť. Stránku môžete uložiť do súboru, ktorý môžete otvoriť v textovom editore a tam upraviť, vytlačiť alebo niekomu poslať. Vytvorenú stránku môžete vytlačiť aj priamo z prehliadača. Vybrané heslá sa zobrazia po 20-tich, exportujú sa však všetky vybrané heslá. Povinne treba zadať práve jeden súbor.'),
    t('Data export'),
    t('Page-multi'),
    t('Stav'),
    t('Text hesla (field_text_hesla)'),
    t('Data export-multi'),
  );
  $export['export'] = $view;

  $view = new view();
  $view->name = 'export_na_import';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export na import';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exportovať ilustrácie';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'bypass node access';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Päta: Globálny: Výsledný súhrn */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Zobrazené @start – @end z @total';
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    634 => '634',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['id'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['field'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['operator_id'] = 'field_lexikalna_skupina_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['operator'] = 'field_lexikalna_skupina_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['identifier'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'heslo' => 'heslo',
    'ilustracia' => 'ilustracia',
    'importovane_heslo' => 'importovane_heslo',
    'oznam' => 'oznam',
    'page' => 'page',
    'article' => 'article',
  );
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_atributy_value']['id'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['filters']['field_atributy_value']['field'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_atributy_value']['expose']['operator_id'] = 'field_atributy_value_op';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['label'] = 'Atribúty (field_atributy)';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_atributy_value']['expose']['operator'] = 'field_atributy_value_op';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['identifier'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );

  /* Display: Export ilustrácie */
  $handler = $view->new_display('page', 'Export ilustrácie', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['hierarchy'] = 1;
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Text k ilustrácii (field_popis) */
  $handler->display->display_options['filters']['field_popis_value']['id'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['table'] = 'field_data_field_popis';
  $handler->display->display_options['filters']['field_popis_value']['field'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['group'] = 1;
  $handler->display->display_options['filters']['field_popis_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator_id'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['label'] = 'Text k ilustrácii';
  $handler->display->display_options['filters']['field_popis_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['identifier'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilustracia' => 'ilustracia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Lexikálna skupina (alt)';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['path'] = 'export-ilustracia';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export ilustrácia';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Export ilustácie - dáta */
  $handler = $view->new_display('views_data_export', 'Export ilustácie - dáta', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Vzťah: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['relationships']['reverse_field_ilustracia_node']['id'] = 'reverse_field_ilustracia_node';
  $handler->display->display_options['relationships']['reverse_field_ilustracia_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ilustracia_node']['field'] = 'reverse_field_ilustracia_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'guid';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'nazov';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['id'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['table'] = 'field_data_field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['field'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['label'] = 'kategoria';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['delta_offset'] = '0';
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['label'] = 'komentar';
  /* Pole: Obsah: Text k ilustrácii */
  $handler->display->display_options['fields']['field_popis']['id'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['table'] = 'field_data_field_popis';
  $handler->display->display_options['fields']['field_popis']['field'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['label'] = 'popis';
  $handler->display->display_options['fields']['field_popis']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_popis']['alter']['preserve_tags'] = '<p><strong><em><sub><sup>';
  /* Pole: Obsah: Súbory ilustrácie */
  $handler->display->display_options['fields']['field_subor_ilustracie']['id'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['table'] = 'field_data_field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['field'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['label'] = 'nazverejnenie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_subor_ilustracie']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subor_ilustracie']['separator'] = ';';
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = 'obr_navrh';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Pole: Obsah: Použiť */
  $handler->display->display_options['fields']['field_pouzit']['id'] = 'field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['table'] = 'field_data_field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['field'] = 'field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['label'] = 'pouzit';
  $handler->display->display_options['fields']['field_pouzit']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_pouzit']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pouzit']['separator'] = ';';
  /* Pole: Obsah: Typ ilustrácie */
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['id'] = 'field_zdroj_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['table'] = 'field_data_field_zdroj_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['field'] = 'field_zdroj_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['label'] = 'povod_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['type'] = 'list_key';
  /* Pole: Obsah: Typ CC licencie */
  $handler->display->display_options['fields']['field_licencia1']['id'] = 'field_licencia1';
  $handler->display->display_options['fields']['field_licencia1']['table'] = 'field_data_field_licencia1';
  $handler->display->display_options['fields']['field_licencia1']['field'] = 'field_licencia1';
  $handler->display->display_options['fields']['field_licencia1']['label'] = 'licencia';
  /* Pole: Obsah: Názov diela */
  $handler->display->display_options['fields']['field_nazov_diela']['id'] = 'field_nazov_diela';
  $handler->display->display_options['fields']['field_nazov_diela']['table'] = 'field_data_field_nazov_diela';
  $handler->display->display_options['fields']['field_nazov_diela']['field'] = 'field_nazov_diela';
  $handler->display->display_options['fields']['field_nazov_diela']['label'] = 'nazov_diela';
  /* Pole: Obsah: Meno autora diela */
  $handler->display->display_options['fields']['field_meno_autora_diela']['id'] = 'field_meno_autora_diela';
  $handler->display->display_options['fields']['field_meno_autora_diela']['table'] = 'field_data_field_meno_autora_diela';
  $handler->display->display_options['fields']['field_meno_autora_diela']['field'] = 'field_meno_autora_diela';
  $handler->display->display_options['fields']['field_meno_autora_diela']['label'] = 'autor_diela';
  /* Pole: Obsah: Meno autora snímky */
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['id'] = 'field_meno_autora_snimky_diela';
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['table'] = 'field_data_field_meno_autora_snimky_diela';
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['field'] = 'field_meno_autora_snimky_diela';
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['label'] = 'autor_foto';
  /* Pole: Obsah: Inštitúcia */
  $handler->display->display_options['fields']['field_institucia']['id'] = 'field_institucia';
  $handler->display->display_options['fields']['field_institucia']['table'] = 'field_data_field_institucia';
  $handler->display->display_options['fields']['field_institucia']['field'] = 'field_institucia';
  $handler->display->display_options['fields']['field_institucia']['label'] = 'institucia';
  /* Pole: Obsah: Držiteľ práv */
  $handler->display->display_options['fields']['field_drzitel_prav']['id'] = 'field_drzitel_prav';
  $handler->display->display_options['fields']['field_drzitel_prav']['table'] = 'field_data_field_drzitel_prav';
  $handler->display->display_options['fields']['field_drzitel_prav']['field'] = 'field_drzitel_prav';
  $handler->display->display_options['fields']['field_drzitel_prav']['label'] = 'drzitel_prav';
  /* Pole: Obsah: URL textu licencie */
  $handler->display->display_options['fields']['field_url_textu_licencie_l']['id'] = 'field_url_textu_licencie_l';
  $handler->display->display_options['fields']['field_url_textu_licencie_l']['table'] = 'field_data_field_url_textu_licencie_l';
  $handler->display->display_options['fields']['field_url_textu_licencie_l']['field'] = 'field_url_textu_licencie_l';
  $handler->display->display_options['fields']['field_url_textu_licencie_l']['label'] = 'URL_licencie';
  $handler->display->display_options['fields']['field_url_textu_licencie_l']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_textu_licencie_l']['type'] = 'link_absolute';
  /* Pole: Obsah: URL autora diela alebo inštitúcie */
  $handler->display->display_options['fields']['field_url_autora_diela_l']['id'] = 'field_url_autora_diela_l';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['table'] = 'field_data_field_url_autora_diela_l';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['field'] = 'field_url_autora_diela_l';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['label'] = 'URL_autora';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['type'] = 'link_absolute';
  /* Pole: Obsah: URL stránky s obrázkom a údajmi k dielu */
  $handler->display->display_options['fields']['field_url_diela_l']['id'] = 'field_url_diela_l';
  $handler->display->display_options['fields']['field_url_diela_l']['table'] = 'field_data_field_url_diela_l';
  $handler->display->display_options['fields']['field_url_diela_l']['field'] = 'field_url_diela_l';
  $handler->display->display_options['fields']['field_url_diela_l']['label'] = 'URL_diela';
  $handler->display->display_options['fields']['field_url_diela_l']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_diela_l']['type'] = 'link_absolute';
  /* Pole: Obsah: Jazyk */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'jazyk';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['text'] = 'sk';
  /* Pole: Obsah: Cesta */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'alias';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_ilustracia_node';
  $handler->display->display_options['fields']['nid_1']['label'] = 'nid_hesla';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilustracia' => 'ilustracia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Text k ilustrácii (field_popis) */
  $handler->display->display_options['filters']['field_popis_value']['id'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['table'] = 'field_data_field_popis';
  $handler->display->display_options['filters']['field_popis_value']['field'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['group'] = 1;
  $handler->display->display_options['filters']['field_popis_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator_id'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['label'] = 'Text k ilustrácii (field_popis)';
  $handler->display->display_options['filters']['field_popis_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['identifier'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Has taxonomy terms (with depth; Simple hierarchical select)';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index)';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  $handler->display->display_options['path'] = 'exim_ilustracie.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['export_na_import'] = array(
    t('Master'),
    t('Exportovať ilustrácie'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Zobrazené @start – @end z @total'),
    t('Názov'),
    t('Text hesla'),
    t('Súbor'),
    t('Lexikálna skupina'),
    t('Atribúty (field_atributy)'),
    t('Export ilustrácie'),
    t('Text k ilustrácii'),
    t('Lexikálna skupina (alt)'),
    t('Export ilustácie - dáta'),
    t('reverse_field_ilustracia_node'),
    t('guid'),
    t('nid'),
    t('nazov'),
    t('kategoria'),
    t('komentar'),
    t('popis'),
    t('nazverejnenie'),
    t('obr_navrh'),
    t('pouzit'),
    t('povod_ilustracie'),
    t('licencia'),
    t('nazov_diela'),
    t('autor_diela'),
    t('autor_foto'),
    t('institucia'),
    t('drzitel_prav'),
    t('URL_licencie'),
    t('URL_autora'),
    t('URL_diela'),
    t('jazyk'),
    t('sk'),
    t('alias'),
    t('nid_hesla'),
    t('Text k ilustrácii (field_popis)'),
    t('Has taxonomy terms (with depth; Simple hierarchical select)'),
    t('Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index)'),
  );
  $export['export_na_import'] = $view;

  $view = new view();
  $view->name = 'oznamy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Oznamy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Oznamy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Kritéria zoradenia: Obsah: Dátum vytvorenia */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Obsah: Zverejnené */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oznam' => 'oznam',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/beliana/oznamy';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Oznamy';
  $handler->display->display_options['menu']['weight'] = '-200';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beliana';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['oznamy'] = array(
    t('Master'),
    t('Oznamy'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Page'),
  );
  $export['oznamy'] = $view;

  $view = new view();
  $view->name = 'tracker';
  $view->description = 'Shows all new activity on system.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tracker';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nedávne príspevky';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'name' => 'name',
    'comment_count' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'timestamp' => 'title',
    'new_comments' => 'comment_count',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '&nbsp;',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'comment_count' => array(
      'sortable' => 1,
      'separator' => '<br />',
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'separator' => '&nbsp;',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
    'new_comments' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Vzťah: Obsah: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Pole: Obsah: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autor';
  /* Pole: Obsah: Počet komentátov */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Odpovedí';
  /* Pole: Obsah: Čas posledného komentára */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Posledný príspevok';
  /* Pole: Obsah: Má nový obsah */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['comments'] = TRUE;
  /* Pole: Obsah: Nové komentáre */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = '';
  $handler->display->display_options['fields']['new_comments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['suffix'] = ' nové';
  /* Kritéria zoradenia: Obsah: Čas posledného komentára */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  /* Contextual filter: Obsah: User posted or commented */
  $handler->display->display_options['arguments']['uid_touch']['id'] = 'uid_touch';
  $handler->display->display_options['arguments']['uid_touch']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_touch']['field'] = 'uid_touch';
  $handler->display->display_options['arguments']['uid_touch']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_touch']['exception']['title'] = 'Všetky';
  $handler->display->display_options['arguments']['uid_touch']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_touch']['title'] = 'Posledné príspevky pre %1';
  $handler->display->display_options['arguments']['uid_touch']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_touch']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_touch']['specify_validation'] = TRUE;
  /* Filter criterion: Obsah: Zverejnené */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tracker';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recent posts';
  $translatables['tracker'] = array(
    t('Master'),
    t('Nedávne príspevky'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('autor'),
    t('Typ'),
    t('Názov'),
    t('Autor'),
    t('Odpovedí'),
    t('.'),
    t(','),
    t('Posledný príspevok'),
    t(' nové'),
    t('Všetky'),
    t('Posledné príspevky pre %1'),
    t('Page'),
  );
  $export['tracker'] = $view;

  $view = new view();
  $view->name = 'upravovatelny';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upravovatelny';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Opraviť lexikálnu skupinu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_text_hesla_editable' => 'field_text_hesla_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_text_hesla_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['id'] = 'field_lexikalna_skupina_editable';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['field'] = 'field_lexikalna_skupina_editable';
  /* Kritéria zoradenia: Obsah: Názov */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Názov';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['id'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['field'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['operator_id'] = 'field_lexikalna_skupina_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['operator'] = 'field_lexikalna_skupina_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['identifier'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['hierarchy'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'starts';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $translatables['upravovatelny'] = array(
    t('Master'),
    t('Opraviť lexikálnu skupinu'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Názov'),
    t('Broken handler field_data_field_lexikalna_skupina.field_lexikalna_skupina_editable'),
    t('Typ'),
    t('Lexikálna skupina'),
    t('Súbor'),
    t('Text hesla'),
  );
  $export['upravovatelny'] = $view;

  $view = new view();
  $view->name = 'v_etky_hesl_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vyhľadať';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Všetky heslá';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '90';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'tex2jax';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'V tomto náhľade sa zobrazujú vydané a aj budúce heslá Beliany. Knižne vydané heslá po <em>Kalgoorlie-Boulder</em> a heslá 8. zväzku po <em>ker</em> majú typ <em>Importované heslo</em>. Heslá od <em>kolemovité</em> (približný začiatok 9. zväzku) majú typ <em>Heslo</em> a budú sa vypracovávať v redakčnom systéme. <br />Heslá s typom <em>Importované heslo</em> môžete navštíviť vždy. Ostatné heslá môžete navštíviť len vtedy, ak má jednu z vašich lexikálnych skupín. Heslá medzi <em>ker</em> a <em>kolemovité</em> nie sú zatiaľ zaradené (budú zaradené po ich vypracovaní). <br />Odkazy na heslá sú aktívne.  Odkazy označené pôvodnou šípkou —> neboli programovo nájdené a bude ich treba vložiť ručne. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Päta: Globálny: Výsledný súhrn */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Zobrazenie po @per_page položkách, @start - @end z @total';
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['description'] = ' ';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['label'] = 'Súbor (field_taxsubor)';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['error_message'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_label'] = 'dddd';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Vyhľadať ilustrácie */
  $handler = $view->new_display('page', 'Vyhľadať ilustrácie', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vyhľadať ilustrácie';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = ' V tomto náhľade sa zobrazujú všetky ilustrácie Beliany.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = '';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Pole: Obsah: Text k ilustrácii */
  $handler->display->display_options['fields']['field_popis']['id'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['table'] = 'field_data_field_popis';
  $handler->display->display_options['fields']['field_popis']['field'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['label'] = '';
  $handler->display->display_options['fields']['field_popis']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Použiť */
  $handler->display->display_options['fields']['field_pouzit']['id'] = 'field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['table'] = 'field_data_field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['field'] = 'field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['label'] = '';
  $handler->display->display_options['fields']['field_pouzit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pouzit']['delta_offset'] = '0';
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['id'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['table'] = 'field_data_field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['field'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['label'] = '';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Kritéria zoradenia: Obsah: Názov */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilustracia' => 'ilustracia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['description'] = ' ';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['label'] = 'Súbor (field_taxsubor)';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['error_message'] = FALSE;
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_label'] = 'dddd';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Obsah: Text k ilustrácii (field_popis) */
  $handler->display->display_options['filters']['field_popis_value']['id'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['table'] = 'field_data_field_popis';
  $handler->display->display_options['filters']['field_popis_value']['field'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['group'] = 1;
  $handler->display->display_options['filters']['field_popis_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator_id'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['label'] = 'Text k ilustrácii';
  $handler->display->display_options['filters']['field_popis_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['identifier'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Lexikálna skupina (alt)';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['type'] = 'textfield';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['path'] = 'vyhladat-ilustracie';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vyhľadať ilustrácie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['v_etky_hesl_'] = array(
    t('Master'),
    t('Všetky heslá'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Krátky popis'),
    t('V tomto náhľade sa zobrazujú vydané a aj budúce heslá Beliany. Knižne vydané heslá po <em>Kalgoorlie-Boulder</em> a heslá 8. zväzku po <em>ker</em> majú typ <em>Importované heslo</em>. Heslá od <em>kolemovité</em> (približný začiatok 9. zväzku) majú typ <em>Heslo</em> a budú sa vypracovávať v redakčnom systéme. <br />Heslá s typom <em>Importované heslo</em> môžete navštíviť vždy. Ostatné heslá môžete navštíviť len vtedy, ak má jednu z vašich lexikálnych skupín. Heslá medzi <em>ker</em> a <em>kolemovité</em> nie sú zatiaľ zaradené (budú zaradené po ich vypracovaní). <br />Odkazy na heslá sú aktívne.  Odkazy označené pôvodnou šípkou —> neboli programovo nájdené a bude ich treba vložiť ručne. '),
    t('Zobrazenie po @per_page položkách, @start - @end z @total'),
    t('Stav'),
    t('Súbor'),
    t(' '),
    t('Súbor (field_taxsubor)'),
    t('Názov'),
    t('dddd'),
    t('Vyhľadať ilustrácie'),
    t(' V tomto náhľade sa zobrazujú všetky ilustrácie Beliany.'),
    t('Komentár/inštrukcie'),
    t('Lexikálna skupina'),
    t('Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.'),
    t('Text k ilustrácii'),
    t('Lexikálna skupina (alt)'),
  );
  $export['v_etky_hesl_'] = $view;

  $view = new view();
  $view->name = 'vsetky_hesla_detaily';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Všetky heslá s detailami';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Všetky heslá';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_na_zoradenie' => 'field_na_zoradenie',
    'nid' => 'nid',
    'type' => 'type',
    'state' => 'state',
    'changed' => 'changed',
    'name' => 'name',
    'field_lexikalna_skupina' => 'field_lexikalna_skupina',
    'name_1' => 'name_1',
    'field_ilustracia' => 'field_ilustracia',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_na_zoradenie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lexikalna_skupina' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ilustracia' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Päta: Globálny: Výsledný súhrn */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Zobrazenie po @per_page položkách, @start - @end z @total';
  /* Vzťah: Content revision: Používateľ */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Vzťah: Obsah: Autor */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Na zoradenie */
  $handler->display->display_options['fields']['field_na_zoradenie']['id'] = 'field_na_zoradenie';
  $handler->display->display_options['fields']['field_na_zoradenie']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['fields']['field_na_zoradenie']['field'] = 'field_na_zoradenie';
  $handler->display->display_options['fields']['field_na_zoradenie']['element_label_colon'] = FALSE;
  /* Pole: Content revision: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Pole: Obsah: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Pole: Obsah: Dátum aktualizácie */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Naposledy upravil';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['hierarchy'] = 1;
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_label'] = 'dddd';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'ilustracia' => 'ilustracia',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator_id'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['label'] = 'Komentár';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['identifier'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );

  /* Display: Všetky heslá - operácie */
  $handler = $view->new_display('page', 'Všetky heslá - operácie', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky heslá - operácie';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'type' => 'type',
    'state' => 'state',
    'changed' => 'changed',
    'name' => 'name',
    'field_lexikalna_skupina' => 'field_lexikalna_skupina',
    'name_1' => 'name_1',
    'field_ilustracia' => 'field_ilustracia',
    'field_vyplatit' => 'field_vyplatit',
    'field_dlzka_autorovho_textu_zad' => 'field_dlzka_autorovho_textu_zad',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lexikalna_skupina' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ilustracia' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vyplatit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dlzka_autorovho_textu_zad' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Operácia';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'ilustracia::field_zdroj_ilustracie' => 'ilustracia::field_zdroj_ilustracie',
          'ilustracia::field_licencia1' => 'ilustracia::field_licencia1',
          'ilustracia::field_meno_autora_diela' => 'ilustracia::field_meno_autora_diela',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Obsah: Dátum aktualizácie */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Naposledy upravil';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['hierarchy'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_label'] = 'dddd';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilustracia' => 'ilustracia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    30 => 0,
    31 => 0,
    27 => 0,
    29 => 0,
    18 => 0,
    10 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
    28 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator_id'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['label'] = 'Komentár';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['identifier'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['path'] = 'vsetky-operacie';
  $handler->display->display_options['menu']['title'] = 'Prehľad';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Všetky ilustrácie - prehľad */
  $handler = $view->new_display('page', 'Všetky ilustrácie - prehľad', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky ilustrácie - prehľad';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    27 => '27',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_obrazok_navrh_' => 'field_obrazok_navrh_',
    'field_obrazok_odkaz' => 'field_obrazok_odkaz',
    'title_1' => 'title_1',
    'field_popis' => 'field_popis',
    'field_lexikalna_skupina_il' => 'field_lexikalna_skupina_il',
    'field_licencia1' => 'field_licencia1',
    'field_zdroj_ilustracie' => 'field_zdroj_ilustracie',
    'state' => 'state',
    'name_1' => 'name_1',
    'name' => 'name',
    'changed' => 'changed',
    'field_subor_ilustracie' => 'field_subor_ilustracie',
    'field_meno_autora_diela' => 'field_meno_autora_diela',
    'field_url_diela_l' => 'field_url_diela_l',
    'field_nazov_diela' => 'field_nazov_diela',
    'field_institucia' => 'field_institucia',
    'field_meno_autora_snimky_diela' => 'field_meno_autora_snimky_diela',
    'field_url_autora_diela_l' => 'field_url_autora_diela_l',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_obrazok_navrh_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_obrazok_odkaz' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_popis' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lexikalna_skupina_il' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_licencia1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zdroj_ilustracie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subor_ilustracie' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meno_autora_diela' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url_diela_l' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nazov_diela' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucia' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meno_autora_snimky_diela' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url_autora_diela_l' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Vzťah: Content revision: Používateľ */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Vzťah: Obsah: Autor */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'ilustracia::field_pouzit' => 'ilustracia::field_pouzit',
          'ilustracia::field_zdroj_ilustracie' => 'ilustracia::field_zdroj_ilustracie',
          'ilustracia::field_lexikalna_skupina_il' => 'ilustracia::field_lexikalna_skupina_il',
          'ilustracia::field_licencia1' => 'ilustracia::field_licencia1',
        ),
      ),
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Content revision: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] / [nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = 'Náhľad';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  /* Pole: Obsah: Obrázok - odkaz (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_odkaz']['id'] = 'field_obrazok_odkaz';
  $handler->display->display_options['fields']['field_obrazok_odkaz']['table'] = 'field_data_field_obrazok_odkaz';
  $handler->display->display_options['fields']['field_obrazok_odkaz']['field'] = 'field_obrazok_odkaz';
  $handler->display->display_options['fields']['field_obrazok_odkaz']['label'] = 'Odkaz';
  $handler->display->display_options['fields']['field_obrazok_odkaz']['type'] = 'beliana_external_image';
  $handler->display->display_options['fields']['field_obrazok_odkaz']['settings'] = array(
    'size' => 'thumbnail',
    'link' => '1',
  );
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  /* Pole: Obsah: Text k ilustrácii */
  $handler->display->display_options['fields']['field_popis']['id'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['table'] = 'field_data_field_popis';
  $handler->display->display_options['fields']['field_popis']['field'] = 'field_popis';
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['id'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['table'] = 'field_data_field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['field'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['delta_offset'] = '0';
  /* Pole: Obsah: Typ CC licencie */
  $handler->display->display_options['fields']['field_licencia1']['id'] = 'field_licencia1';
  $handler->display->display_options['fields']['field_licencia1']['table'] = 'field_data_field_licencia1';
  $handler->display->display_options['fields']['field_licencia1']['field'] = 'field_licencia1';
  $handler->display->display_options['fields']['field_licencia1']['exclude'] = TRUE;
  /* Pole: Obsah: Typ ilustrácie */
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['id'] = 'field_zdroj_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['table'] = 'field_data_field_zdroj_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['field'] = 'field_zdroj_ilustracie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['label'] = 'Typ ilustrácie / CC licencie';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['alter']['text'] = '[field_zdroj_ilustracie] / [field_licencia1]';
  $handler->display->display_options['fields']['field_zdroj_ilustracie']['type'] = 'list_key';
  /* Pole: Obsah: Použiť */
  $handler->display->display_options['fields']['field_pouzit']['id'] = 'field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['table'] = 'field_data_field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['field'] = 'field_pouzit';
  $handler->display->display_options['fields']['field_pouzit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pouzit']['delta_offset'] = '0';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Použiť/Stav';
  $handler->display->display_options['fields']['state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['state']['alter']['text'] = '[field_pouzit] / [state]';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Naposledy upravil / autor';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] / [name_1]';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Pole: Obsah: Dátum aktualizácie */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Pole: Obsah: Súbory ilustrácie */
  $handler->display->display_options['fields']['field_subor_ilustracie']['id'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['table'] = 'field_data_field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['field'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['delta_offset'] = '0';
  /* Pole: Obsah: Meno autora diela */
  $handler->display->display_options['fields']['field_meno_autora_diela']['id'] = 'field_meno_autora_diela';
  $handler->display->display_options['fields']['field_meno_autora_diela']['table'] = 'field_data_field_meno_autora_diela';
  $handler->display->display_options['fields']['field_meno_autora_diela']['field'] = 'field_meno_autora_diela';
  /* Pole: Obsah: URL stránky s obrázkom a údajmi k dielu */
  $handler->display->display_options['fields']['field_url_diela_l']['id'] = 'field_url_diela_l';
  $handler->display->display_options['fields']['field_url_diela_l']['table'] = 'field_data_field_url_diela_l';
  $handler->display->display_options['fields']['field_url_diela_l']['field'] = 'field_url_diela_l';
  $handler->display->display_options['fields']['field_url_diela_l']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_diela_l']['empty'] = '-';
  $handler->display->display_options['fields']['field_url_diela_l']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_diela_l']['type'] = 'link_short';
  /* Pole: Obsah: Názov diela */
  $handler->display->display_options['fields']['field_nazov_diela']['id'] = 'field_nazov_diela';
  $handler->display->display_options['fields']['field_nazov_diela']['table'] = 'field_data_field_nazov_diela';
  $handler->display->display_options['fields']['field_nazov_diela']['field'] = 'field_nazov_diela';
  $handler->display->display_options['fields']['field_nazov_diela']['label'] = 'Názov diela / URL diela';
  $handler->display->display_options['fields']['field_nazov_diela']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nazov_diela']['alter']['text'] = '[field_nazov_diela] / [field_url_diela_l]';
  $handler->display->display_options['fields']['field_nazov_diela']['empty'] = '- / [field_url_diela_l]';
  /* Pole: Obsah: Inštitúcia */
  $handler->display->display_options['fields']['field_institucia']['id'] = 'field_institucia';
  $handler->display->display_options['fields']['field_institucia']['table'] = 'field_data_field_institucia';
  $handler->display->display_options['fields']['field_institucia']['field'] = 'field_institucia';
  /* Pole: Obsah: Meno autora snímky */
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['id'] = 'field_meno_autora_snimky_diela';
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['table'] = 'field_data_field_meno_autora_snimky_diela';
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['field'] = 'field_meno_autora_snimky_diela';
  $handler->display->display_options['fields']['field_meno_autora_snimky_diela']['alter']['alter_text'] = TRUE;
  /* Pole: Obsah: URL autora diela alebo inštitúcie */
  $handler->display->display_options['fields']['field_url_autora_diela_l']['id'] = 'field_url_autora_diela_l';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['table'] = 'field_data_field_url_autora_diela_l';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['field'] = 'field_url_autora_diela_l';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['label'] = 'URL autora, autora snímky, inštitúcie';
  $handler->display->display_options['fields']['field_url_autora_diela_l']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilustracia' => 'ilustracia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['hierarchy'] = 1;
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'publikovane_na_webe' => 'publikovane_na_webe',
    'nova_ilustracia' => 'nova_ilustracia',
    'ilustracia_na_webe' => 'ilustracia_na_webe',
    '_ilustr_cia_u_autora' => '_ilustr_cia_u_autora',
    'ilustracia_u_grafika' => 'ilustracia_u_grafika',
    'ilustracia_u_redaktora' => 'ilustracia_u_redaktora',
    'ilustracia_na_zverejnenie' => 'ilustracia_na_zverejnenie',
    'ilustracia_u_vyst_redaktora_5' => 'ilustracia_u_vyst_redaktora_5',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav ilustrácie';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    27 => 0,
    29 => 0,
    18 => 0,
    10 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
    28 => 0,
  );
  $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['relationship'] = 'reverse_field_ilustracia_node';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'importovane' => 'importovane',
    'importovane_u_jr2' => 'importovane_u_jr2',
    'importovane_u_vr' => 'importovane_u_vr',
    'na_zalomenie' => 'na_zalomenie',
    'publikovane_na_webe' => 'publikovane_na_webe',
    'zverejnene_oprava' => 'zverejnene_oprava',
    'zverejnene_vratene' => 'zverejnene_vratene',
    'na_opakovane_zverejnenie' => 'na_opakovane_zverejnenie',
    'draft' => 'draft',
    'navrhnute_na_vyradenie' => 'navrhnute_na_vyradenie',
    'zaradene' => 'zaradene',
    'u_autora' => 'u_autora',
    'needs_review' => 'needs_review',
    'na_zverejnenie' => 'na_zverejnenie',
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
    'u_vyst_redaktora_3' => 'u_vyst_redaktora_3',
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
    'na_jazykovu_korekturu' => 'na_jazykovu_korekturu',
    'zlucene' => 'zlucene',
    '1_korektura' => '1_korektura',
    '2_korekt_ra' => '2_korekt_ra',
    'u_konzultanta' => 'u_konzultanta',
    'u_jaz_redaktora_2' => 'u_jaz_redaktora_2',
  );
  $handler->display->display_options['filters']['state_1']['group'] = 1;
  $handler->display->display_options['filters']['state_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['operator_id'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['label'] = 'Stav hesla';
  $handler->display->display_options['filters']['state_1']['expose']['operator'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['identifier'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    27 => 0,
    18 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
    28 => 0,
  );
  $handler->display->display_options['filters']['state_1']['expose']['reduce'] = TRUE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_label'] = 'dddd';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  /* Filter criterion: Obsah: Text k ilustrácii (field_popis) */
  $handler->display->display_options['filters']['field_popis_value']['id'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['table'] = 'field_data_field_popis';
  $handler->display->display_options['filters']['field_popis_value']['field'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_popis_value']['group'] = 1;
  $handler->display->display_options['filters']['field_popis_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator_id'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['label'] = 'Text k ilustrácii';
  $handler->display->display_options['filters']['field_popis_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['identifier'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Obsah: User has a revision */
  $handler->display->display_options['filters']['uid_revision']['id'] = 'uid_revision';
  $handler->display->display_options['filters']['uid_revision']['table'] = 'node';
  $handler->display->display_options['filters']['uid_revision']['field'] = 'uid_revision';
  $handler->display->display_options['filters']['uid_revision']['value'] = '';
  $handler->display->display_options['filters']['uid_revision']['group'] = 1;
  $handler->display->display_options['filters']['uid_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_revision']['expose']['operator_id'] = 'uid_revision_op';
  $handler->display->display_options['filters']['uid_revision']['expose']['label'] = ' Upravil niektorú verziu ';
  $handler->display->display_options['filters']['uid_revision']['expose']['operator'] = 'uid_revision_op';
  $handler->display->display_options['filters']['uid_revision']['expose']['identifier'] = 'uid_revision';
  $handler->display->display_options['filters']['uid_revision']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Obsah: Typ ilustrácie (field_zdroj_ilustracie) */
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['id'] = 'field_zdroj_ilustracie_value';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['table'] = 'field_data_field_zdroj_ilustracie';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['field'] = 'field_zdroj_ilustracie_value';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['expose']['operator_id'] = 'field_zdroj_ilustracie_value_op';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['expose']['label'] = 'Typ ilustrácie';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['expose']['operator'] = 'field_zdroj_ilustracie_value_op';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['expose']['identifier'] = 'field_zdroj_ilustracie_value';
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['field_zdroj_ilustracie_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Obsah: Názov (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'reverse_field_ilustracia_node';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Názov hesla';
  $handler->display->display_options['filters']['title_field_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Obsah: Meno autora diela (field_meno_autora_diela) */
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['id'] = 'field_meno_autora_diela_value';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['table'] = 'field_data_field_meno_autora_diela';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['field'] = 'field_meno_autora_diela_value';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['group'] = 1;
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['expose']['operator_id'] = 'field_meno_autora_diela_value_op';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['expose']['label'] = 'Meno autora diela';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['expose']['operator'] = 'field_meno_autora_diela_value_op';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['expose']['identifier'] = 'field_meno_autora_diela_value';
  $handler->display->display_options['filters']['field_meno_autora_diela_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Obsah: Použiť (field_pouzit) */
  $handler->display->display_options['filters']['field_pouzit_value']['id'] = 'field_pouzit_value';
  $handler->display->display_options['filters']['field_pouzit_value']['table'] = 'field_data_field_pouzit';
  $handler->display->display_options['filters']['field_pouzit_value']['field'] = 'field_pouzit_value';
  $handler->display->display_options['filters']['field_pouzit_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pouzit_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['operator_id'] = 'field_pouzit_value_op';
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['label'] = 'Použiť';
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['operator'] = 'field_pouzit_value_op';
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['identifier'] = 'field_pouzit_value';
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pouzit_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['field_pouzit_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Obsah: Meno autora snímky (field_meno_autora_snimky_diela) */
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['id'] = 'field_meno_autora_snimky_diela_value';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['table'] = 'field_data_field_meno_autora_snimky_diela';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['field'] = 'field_meno_autora_snimky_diela_value';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['group'] = 1;
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['expose']['operator_id'] = 'field_meno_autora_snimky_diela_value_op';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['expose']['label'] = 'Meno autora snímky';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['expose']['operator'] = 'field_meno_autora_snimky_diela_value_op';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['expose']['identifier'] = 'field_meno_autora_snimky_diela_value';
  $handler->display->display_options['filters']['field_meno_autora_snimky_diela_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    27 => 0,
    18 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Obsah: Obrázok (návrh/náhľad) (field_obrazok_navrh_:fid) */
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['id'] = 'field_obrazok_navrh__fid';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['field'] = 'field_obrazok_navrh__fid';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['group'] = 1;
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['expose']['operator_id'] = 'field_obrazok_navrh__fid_op';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['expose']['label'] = 'Obrázok (návrh/náhľad)';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['expose']['operator'] = 'field_obrazok_navrh__fid_op';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['expose']['identifier'] = 'field_obrazok_navrh__fid';
  $handler->display->display_options['filters']['field_obrazok_navrh__fid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator_id'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['label'] = 'Komentár/inštrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['identifier'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  /* Filter criterion: Obsah: Inštitúcia (field_institucia) */
  $handler->display->display_options['filters']['field_institucia_value']['id'] = 'field_institucia_value';
  $handler->display->display_options['filters']['field_institucia_value']['table'] = 'field_data_field_institucia';
  $handler->display->display_options['filters']['field_institucia_value']['field'] = 'field_institucia_value';
  $handler->display->display_options['filters']['field_institucia_value']['group'] = 1;
  $handler->display->display_options['filters']['field_institucia_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_institucia_value']['expose']['operator_id'] = 'field_institucia_value_op';
  $handler->display->display_options['filters']['field_institucia_value']['expose']['label'] = 'Inštitúcia';
  $handler->display->display_options['filters']['field_institucia_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_institucia_value']['expose']['operator'] = 'field_institucia_value_op';
  $handler->display->display_options['filters']['field_institucia_value']['expose']['identifier'] = 'field_institucia_value';
  $handler->display->display_options['filters']['field_institucia_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    27 => 0,
    18 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    26 => 0,
  );
  $handler->display->display_options['path'] = 'vsetky-ilustracie-prehlad';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Prehľad ilustrácie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['vsetky_hesla_detaily'] = array(
    t('Master'),
    t('Všetky heslá'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Zobrazenie po @per_page položkách, @start - @end z @total'),
    t('revision user'),
    t('autor'),
    t('Názov'),
    t('Na zoradenie'),
    t('Nid'),
    t('Typ'),
    t('Dátum aktualizácie'),
    t('Naposledy upravil'),
    t('Autor'),
    t('Súbor'),
    t('Lexikálna skupina'),
    t('Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.'),
    t('dddd'),
    t('Komentár'),
    t('Všetky heslá - operácie'),
    t('Operácia'),
    t('Vybrať operáciu'),
    t('Všetky ilustrácie - prehľad'),
    t('Obsah'),
    t('[title] / [nid]'),
    t('Náhľad'),
    t('Odkaz'),
    t('Komentár/inštrukcie'),
    t('Text k ilustrácii'),
    t('Typ CC licencie'),
    t('Typ ilustrácie / CC licencie'),
    t('[field_zdroj_ilustracie] / [field_licencia1]'),
    t('Použiť/Stav'),
    t('[field_pouzit] / [state]'),
    t('Naposledy upravil / autor'),
    t('[name] / [name_1]'),
    t('Súbory ilustrácie'),
    t('Meno autora diela'),
    t('URL stránky s obrázkom a údajmi k dielu'),
    t('-'),
    t('Názov diela / URL diela'),
    t('[field_nazov_diela] / [field_url_diela_l]'),
    t('- / [field_url_diela_l]'),
    t('Inštitúcia'),
    t('Meno autora snímky'),
    t('URL autora, autora snímky, inštitúcie'),
    t('Stav ilustrácie'),
    t('Stav hesla'),
    t(' Upravil niektorú verziu '),
    t('Typ ilustrácie'),
    t('Názov hesla'),
    t('Obrázok (návrh/náhľad)'),
  );
  $export['vsetky_hesla_detaily'] = $view;

  $view = new view();
  $view->name = 'vyhladat_ilustracie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vyhľadať ilustrácie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Všetky ilustrácie';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    18 => '18',
    9 => '9',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'lite';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'V tomto náhľade sa zobrazujú všetky ilustrácie Beliany. Ilustrácie sú okrem hesla <a href="/heslo/hodiny_01">hodiny</a> (zatiaľ) bez obrázkov.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['label'] = '';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['element_label_colon'] = FALSE;
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Text k ilustrácii */
  $handler->display->display_options['fields']['field_popis']['id'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['table'] = 'field_data_field_popis';
  $handler->display->display_options['fields']['field_popis']['field'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['label'] = '';
  $handler->display->display_options['fields']['field_popis']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  /* Pole: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['fields']['field_obrazok_na_zverejnenie_']['id'] = 'field_obrazok_na_zverejnenie_';
  $handler->display->display_options['fields']['field_obrazok_na_zverejnenie_']['table'] = 'field_data_field_obrazok_na_zverejnenie_';
  $handler->display->display_options['fields']['field_obrazok_na_zverejnenie_']['field'] = 'field_obrazok_na_zverejnenie_';
  /* Kritéria zoradenia: Obsah: Názov */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilustracia' => 'ilustracia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['label'] = 'Súbor (field_taxsubor)';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['filters']['field_taxsubor_tid']['hierarchy'] = 1;
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina_il) */
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['id'] = 'field_lexikalna_skupina_il_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['table'] = 'field_data_field_lexikalna_skupina_il';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['field'] = 'field_lexikalna_skupina_il_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['expose']['operator_id'] = 'field_lexikalna_skupina_il_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['expose']['operator'] = 'field_lexikalna_skupina_il_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['expose']['identifier'] = 'field_lexikalna_skupina_il_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_il_tid']['hierarchy'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_label'] = 'dddd';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Text k ilustrácii (field_popis) */
  $handler->display->display_options['filters']['field_popis_value']['id'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['table'] = 'field_data_field_popis';
  $handler->display->display_options['filters']['field_popis_value']['field'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_popis_value']['group'] = 1;
  $handler->display->display_options['filters']['field_popis_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator_id'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['label'] = 'Popis ilustrácie';
  $handler->display->display_options['filters']['field_popis_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_popis_value']['expose']['operator'] = 'field_popis_value_op';
  $handler->display->display_options['filters']['field_popis_value']['expose']['identifier'] = 'field_popis_value';
  $handler->display->display_options['filters']['field_popis_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    18 => 0,
    3 => 0,
    9 => 0,
    17 => 0,
    20 => 0,
  );
  $translatables['vyhladat_ilustracie'] = array(
    t('Master'),
    t('Všetky ilustrácie'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Krátky popis'),
    t('V tomto náhľade sa zobrazujú všetky ilustrácie Beliany. Ilustrácie sú okrem hesla <a href="/heslo/hodiny_01">hodiny</a> (zatiaľ) bez obrázkov.'),
    t('Stav'),
    t('Obrázok (návrh/náhľad)'),
    t('Broken handler field_data_field_obrazok_na_zverejnenie_.field_obrazok_na_zverejnenie_'),
    t('Súbor'),
    t('Súbor (field_taxsubor)'),
    t('Lexikálna skupina'),
    t('Názov'),
    t('dddd'),
    t('Popis ilustrácie'),
  );
  $export['vyhladat_ilustracie'] = $view;

  $view = new view();
  $view->name = 'zlucenie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Zlucenie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zlučovanie';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    13 => '13',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Použiť';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Zoradiť podľa';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Vzostupne';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Zostupne';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Položiek na stránku';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Všetko -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Zobraziť od';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prvá';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ predchádzajúca';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nasledujúca ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'posledná »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beliana_merge' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Kritéria zoradenia: Obsah: Dátum vytvorenia */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'zlucene' => 'zlucene',
    'ukoncenezluene' => 'ukoncenezluene',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/beliana/zlucenie';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Zlučovanie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['zlucenie'] = array(
    t('Master'),
    t('Zlučovanie'),
    t('viac'),
    t('Použiť'),
    t('Reset'),
    t('Zoradiť podľa'),
    t('Vzostupne'),
    t('Zostupne'),
    t('Položiek na stránku'),
    t('- Všetko -'),
    t('Zobraziť od'),
    t('« prvá'),
    t('‹ predchádzajúca'),
    t('nasledujúca ›'),
    t('posledná »'),
    t('Obsah'),
    t('Vybrať operáciu'),
    t('Názov'),
    t('Page'),
  );
  $export['zlucenie'] = $view;

  return $export;
}
