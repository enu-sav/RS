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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = 'V tomto náhľade sa zobrazujú knižne vydané heslá zväzkov 1 - 8 v originálnej forme, v ktorej boli importované';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Pole: Obsah: aheslo text */
  $handler->display->display_options['fields']['field_aheslo_text']['id'] = 'field_aheslo_text';
  $handler->display->display_options['fields']['field_aheslo_text']['table'] = 'field_data_field_aheslo_text';
  $handler->display->display_options['fields']['field_aheslo_text']['field'] = 'field_aheslo_text';
  $handler->display->display_options['fields']['field_aheslo_text']['label'] = '';
  $handler->display->display_options['fields']['field_aheslo_text']['element_label_colon'] = FALSE;
  /* Kritéria zoradenia: Obsah: aheslo zorad (field_aheslo_zorad) */
  $handler->display->display_options['sorts']['field_aheslo_zorad_value']['id'] = 'field_aheslo_zorad_value';
  $handler->display->display_options['sorts']['field_aheslo_zorad_value']['table'] = 'field_data_field_aheslo_zorad';
  $handler->display->display_options['sorts']['field_aheslo_zorad_value']['field'] = 'field_aheslo_zorad_value';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'archivovane_knizne' => 'archivovane_knizne',
  );
  /* Filter criterion: Obsah: Názov (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Názov';
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
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Obsah: aheslo text (field_aheslo_text) */
  $handler->display->display_options['filters']['field_aheslo_text_value']['id'] = 'field_aheslo_text_value';
  $handler->display->display_options['filters']['field_aheslo_text_value']['table'] = 'field_data_field_aheslo_text';
  $handler->display->display_options['filters']['field_aheslo_text_value']['field'] = 'field_aheslo_text_value';
  $handler->display->display_options['filters']['field_aheslo_text_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aheslo_text_value']['expose']['operator_id'] = 'field_aheslo_text_value_op';
  $handler->display->display_options['filters']['field_aheslo_text_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_aheslo_text_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_aheslo_text_value']['expose']['operator'] = 'field_aheslo_text_value_op';
  $handler->display->display_options['filters']['field_aheslo_text_value']['expose']['identifier'] = 'field_aheslo_text_value';
  $handler->display->display_options['filters']['field_aheslo_text_value']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'archivovane';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Archivované';
  $handler->display->display_options['menu']['name'] = 'management';
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
    t('Názov'),
    t('Text hesla'),
    t('Page'),
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

  /* Display: Needs review R */
  $handler = $view->new_display('page', 'Needs review R', 'needs_review_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Na posúdenie (R)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<em>Tu sú zobrazené všetky heslá, ktoré treba posúdiť pred odoslaním výstupnému redaktorovi 1. </em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať autorovi, konzultantovi alebo výstupnému redaktorovi:</b> Na riadku hesla kliknite na jeho názov s odkazom, vyberte požadovaný stav a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['operator'] = 'and';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'needs_review' => 'needs_review',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/na-posudenie-r';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Na posúdenie (R)';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Rozpracované */
  $handler = $view->new_display('page', 'Rozpracované', 'drafts_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rozpracované';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tu sú zobrazené všetky heslá, ktoré máte vypracovať alebo upraviť. 
<ul>
<li><b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>. </li>
<li><b>Ak chcete heslo odoslať redaktorovi:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).</li>
</ul>
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'V tomto zozname sa zobrazujú všetky heslá v stave "U autora", ktoré zodpovedajú zvoleným kritériám. Momentálne im žiadne heslá nevyhovujú.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Používateľ: Aktuálny */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_autora' => 'u_autora',
  );
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  $handler->display->display_options['path'] = 'admin/beliana/drafts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My drafts';
  $handler->display->display_options['menu']['weight'] = '80';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Odovzdané */
  $handler = $view->new_display('page', 'Odovzdané', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Odovzdané heslá';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'name_1' => 'name_1',
    'state' => 'state',
    'name' => 'name',
    'changed' => 'changed',
    'log' => 'log',
    'workbench_moderation_history_link' => 'workbench_moderation_history_link',
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
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workbench_moderation_history_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'V tomto zozname sa zobrazujú všetky heslá, ktoré zodpovedajú vašim oprávneniam a zvoleným kritériám. Momentálne im žiadne heslá nevyhovujú.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Moderation state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['ui_name'] = 'Moderation state';
  $handler->display->display_options['fields']['state']['alter']['text'] = '<div>[state]</div><div>[workbench_moderation_history_link]</div>';
  $handler->display->display_options['fields']['state']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  /* Pole: Obsah: Dátum aktualizácie */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'nid';
  $handler->display->display_options['fields']['changed']['label'] = 'Aktualizované';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Používateľ: Aktuálny */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 1;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'zaradene' => 'zaradene',
    'vyradene' => 'vyradene',
    'u_autora' => 'u_autora',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Workbench Moderation: State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'admin/beliana/odovzdane';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My finished items';
  $handler->display->display_options['menu']['weight'] = '200';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Priradiť autora */
  $handler = $view->new_display('page', 'Priradiť autora', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Priradiť autora a zmeniť stav';
  $handler->display->display_options['display_description'] = 'xx';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tu sú zobrazené všetky heslá v stave <em>Zaradené</em>, ktoré možno priradiť autorom na vypracovanie. Postup pri priraďovaní: 
 1. Zaškrtneme heslá, ktoré chceme priradiť. Potom 
    ⚫ ak má heslo vypracovať autor, klikneme na <strong>Určiť autora a priradiť autorovi</strong>.
    ⚫ ak už máme od autora vypracovaný text a chceme ho do redakčného systému vložiť,  klikneme na <strong>Určiť autora a priradiť redaktorovi</strong>. Správne určenie autora je dôležité, lebo na jeho základe sa určí odmena autorovi.
 2. Meno autora zadáme v druhom kroku do poľa <strong>Vyberte autora...</strong>, čo potvrdíme kliknutím na <strong>Ďalej</strong>, a (po overení) na <strong>Potvrdiť\'</strong>. Po dokončení operácie sa zobrazenie vráti na túto stránku, pričom priradené heslá zo zoznamu zmiznú.
<strong>Upozornenie:</strong> Nastavenie nesprávneho autora môže opraviť len administrátor.
<strong>Upozornenie:</strong> Ak má heslo chybný názov alebo má nesprávnu lexikálnu skupinu, zmenu <a href="admin/beliana/nepriradene">navrhnite</a> ešte pred priradením autora.
<strong>Upozornenie:</strong> Ak redaktor vypracuje heslo sám, tak klikne na <strong>Určiť autora a priradiť redaktorovi</strong> a následne ako autora priradí seba.



';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'nid';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beliana_assign_author' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::beliana_assign_corrector' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  /* Pole: Obsah: Záznam z pôvodného GH */
  $handler->display->display_options['fields']['field_text_z_gh']['id'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['table'] = 'field_data_field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['field'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_text_z_gh']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text_z_gh']['settings'] = array(
    'trim_length' => '80',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'zaradene' => 'zaradene',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
    2 => 0,
    4 => '4',
    1 => 0,
    5 => 0,
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
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator_id'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['label'] = 'Komentár obsahuje';
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
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['path'] = 'admin/beliana/priradit-autora';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Priradiť autora';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Needs review VR1 */
  $handler = $view->new_display('page', 'Needs review VR1', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Na posúdenie VR1';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<em>Tu sú zobrazené všetky heslá, ktoré prišli od redaktorov a ktoré pred odoslaním výstupnému redaktorovi 2 treba posúdiť.</em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať autorovi alebo výstupnému redaktorovi 2:</b> Na riadku hesla kliknite na jeho názov s odkazom, vyberte požadovaný stav a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['filters']['from_state']['id'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['from_state']['field'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['group'] = 1;
  $handler->display->display_options['filters']['from_state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['from_state']['expose']['operator_id'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['label'] = 'Prišlo zo stavu';
  $handler->display->display_options['filters']['from_state']['expose']['operator'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['identifier'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['from_state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'na_zverejnenie' => 'na_zverejnenie',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/na-posudenie-vr1';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Na posúdenie (VR1)';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Needs review VR2 */
  $handler = $view->new_display('page', 'Needs review VR2', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Na posúdenie VR2';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    13 => '13',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/na-posudenie-vr2';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Na posúdenie (VR2)';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Needs review VR3 */
  $handler = $view->new_display('page', 'Needs review VR3', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Na posúdenie VR3';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    14 => '14',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' ⚫ Ak chcete heslo upraviť: Na riadku hesla kliknite na jeho názov s odkazom a potom na Upraviť. Spravte potrebné úpravy a kliknite na Uložiť
 ⚫ Ak chcete heslo odoslať na ďalšie spracovanie: Na riadku hesla kliknite na jeho názov s odkazom, zvoľte nasledujúci stav a potom kliknite na Zmeniť stav. Kliknite na Použiť (vpravo).
<b>Voľba nasledujúceho stavu:</b>
 ⚫ <i>U jaz. redaktora 2</i>: ak zmeny od 1. korektúry boli minimálne, alebo ak už sú doriešené. Heslo ďalej ide k výstupnému redaktorovi 5. 
 ⚫ <i>2. korektúra</i>: ak sa k zmenám od 1. korektúry musia vyjadriť redaktori. Heslo sa vráti naspäť. Pred odoslaním treba v hesle upraviť lexikálnu skupinu na meno toho redaktora, ktorý sa má v 2. korektúre k heslu vyjadriť.
 ⚫ <i>U výst. redaktora 4</i>: ak je potrebné vyjadrenie VR4. Heslo sa vráti naspäť.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['filters']['from_state']['id'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['from_state']['field'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['value'] = array(
    '1_korektura' => '1_korektura',
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
    '2_korekt_ra' => '2_korekt_ra',
  );
  $handler->display->display_options['filters']['from_state']['group'] = 1;
  $handler->display->display_options['filters']['from_state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['from_state']['expose']['operator_id'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['label'] = 'Prišlo zo stavu';
  $handler->display->display_options['filters']['from_state']['expose']['operator'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['identifier'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['from_state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  $handler->display->display_options['filters']['from_state']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_vyst_redaktora_3' => 'u_vyst_redaktora_3',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/na-posudenie-vr3';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Na posúdenie (VR3)';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Needs review VR4 */
  $handler = $view->new_display('page', 'Needs review VR4', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Na posúdenie VR4';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    15 => '15',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/na-posudenie-vr4';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Na posúdenie (VR4)';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Needs review VR5 */
  $handler = $view->new_display('page', 'Needs review VR5', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Na posúdenie VR5';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    16 => '16',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/na-posudenie-vr5';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Na posúdenie (VR5)';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Proofreading JR1 */
  $handler = $view->new_display('page', 'Proofreading JR1', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jazyková redakcia 1';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = '<em>Tu sú zobrazené všetky heslá určené na prvú jazykovú korektúru.</em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať na ďalšie spracovanie:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'na_jazykovu_korekturu' => 'na_jazykovu_korekturu',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/jaz-redakcia-1';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Jazyková redakcia 1';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Proofreading JR2 */
  $handler = $view->new_display('page', 'Proofreading JR2', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jazyková redakcia 2';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    12 => '12',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = '<em>Tu sú zobrazené všetky heslá určené na druhú jazykovú korektúru.</em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať na ďalšie spracovanie:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_jaz_redaktora_2' => 'u_jaz_redaktora_2',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/jaz-redakcia-2';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Jazyková redakcia 2';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Zlúčené */
  $handler = $view->new_display('page', 'Zlúčené', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zlúčené';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    13 => '13',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'zlucene' => 'zlucene',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/zlucene';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Zlúčené';
  $handler->display->display_options['menu']['weight'] = '110';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Zlúčiť */
  $handler = $view->new_display('page', 'Zlúčiť', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zlučovanie VR2';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    13 => '13',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Pred zlúčením si treba overiť, či na zlučované heslá neexistuje odkaz. Ak áno, po zlúčení treba tieto odkazy upraviť.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'nid';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beliana_merge' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Zlúčiť',
    ),
  );
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
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla_1']['id'] = 'field_text_hesla_1';
  $handler->display->display_options['fields']['field_text_hesla_1']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla_1']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_text_hesla_1']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text_hesla_1']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/zlucovanie';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Zlúčiť';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: 1. korektúra */
  $handler = $view->new_display('page', '1. korektúra', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '1. korektúra';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<strong>Upozornenie</strong>: Po zmene stavu na <em>U výst. redaktora 3</em> sa môže zobraziť prázdna stránka s oznamom <em>Na prístup k tomuto obsahu nemáte oprávnenie</em>. Je to normálny stav spôsobený tým, že heslo na korektúru dostal iný redaktor.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Kritéria zoradenia: Workbench Moderation: Stav */
  $handler->display->display_options['sorts']['state']['id'] = 'state';
  $handler->display->display_options['sorts']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['state']['field'] = 'state';
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['relationship'] = 'nid';
  /* Kritéria zoradenia: Obsah: Dátum aktualizácie */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'nid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    '1_korektura' => '1_korektura',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['filters']['from_state']['id'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['from_state']['field'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['value'] = array(
    'draft' => 'draft',
    'zaradene' => 'zaradene',
    'vyradene' => 'vyradene',
    'needs_review' => 'needs_review',
    'na_zverejnenie' => 'na_zverejnenie',
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
    'zlucene' => 'zlucene',
    'ukoncenezluene' => 'ukoncenezluene',
    'u_autora' => 'u_autora',
    'na_zalomenie' => 'na_zalomenie',
    'nova_ilustracia' => 'nova_ilustracia',
    'ilustracia_u_grafika' => 'ilustracia_u_grafika',
    'na_jazykovu_korekturu' => 'na_jazykovu_korekturu',
    'ilustracia_u_redaktora' => 'ilustracia_u_redaktora',
    'ilustracia_na_zverejnenie' => 'ilustracia_na_zverejnenie',
    '1_korektura' => '1_korektura',
    'u_vyst_redaktora_3' => 'u_vyst_redaktora_3',
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
    '2_korekt_ra' => '2_korekt_ra',
    'u_jaz_redaktora_2' => 'u_jaz_redaktora_2',
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
    'published' => 'published',
    'importovane' => 'importovane',
  );
  $handler->display->display_options['filters']['from_state']['expose']['operator_id'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['label'] = 'Prišlo zo stavu';
  $handler->display->display_options['filters']['from_state']['expose']['operator'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['identifier'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  $handler->display->display_options['path'] = 'admin/beliana/korektura1';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = '1. korektúra';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Ilustrácie (R) */
  $handler = $view->new_display('page', 'Ilustrácie (R)', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'IlustracieR';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = 'Obrázok (náhľad)';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Pole: Obsah: Súbory ilustrácie */
  $handler->display->display_options['fields']['field_subor_ilustracie']['id'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['table'] = 'field_data_field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['field'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    702 => '702',
    841 => '841',
    842 => '842',
    843 => '843',
    844 => '844',
    845 => '845',
    846 => '846',
    847 => '847',
    848 => '848',
    849 => '849',
    850 => '850',
    851 => '851',
    852 => '852',
    853 => '853',
    854 => '854',
    855 => '855',
    856 => '856',
    857 => '857',
    858 => '858',
    859 => '859',
    860 => '860',
    861 => '861',
    862 => '862',
    863 => '863',
    864 => '864',
    865 => '865',
    866 => '866',
    867 => '867',
    868 => '868',
    869 => '869',
    870 => '870',
    871 => '871',
    872 => '872',
    873 => '873',
    874 => '874',
    875 => '875',
    876 => '876',
    877 => '877',
    878 => '878',
    879 => '879',
    880 => '880',
    881 => '881',
    882 => '882',
    883 => '883',
    884 => '884',
    885 => '885',
    886 => '886',
    887 => '887',
    888 => '888',
    889 => '889',
    890 => '890',
    891 => '891',
    892 => '892',
    893 => '893',
    894 => '894',
    895 => '895',
    896 => '896',
    897 => '897',
    898 => '898',
    899 => '899',
    900 => '900',
    901 => '901',
    902 => '902',
    903 => '903',
    904 => '904',
    905 => '905',
    906 => '906',
    907 => '907',
    908 => '908',
    909 => '909',
    910 => '910',
    911 => '911',
    912 => '912',
    913 => '913',
    914 => '914',
    915 => '915',
    916 => '916',
    917 => '917',
    918 => '918',
    919 => '919',
    920 => '920',
    921 => '921',
    922 => '922',
    923 => '923',
    924 => '924',
    925 => '925',
    926 => '926',
    927 => '927',
    928 => '928',
    929 => '929',
    930 => '930',
    931 => '931',
    932 => '932',
    933 => '933',
    934 => '934',
    935 => '935',
    936 => '936',
    937 => '937',
    938 => '938',
    939 => '939',
    940 => '940',
    941 => '941',
    942 => '942',
    943 => '943',
    944 => '944',
    945 => '945',
    946 => '946',
    947 => '947',
    948 => '948',
    949 => '949',
    950 => '950',
    951 => '951',
    952 => '952',
    953 => '953',
    954 => '954',
    955 => '955',
    956 => '956',
    957 => '957',
    958 => '958',
    959 => '959',
    960 => '960',
    961 => '961',
    962 => '962',
    963 => '963',
    964 => '964',
    965 => '965',
    966 => '966',
    967 => '967',
    968 => '968',
    969 => '969',
    970 => '970',
    971 => '971',
    972 => '972',
    973 => '973',
    974 => '974',
    975 => '975',
    976 => '976',
    977 => '977',
    978 => '978',
    979 => '979',
    980 => '980',
    981 => '981',
    982 => '982',
    983 => '983',
    984 => '984',
    985 => '985',
    986 => '986',
    987 => '987',
    988 => '988',
    989 => '989',
    990 => '990',
    991 => '991',
    992 => '992',
    993 => '993',
    994 => '994',
    995 => '995',
    996 => '996',
    997 => '997',
    998 => '998',
    999 => '999',
    1000 => '1000',
    1001 => '1001',
    1002 => '1002',
    1003 => '1003',
    1004 => '1004',
    1005 => '1005',
    1006 => '1006',
    1007 => '1007',
    1008 => '1008',
    1009 => '1009',
    1010 => '1010',
    1011 => '1011',
    1012 => '1012',
    1013 => '1013',
    1014 => '1014',
    1015 => '1015',
    1016 => '1016',
    1017 => '1017',
    1018 => '1018',
    1019 => '1019',
    1020 => '1020',
    1021 => '1021',
    1022 => '1022',
    1023 => '1023',
    1024 => '1024',
    1025 => '1025',
    1026 => '1026',
    1027 => '1027',
    1028 => '1028',
    1029 => '1029',
    1030 => '1030',
    1031 => '1031',
    1032 => '1032',
    1033 => '1033',
    1034 => '1034',
    1035 => '1035',
    1036 => '1036',
    1037 => '1037',
    1038 => '1038',
    1039 => '1039',
    1040 => '1040',
    1041 => '1041',
    1042 => '1042',
    1043 => '1043',
    1044 => '1044',
    1045 => '1045',
    1046 => '1046',
    1047 => '1047',
    1048 => '1048',
    1049 => '1049',
    1050 => '1050',
    1051 => '1051',
    1052 => '1052',
    1053 => '1053',
    1054 => '1054',
    1055 => '1055',
    1056 => '1056',
    1057 => '1057',
    1058 => '1058',
    1059 => '1059',
    1060 => '1060',
    1061 => '1061',
    1062 => '1062',
    1063 => '1063',
    1064 => '1064',
    1065 => '1065',
    1066 => '1066',
    1067 => '1067',
    1068 => '1068',
    1069 => '1069',
    1070 => '1070',
    1071 => '1071',
    1072 => '1072',
    1073 => '1073',
    1074 => '1074',
    1075 => '1075',
    1076 => '1076',
    1077 => '1077',
    1078 => '1078',
    1079 => '1079',
    1080 => '1080',
    1081 => '1081',
    1082 => '1082',
    1083 => '1083',
    1084 => '1084',
    1085 => '1085',
    1086 => '1086',
    1087 => '1087',
    1088 => '1088',
    1089 => '1089',
    1090 => '1090',
    1091 => '1091',
    1092 => '1092',
    1093 => '1093',
    1094 => '1094',
    1095 => '1095',
    1096 => '1096',
    1097 => '1097',
    1098 => '1098',
    1099 => '1099',
    1100 => '1100',
    1101 => '1101',
    1102 => '1102',
    1103 => '1103',
    1104 => '1104',
    1105 => '1105',
    1106 => '1106',
    1107 => '1107',
    1108 => '1108',
    1109 => '1109',
    1110 => '1110',
    1111 => '1111',
    1112 => '1112',
    1113 => '1113',
    1114 => '1114',
    1115 => '1115',
    1116 => '1116',
    1117 => '1117',
    1118 => '1118',
    1119 => '1119',
    1120 => '1120',
    1121 => '1121',
    1122 => '1122',
    1123 => '1123',
    1124 => '1124',
    1125 => '1125',
    1126 => '1126',
    1127 => '1127',
    1128 => '1128',
    1129 => '1129',
    1130 => '1130',
    1131 => '1131',
    1132 => '1132',
    1133 => '1133',
    1134 => '1134',
    1135 => '1135',
    1136 => '1136',
    1137 => '1137',
    1138 => '1138',
    1139 => '1139',
    1140 => '1140',
    1141 => '1141',
    1142 => '1142',
    1143 => '1143',
    1144 => '1144',
    1145 => '1145',
    1146 => '1146',
    1147 => '1147',
    1148 => '1148',
    1149 => '1149',
    1150 => '1150',
    1151 => '1151',
    1152 => '1152',
    1153 => '1153',
    1154 => '1154',
    1155 => '1155',
    1156 => '1156',
    1157 => '1157',
    1158 => '1158',
    1159 => '1159',
    1160 => '1160',
    1161 => '1161',
    1162 => '1162',
    1163 => '1163',
    1164 => '1164',
    1165 => '1165',
    1166 => '1166',
    1167 => '1167',
    1168 => '1168',
    1169 => '1169',
    1170 => '1170',
    1171 => '1171',
    1172 => '1172',
    1173 => '1173',
    1174 => '1174',
    1175 => '1175',
    1176 => '1176',
    1177 => '1177',
    1178 => '1178',
    1179 => '1179',
    1180 => '1180',
    1181 => '1181',
    1182 => '1182',
    1183 => '1183',
    1184 => '1184',
    1185 => '1185',
    1186 => '1186',
    1187 => '1187',
    1188 => '1188',
    1189 => '1189',
    1190 => '1190',
    1191 => '1191',
    1192 => '1192',
    1193 => '1193',
    1194 => '1194',
    1195 => '1195',
    1196 => '1196',
    1197 => '1197',
    1198 => '1198',
    1199 => '1199',
    1200 => '1200',
    1201 => '1201',
    1202 => '1202',
    1203 => '1203',
    1204 => '1204',
    1205 => '1205',
    1206 => '1206',
    1207 => '1207',
    1208 => '1208',
    1209 => '1209',
    1210 => '1210',
    1211 => '1211',
    1212 => '1212',
    1213 => '1213',
    1214 => '1214',
    1215 => '1215',
    1216 => '1216',
    1217 => '1217',
    1218 => '1218',
    1219 => '1219',
    1220 => '1220',
    1221 => '1221',
    1222 => '1222',
    1223 => '1223',
    1224 => '1224',
    1225 => '1225',
    1226 => '1226',
    1227 => '1227',
    1228 => '1228',
    1229 => '1229',
    1230 => '1230',
    1231 => '1231',
    1232 => '1232',
    1233 => '1233',
    1234 => '1234',
    1235 => '1235',
    1236 => '1236',
    1237 => '1237',
    1238 => '1238',
    1239 => '1239',
    1240 => '1240',
    1241 => '1241',
    1242 => '1242',
    1243 => '1243',
    1244 => '1244',
    1311 => '1311',
    1246 => '1246',
    1247 => '1247',
    1248 => '1248',
    1249 => '1249',
    1250 => '1250',
    1251 => '1251',
    1252 => '1252',
    1253 => '1253',
    1254 => '1254',
    1255 => '1255',
    1256 => '1256',
    1257 => '1257',
    1258 => '1258',
    1259 => '1259',
    1260 => '1260',
    1261 => '1261',
    1262 => '1262',
    1263 => '1263',
    1264 => '1264',
    1265 => '1265',
    1266 => '1266',
    1267 => '1267',
    1268 => '1268',
    1269 => '1269',
    1270 => '1270',
    1271 => '1271',
    1272 => '1272',
    1273 => '1273',
    1274 => '1274',
    1275 => '1275',
    1276 => '1276',
    1277 => '1277',
    1278 => '1278',
    1279 => '1279',
    1280 => '1280',
    1281 => '1281',
    1282 => '1282',
    1283 => '1283',
    1284 => '1284',
    1285 => '1285',
    1286 => '1286',
    1287 => '1287',
    1288 => '1288',
    1289 => '1289',
    1290 => '1290',
    1291 => '1291',
    1292 => '1292',
    1293 => '1293',
    1294 => '1294',
    1295 => '1295',
    1296 => '1296',
    1297 => '1297',
    1298 => '1298',
    1299 => '1299',
    1300 => '1300',
    1301 => '1301',
    1302 => '1302',
    1303 => '1303',
    1304 => '1304',
    1305 => '1305',
    1306 => '1306',
    1307 => '1307',
    1308 => '1308',
    820 => '820',
  );
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
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'nova_ilustracia' => 'nova_ilustracia',
    'ilustracia_u_redaktora' => 'ilustracia_u_redaktora',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['id'] = 'field_taxsubor_tid_1';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['value'] = array(
    634 => '634',
    635 => '635',
    636 => '636',
    637 => '637',
    638 => '638',
    639 => '639',
    640 => '640',
    641 => '641',
    642 => '642',
    643 => '643',
    644 => '644',
    645 => '645',
    646 => '646',
    647 => '647',
    648 => '648',
    653 => '653',
    654 => '654',
    655 => '655',
    1573 => '1573',
    649 => '649',
    656 => '656',
    657 => '657',
    658 => '658',
    659 => '659',
    660 => '660',
    661 => '661',
    662 => '662',
    663 => '663',
    664 => '664',
    665 => '665',
    666 => '666',
    667 => '667',
    668 => '668',
    669 => '669',
    670 => '670',
    671 => '671',
    672 => '672',
    673 => '673',
    674 => '674',
    675 => '675',
    676 => '676',
    677 => '677',
    678 => '678',
    679 => '679',
    680 => '680',
    681 => '681',
    682 => '682',
    683 => '683',
    684 => '684',
    685 => '685',
    686 => '686',
    687 => '687',
    650 => '650',
    651 => '651',
    652 => '652',
    688 => '688',
    689 => '689',
    690 => '690',
    691 => '691',
    692 => '692',
    693 => '693',
    694 => '694',
    695 => '695',
    696 => '696',
    697 => '697',
    698 => '698',
    699 => '699',
    700 => '700',
    701 => '701',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['vocabulary'] = 'subory';
  $handler->display->display_options['path'] = 'admin/beliana/Ilustracie-r';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Ilustrácie (R)';
  $handler->display->display_options['menu']['weight'] = '245';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Všetky moje heslá */
  $handler = $view->new_display('page', 'Všetky moje heslá', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky moje heslá';
  $handler->display->display_options['display_description'] = 'Všetky heslá súvisiace s používateľom';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tu sú zobrazené všetky heslá, ktoré zodpovedajú lexikálnym skupinám používateľa a sú už v procese spracovávania. Použite filtre na zúženie výberu. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  /* Filter criterion: Používateľ: Názov */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Autor';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'draft' => 'draft',
    'vyradene' => 'vyradene',
    'needs_review' => 'needs_review',
    'na_zverejnenie' => 'na_zverejnenie',
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
    'zlucene' => 'zlucene',
    'ukoncenezluene' => 'ukoncenezluene',
    'u_autora' => 'u_autora',
    'na_zalomenie' => 'na_zalomenie',
    'u_konzultanta' => 'u_konzultanta',
    'publikovane_na_webe' => 'publikovane_na_webe',
    'na_jazykovu_korekturu' => 'na_jazykovu_korekturu',
    'navrhnute_na_vyradenie' => 'navrhnute_na_vyradenie',
    '1_korektura' => '1_korektura',
    'u_vyst_redaktora_3' => 'u_vyst_redaktora_3',
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
    '2_korekt_ra' => '2_korekt_ra',
    'u_jaz_redaktora_2' => 'u_jaz_redaktora_2',
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
  );
  $handler->display->display_options['filters']['state_1']['group'] = 1;
  $handler->display->display_options['filters']['state_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['operator_id'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state_1']['expose']['operator'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['identifier'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['state_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['state_1']['group_info']['label'] = 'Stav';
  $handler->display->display_options['filters']['state_1']['group_info']['identifier'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['state_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  $handler->display->display_options['path'] = 'admin/beliana/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Všetky moje heslá';
  $handler->display->display_options['menu']['weight'] = '240';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Beliana';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Nepriradené heslá */
  $handler = $view->new_display('page', 'Nepriradené heslá', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nepriradené heslá';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
    5 => '5',
    18 => '18',
    4 => '4',
    10 => '10',
    6 => '6',
    13 => '13',
    19 => '19',
    14 => '14',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tu sú zobrazené všetky heslá, ktorým ešte nebol priradený autor (takéto heslá sú v stave <em>Zaradené</em>).
<b>K textu hesla môžete pridať komentár, webový odkaz, prípadne aj celý text</b> (čo neskôr môže pomôcť autorovi):
  ⚫ Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
<b>Môžete navrhnúť zmenu názvu hesla, zmenu lexikálnej skupiny alebo vyradenie hesla</b> (k vášmu návrhu sa vyjadrí správca hesiel):
 ⚫ Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Do poľa <em>Komentár/inštrukcie/návrh/zdôvodnenie </em> napíšte svoj návrh a kliknite na <em>Uložiť </em>
 ⚫ Potom kliknite na <em>Zmeniť stav</em>, zmeňte stav na <em>Navrhnuté na zmenu</em> a kliknite na <em>Použiť</em>.
<strong>Poznámka: </strong>Návrh na vytvorenie nového hesla môžete zadať v položke menu <em>Vytvoriť / Heslo </em> alebo kliknutím <a href="/node/add/heslo">sem</a>. Aj v tomto prípade sa k návrhu najskôr vyjadrí správca hesiel. ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
    20 => 0,
  );
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['relationship'] = 'nid';
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
    21 => 0,
    22 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'zaradene' => 'zaradene',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/nepriradene';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Nepriradené heslá';
  $handler->display->display_options['menu']['weight'] = '250';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Navrhnuté */
  $handler = $view->new_display('page', 'Navrhnuté', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Navrhnuté';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tu sú zobrazené všetky heslá, ktoré boli navrhnuté na zaradenie do Beliany alebo bola navrhnutá zmena ich názvu alebo lexikálnej skupiny.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'navrhnute_na_vyradenie' => 'navrhnute_na_vyradenie',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/navrhnute';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Navrhnuté';
  $handler->display->display_options['menu']['weight'] = '300';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Vyradené */
  $handler = $view->new_display('page', 'Vyradené', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vyradené';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Tu sú zobrazené všetky heslá, ktoré boli navrhnuté na zaradenie do Beliany alebo bola navrhnutá zmena ich názvu alebo lexikálnej skupiny.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    11 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'vyradene' => 'vyradene',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/vyradene';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Vyradené';
  $handler->display->display_options['menu']['weight'] = '300';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: 2. korektúra */
  $handler = $view->new_display('page', '2. korektúra', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2. korektúra';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<strong>Upozornenie</strong>: Po zmene stavu na <em>U výst. redaktora 3</em> sa môže zobraziť prázdna stránka s oznamom <em>Na prístup k tomuto obsahu nemáte oprávnenie</em>. Je to normálny stav spôsobený tým, že heslo na korektúru dostal iný redaktor.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Kritéria zoradenia: Workbench Moderation: Stav */
  $handler->display->display_options['sorts']['state']['id'] = 'state';
  $handler->display->display_options['sorts']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['state']['field'] = 'state';
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['relationship'] = 'nid';
  /* Kritéria zoradenia: Obsah: Dátum aktualizácie */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'nid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    '2_korekt_ra' => '2_korekt_ra',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['filters']['from_state']['id'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['from_state']['field'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['value'] = array(
    'draft' => 'draft',
    'zaradene' => 'zaradene',
    'vyradene' => 'vyradene',
    'needs_review' => 'needs_review',
    'na_zverejnenie' => 'na_zverejnenie',
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
    'zlucene' => 'zlucene',
    'ukoncenezluene' => 'ukoncenezluene',
    'u_autora' => 'u_autora',
    'na_zalomenie' => 'na_zalomenie',
    'nova_ilustracia' => 'nova_ilustracia',
    'ilustracia_u_grafika' => 'ilustracia_u_grafika',
    'na_jazykovu_korekturu' => 'na_jazykovu_korekturu',
    'ilustracia_u_redaktora' => 'ilustracia_u_redaktora',
    'ilustracia_na_zverejnenie' => 'ilustracia_na_zverejnenie',
    '1_korektura' => '1_korektura',
    'u_vyst_redaktora_3' => 'u_vyst_redaktora_3',
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
    '2_korekt_ra' => '2_korekt_ra',
    'u_jaz_redaktora_2' => 'u_jaz_redaktora_2',
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
    'published' => 'published',
    'importovane' => 'importovane',
  );
  $handler->display->display_options['filters']['from_state']['expose']['operator_id'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['label'] = 'Prišlo zo stavu';
  $handler->display->display_options['filters']['from_state']['expose']['operator'] = 'from_state_op';
  $handler->display->display_options['filters']['from_state']['expose']['identifier'] = 'from_state';
  $handler->display->display_options['filters']['from_state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    10 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  $handler->display->display_options['path'] = 'admin/beliana/korektura2';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = '2. korektúra';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Konzultácia */
  $handler = $view->new_display('page', 'Konzultácia', 'page_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Konzultácia';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    20 => '20',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<em>Tu sú zobrazené všetky heslá, ktoré ste dostali na konzultáciu. </em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať redaktorovi:</b> Na riadku hesla kliknite na jeho názov s odkazom, vyberte požadovaný stav a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Workbench Moderation: Prišlo zo stavu */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Content revision: Správa záznamu */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    14 => 0,
    15 => 0,
    16 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    17 => 0,
    18 => 0,
  );
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['operator'] = 'and';
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
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'u_konzultanta' => 'u_konzultanta',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/beliana/konzultacia';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Konzultácia';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Ilustrácie (G) */
  $handler = $view->new_display('page', 'Ilustrácie (G)', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'IlustracieG';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    18 => '18',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = 'Obrázok (náhľad)';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Pole: Obsah: Súbory ilustrácie */
  $handler->display->display_options['fields']['field_subor_ilustracie']['id'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['table'] = 'field_data_field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['field'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    702 => '702',
    841 => '841',
    842 => '842',
    843 => '843',
    844 => '844',
    845 => '845',
    846 => '846',
    847 => '847',
    848 => '848',
    849 => '849',
    850 => '850',
    851 => '851',
    852 => '852',
    853 => '853',
    854 => '854',
    855 => '855',
    856 => '856',
    857 => '857',
    858 => '858',
    859 => '859',
    860 => '860',
    861 => '861',
    862 => '862',
    863 => '863',
    864 => '864',
    865 => '865',
    866 => '866',
    867 => '867',
    868 => '868',
    869 => '869',
    870 => '870',
    871 => '871',
    872 => '872',
    873 => '873',
    874 => '874',
    875 => '875',
    876 => '876',
    877 => '877',
    878 => '878',
    879 => '879',
    880 => '880',
    881 => '881',
    882 => '882',
    883 => '883',
    884 => '884',
    885 => '885',
    886 => '886',
    887 => '887',
    888 => '888',
    889 => '889',
    890 => '890',
    891 => '891',
    892 => '892',
    893 => '893',
    894 => '894',
    895 => '895',
    896 => '896',
    897 => '897',
    898 => '898',
    899 => '899',
    900 => '900',
    901 => '901',
    902 => '902',
    903 => '903',
    904 => '904',
    905 => '905',
    906 => '906',
    907 => '907',
    908 => '908',
    909 => '909',
    910 => '910',
    911 => '911',
    912 => '912',
    913 => '913',
    914 => '914',
    915 => '915',
    916 => '916',
    917 => '917',
    918 => '918',
    919 => '919',
    920 => '920',
    921 => '921',
    922 => '922',
    923 => '923',
    924 => '924',
    925 => '925',
    926 => '926',
    927 => '927',
    928 => '928',
    929 => '929',
    930 => '930',
    931 => '931',
    932 => '932',
    933 => '933',
    934 => '934',
    935 => '935',
    936 => '936',
    937 => '937',
    938 => '938',
    939 => '939',
    940 => '940',
    941 => '941',
    942 => '942',
    943 => '943',
    944 => '944',
    945 => '945',
    946 => '946',
    947 => '947',
    948 => '948',
    949 => '949',
    950 => '950',
    951 => '951',
    952 => '952',
    953 => '953',
    954 => '954',
    955 => '955',
    956 => '956',
    957 => '957',
    958 => '958',
    959 => '959',
    960 => '960',
    961 => '961',
    962 => '962',
    963 => '963',
    964 => '964',
    965 => '965',
    966 => '966',
    967 => '967',
    968 => '968',
    969 => '969',
    970 => '970',
    971 => '971',
    972 => '972',
    973 => '973',
    974 => '974',
    975 => '975',
    976 => '976',
    977 => '977',
    978 => '978',
    979 => '979',
    980 => '980',
    981 => '981',
    982 => '982',
    983 => '983',
    984 => '984',
    985 => '985',
    986 => '986',
    987 => '987',
    988 => '988',
    989 => '989',
    990 => '990',
    991 => '991',
    992 => '992',
    993 => '993',
    994 => '994',
    995 => '995',
    996 => '996',
    997 => '997',
    998 => '998',
    999 => '999',
    1000 => '1000',
    1001 => '1001',
    1002 => '1002',
    1003 => '1003',
    1004 => '1004',
    1005 => '1005',
    1006 => '1006',
    1007 => '1007',
    1008 => '1008',
    1009 => '1009',
    1010 => '1010',
    1011 => '1011',
    1012 => '1012',
    1013 => '1013',
    1014 => '1014',
    1015 => '1015',
    1016 => '1016',
    1017 => '1017',
    1018 => '1018',
    1019 => '1019',
    1020 => '1020',
    1021 => '1021',
    1022 => '1022',
    1023 => '1023',
    1024 => '1024',
    1025 => '1025',
    1026 => '1026',
    1027 => '1027',
    1028 => '1028',
    1029 => '1029',
    1030 => '1030',
    1031 => '1031',
    1032 => '1032',
    1033 => '1033',
    1034 => '1034',
    1035 => '1035',
    1036 => '1036',
    1037 => '1037',
    1038 => '1038',
    1039 => '1039',
    1040 => '1040',
    1041 => '1041',
    1042 => '1042',
    1043 => '1043',
    1044 => '1044',
    1045 => '1045',
    1046 => '1046',
    1047 => '1047',
    1048 => '1048',
    1049 => '1049',
    1050 => '1050',
    1051 => '1051',
    1052 => '1052',
    1053 => '1053',
    1054 => '1054',
    1055 => '1055',
    1056 => '1056',
    1057 => '1057',
    1058 => '1058',
    1059 => '1059',
    1060 => '1060',
    1061 => '1061',
    1062 => '1062',
    1063 => '1063',
    1064 => '1064',
    1065 => '1065',
    1066 => '1066',
    1067 => '1067',
    1068 => '1068',
    1069 => '1069',
    1070 => '1070',
    1071 => '1071',
    1072 => '1072',
    1073 => '1073',
    1074 => '1074',
    1075 => '1075',
    1076 => '1076',
    1077 => '1077',
    1078 => '1078',
    1079 => '1079',
    1080 => '1080',
    1081 => '1081',
    1082 => '1082',
    1083 => '1083',
    1084 => '1084',
    1085 => '1085',
    1086 => '1086',
    1087 => '1087',
    1088 => '1088',
    1089 => '1089',
    1090 => '1090',
    1091 => '1091',
    1092 => '1092',
    1093 => '1093',
    1094 => '1094',
    1095 => '1095',
    1096 => '1096',
    1097 => '1097',
    1098 => '1098',
    1099 => '1099',
    1100 => '1100',
    1101 => '1101',
    1102 => '1102',
    1103 => '1103',
    1104 => '1104',
    1105 => '1105',
    1106 => '1106',
    1107 => '1107',
    1108 => '1108',
    1109 => '1109',
    1110 => '1110',
    1111 => '1111',
    1112 => '1112',
    1113 => '1113',
    1114 => '1114',
    1115 => '1115',
    1116 => '1116',
    1117 => '1117',
    1118 => '1118',
    1119 => '1119',
    1120 => '1120',
    1121 => '1121',
    1122 => '1122',
    1123 => '1123',
    1124 => '1124',
    1125 => '1125',
    1126 => '1126',
    1127 => '1127',
    1128 => '1128',
    1129 => '1129',
    1130 => '1130',
    1131 => '1131',
    1132 => '1132',
    1133 => '1133',
    1134 => '1134',
    1135 => '1135',
    1136 => '1136',
    1137 => '1137',
    1138 => '1138',
    1139 => '1139',
    1140 => '1140',
    1141 => '1141',
    1142 => '1142',
    1143 => '1143',
    1144 => '1144',
    1145 => '1145',
    1146 => '1146',
    1147 => '1147',
    1148 => '1148',
    1149 => '1149',
    1150 => '1150',
    1151 => '1151',
    1152 => '1152',
    1153 => '1153',
    1154 => '1154',
    1155 => '1155',
    1156 => '1156',
    1157 => '1157',
    1158 => '1158',
    1159 => '1159',
    1160 => '1160',
    1161 => '1161',
    1162 => '1162',
    1163 => '1163',
    1164 => '1164',
    1165 => '1165',
    1166 => '1166',
    1167 => '1167',
    1168 => '1168',
    1169 => '1169',
    1170 => '1170',
    1171 => '1171',
    1172 => '1172',
    1173 => '1173',
    1174 => '1174',
    1175 => '1175',
    1176 => '1176',
    1177 => '1177',
    1178 => '1178',
    1179 => '1179',
    1180 => '1180',
    1181 => '1181',
    1182 => '1182',
    1183 => '1183',
    1184 => '1184',
    1185 => '1185',
    1186 => '1186',
    1187 => '1187',
    1188 => '1188',
    1189 => '1189',
    1190 => '1190',
    1191 => '1191',
    1192 => '1192',
    1193 => '1193',
    1194 => '1194',
    1195 => '1195',
    1196 => '1196',
    1197 => '1197',
    1198 => '1198',
    1199 => '1199',
    1200 => '1200',
    1201 => '1201',
    1202 => '1202',
    1203 => '1203',
    1204 => '1204',
    1205 => '1205',
    1206 => '1206',
    1207 => '1207',
    1208 => '1208',
    1209 => '1209',
    1210 => '1210',
    1211 => '1211',
    1212 => '1212',
    1213 => '1213',
    1214 => '1214',
    1215 => '1215',
    1216 => '1216',
    1217 => '1217',
    1218 => '1218',
    1219 => '1219',
    1220 => '1220',
    1221 => '1221',
    1222 => '1222',
    1223 => '1223',
    1224 => '1224',
    1225 => '1225',
    1226 => '1226',
    1227 => '1227',
    1228 => '1228',
    1229 => '1229',
    1230 => '1230',
    1231 => '1231',
    1232 => '1232',
    1233 => '1233',
    1234 => '1234',
    1235 => '1235',
    1236 => '1236',
    1237 => '1237',
    1238 => '1238',
    1239 => '1239',
    1240 => '1240',
    1241 => '1241',
    1242 => '1242',
    1243 => '1243',
    1244 => '1244',
    1311 => '1311',
    1246 => '1246',
    1247 => '1247',
    1248 => '1248',
    1249 => '1249',
    1250 => '1250',
    1251 => '1251',
    1252 => '1252',
    1253 => '1253',
    1254 => '1254',
    1255 => '1255',
    1256 => '1256',
    1257 => '1257',
    1258 => '1258',
    1259 => '1259',
    1260 => '1260',
    1261 => '1261',
    1262 => '1262',
    1263 => '1263',
    1264 => '1264',
    1265 => '1265',
    1266 => '1266',
    1267 => '1267',
    1268 => '1268',
    1269 => '1269',
    1270 => '1270',
    1271 => '1271',
    1272 => '1272',
    1273 => '1273',
    1274 => '1274',
    1275 => '1275',
    1276 => '1276',
    1277 => '1277',
    1278 => '1278',
    1279 => '1279',
    1280 => '1280',
    1281 => '1281',
    1282 => '1282',
    1283 => '1283',
    1284 => '1284',
    1285 => '1285',
    1286 => '1286',
    1287 => '1287',
    1288 => '1288',
    1289 => '1289',
    1290 => '1290',
    1291 => '1291',
    1292 => '1292',
    1293 => '1293',
    1294 => '1294',
    1295 => '1295',
    1296 => '1296',
    1297 => '1297',
    1298 => '1298',
    1299 => '1299',
    1300 => '1300',
    1301 => '1301',
    1302 => '1302',
    1303 => '1303',
    1304 => '1304',
    1305 => '1305',
    1306 => '1306',
    1307 => '1307',
    1308 => '1308',
    820 => '820',
  );
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
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'nova_ilustracia' => 'nova_ilustracia',
    'ilustracia_u_grafika' => 'ilustracia_u_grafika',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['id'] = 'field_taxsubor_tid_1';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['value'] = array(
    634 => '634',
    635 => '635',
    636 => '636',
    637 => '637',
    638 => '638',
    639 => '639',
    640 => '640',
    641 => '641',
    642 => '642',
    643 => '643',
    644 => '644',
    645 => '645',
    646 => '646',
    647 => '647',
    648 => '648',
    653 => '653',
    654 => '654',
    655 => '655',
    1573 => '1573',
    649 => '649',
    656 => '656',
    657 => '657',
    658 => '658',
    659 => '659',
    660 => '660',
    661 => '661',
    662 => '662',
    663 => '663',
    664 => '664',
    665 => '665',
    666 => '666',
    667 => '667',
    668 => '668',
    669 => '669',
    670 => '670',
    671 => '671',
    672 => '672',
    673 => '673',
    674 => '674',
    675 => '675',
    676 => '676',
    677 => '677',
    678 => '678',
    679 => '679',
    680 => '680',
    681 => '681',
    682 => '682',
    683 => '683',
    684 => '684',
    685 => '685',
    686 => '686',
    687 => '687',
    650 => '650',
    651 => '651',
    652 => '652',
    688 => '688',
    689 => '689',
    690 => '690',
    691 => '691',
    692 => '692',
    693 => '693',
    694 => '694',
    695 => '695',
    696 => '696',
    697 => '697',
    698 => '698',
    699 => '699',
    700 => '700',
    701 => '701',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['vocabulary'] = 'subory';
  $handler->display->display_options['path'] = 'admin/beliana/Ilustracie-g';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Ilustrácie (G)';
  $handler->display->display_options['menu']['weight'] = '245';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Všetky moje ilustrácie */
  $handler = $view->new_display('page', 'Všetky moje ilustrácie', 'page_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky moje ilustrácie';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    18 => '18',
    20 => '20',
    4 => '4',
    6 => '6',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Podmienkam zobrazenia nezodpovedajú žiadne položky.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Súbor */
  $handler->display->display_options['fields']['field_taxsubor']['id'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['field'] = 'field_taxsubor';
  $handler->display->display_options['fields']['field_taxsubor']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_taxsubor']['type'] = 'taxonomy_term_reference_plain';
  /* Pole: Workbench Access: Lexikálna skupina */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Lex. skupina';
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = 'Obrázok (náhľad)';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Pole: Obsah: Súbory ilustrácie */
  $handler->display->display_options['fields']['field_subor_ilustracie']['id'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['table'] = 'field_data_field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['field'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    702 => '702',
    841 => '841',
    842 => '842',
    843 => '843',
    844 => '844',
    845 => '845',
    846 => '846',
    847 => '847',
    848 => '848',
    849 => '849',
    850 => '850',
    851 => '851',
    852 => '852',
    853 => '853',
    854 => '854',
    855 => '855',
    856 => '856',
    857 => '857',
    858 => '858',
    859 => '859',
    860 => '860',
    861 => '861',
    862 => '862',
    863 => '863',
    864 => '864',
    865 => '865',
    866 => '866',
    867 => '867',
    868 => '868',
    869 => '869',
    870 => '870',
    871 => '871',
    872 => '872',
    873 => '873',
    874 => '874',
    875 => '875',
    876 => '876',
    877 => '877',
    878 => '878',
    879 => '879',
    880 => '880',
    881 => '881',
    882 => '882',
    883 => '883',
    884 => '884',
    885 => '885',
    886 => '886',
    887 => '887',
    888 => '888',
    889 => '889',
    890 => '890',
    891 => '891',
    892 => '892',
    893 => '893',
    894 => '894',
    895 => '895',
    896 => '896',
    897 => '897',
    898 => '898',
    899 => '899',
    900 => '900',
    901 => '901',
    902 => '902',
    903 => '903',
    904 => '904',
    905 => '905',
    906 => '906',
    907 => '907',
    908 => '908',
    909 => '909',
    910 => '910',
    911 => '911',
    912 => '912',
    913 => '913',
    914 => '914',
    915 => '915',
    916 => '916',
    917 => '917',
    918 => '918',
    919 => '919',
    920 => '920',
    921 => '921',
    922 => '922',
    923 => '923',
    924 => '924',
    925 => '925',
    926 => '926',
    927 => '927',
    928 => '928',
    929 => '929',
    930 => '930',
    931 => '931',
    932 => '932',
    933 => '933',
    934 => '934',
    935 => '935',
    936 => '936',
    937 => '937',
    938 => '938',
    939 => '939',
    940 => '940',
    941 => '941',
    942 => '942',
    943 => '943',
    944 => '944',
    945 => '945',
    946 => '946',
    947 => '947',
    948 => '948',
    949 => '949',
    950 => '950',
    951 => '951',
    952 => '952',
    953 => '953',
    954 => '954',
    955 => '955',
    956 => '956',
    957 => '957',
    958 => '958',
    959 => '959',
    960 => '960',
    961 => '961',
    962 => '962',
    963 => '963',
    964 => '964',
    965 => '965',
    966 => '966',
    967 => '967',
    968 => '968',
    969 => '969',
    970 => '970',
    971 => '971',
    972 => '972',
    973 => '973',
    974 => '974',
    975 => '975',
    976 => '976',
    977 => '977',
    978 => '978',
    979 => '979',
    980 => '980',
    981 => '981',
    982 => '982',
    983 => '983',
    984 => '984',
    985 => '985',
    986 => '986',
    987 => '987',
    988 => '988',
    989 => '989',
    990 => '990',
    991 => '991',
    992 => '992',
    993 => '993',
    994 => '994',
    995 => '995',
    996 => '996',
    997 => '997',
    998 => '998',
    999 => '999',
    1000 => '1000',
    1001 => '1001',
    1002 => '1002',
    1003 => '1003',
    1004 => '1004',
    1005 => '1005',
    1006 => '1006',
    1007 => '1007',
    1008 => '1008',
    1009 => '1009',
    1010 => '1010',
    1011 => '1011',
    1012 => '1012',
    1013 => '1013',
    1014 => '1014',
    1015 => '1015',
    1016 => '1016',
    1017 => '1017',
    1018 => '1018',
    1019 => '1019',
    1020 => '1020',
    1021 => '1021',
    1022 => '1022',
    1023 => '1023',
    1024 => '1024',
    1025 => '1025',
    1026 => '1026',
    1027 => '1027',
    1028 => '1028',
    1029 => '1029',
    1030 => '1030',
    1031 => '1031',
    1032 => '1032',
    1033 => '1033',
    1034 => '1034',
    1035 => '1035',
    1036 => '1036',
    1037 => '1037',
    1038 => '1038',
    1039 => '1039',
    1040 => '1040',
    1041 => '1041',
    1042 => '1042',
    1043 => '1043',
    1044 => '1044',
    1045 => '1045',
    1046 => '1046',
    1047 => '1047',
    1048 => '1048',
    1049 => '1049',
    1050 => '1050',
    1051 => '1051',
    1052 => '1052',
    1053 => '1053',
    1054 => '1054',
    1055 => '1055',
    1056 => '1056',
    1057 => '1057',
    1058 => '1058',
    1059 => '1059',
    1060 => '1060',
    1061 => '1061',
    1062 => '1062',
    1063 => '1063',
    1064 => '1064',
    1065 => '1065',
    1066 => '1066',
    1067 => '1067',
    1068 => '1068',
    1069 => '1069',
    1070 => '1070',
    1071 => '1071',
    1072 => '1072',
    1073 => '1073',
    1074 => '1074',
    1075 => '1075',
    1076 => '1076',
    1077 => '1077',
    1078 => '1078',
    1079 => '1079',
    1080 => '1080',
    1081 => '1081',
    1082 => '1082',
    1083 => '1083',
    1084 => '1084',
    1085 => '1085',
    1086 => '1086',
    1087 => '1087',
    1088 => '1088',
    1089 => '1089',
    1090 => '1090',
    1091 => '1091',
    1092 => '1092',
    1093 => '1093',
    1094 => '1094',
    1095 => '1095',
    1096 => '1096',
    1097 => '1097',
    1098 => '1098',
    1099 => '1099',
    1100 => '1100',
    1101 => '1101',
    1102 => '1102',
    1103 => '1103',
    1104 => '1104',
    1105 => '1105',
    1106 => '1106',
    1107 => '1107',
    1108 => '1108',
    1109 => '1109',
    1110 => '1110',
    1111 => '1111',
    1112 => '1112',
    1113 => '1113',
    1114 => '1114',
    1115 => '1115',
    1116 => '1116',
    1117 => '1117',
    1118 => '1118',
    1119 => '1119',
    1120 => '1120',
    1121 => '1121',
    1122 => '1122',
    1123 => '1123',
    1124 => '1124',
    1125 => '1125',
    1126 => '1126',
    1127 => '1127',
    1128 => '1128',
    1129 => '1129',
    1130 => '1130',
    1131 => '1131',
    1132 => '1132',
    1133 => '1133',
    1134 => '1134',
    1135 => '1135',
    1136 => '1136',
    1137 => '1137',
    1138 => '1138',
    1139 => '1139',
    1140 => '1140',
    1141 => '1141',
    1142 => '1142',
    1143 => '1143',
    1144 => '1144',
    1145 => '1145',
    1146 => '1146',
    1147 => '1147',
    1148 => '1148',
    1149 => '1149',
    1150 => '1150',
    1151 => '1151',
    1152 => '1152',
    1153 => '1153',
    1154 => '1154',
    1155 => '1155',
    1156 => '1156',
    1157 => '1157',
    1158 => '1158',
    1159 => '1159',
    1160 => '1160',
    1161 => '1161',
    1162 => '1162',
    1163 => '1163',
    1164 => '1164',
    1165 => '1165',
    1166 => '1166',
    1167 => '1167',
    1168 => '1168',
    1169 => '1169',
    1170 => '1170',
    1171 => '1171',
    1172 => '1172',
    1173 => '1173',
    1174 => '1174',
    1175 => '1175',
    1176 => '1176',
    1177 => '1177',
    1178 => '1178',
    1179 => '1179',
    1180 => '1180',
    1181 => '1181',
    1182 => '1182',
    1183 => '1183',
    1184 => '1184',
    1185 => '1185',
    1186 => '1186',
    1187 => '1187',
    1188 => '1188',
    1189 => '1189',
    1190 => '1190',
    1191 => '1191',
    1192 => '1192',
    1193 => '1193',
    1194 => '1194',
    1195 => '1195',
    1196 => '1196',
    1197 => '1197',
    1198 => '1198',
    1199 => '1199',
    1200 => '1200',
    1201 => '1201',
    1202 => '1202',
    1203 => '1203',
    1204 => '1204',
    1205 => '1205',
    1206 => '1206',
    1207 => '1207',
    1208 => '1208',
    1209 => '1209',
    1210 => '1210',
    1211 => '1211',
    1212 => '1212',
    1213 => '1213',
    1214 => '1214',
    1215 => '1215',
    1216 => '1216',
    1217 => '1217',
    1218 => '1218',
    1219 => '1219',
    1220 => '1220',
    1221 => '1221',
    1222 => '1222',
    1223 => '1223',
    1224 => '1224',
    1225 => '1225',
    1226 => '1226',
    1227 => '1227',
    1228 => '1228',
    1229 => '1229',
    1230 => '1230',
    1231 => '1231',
    1232 => '1232',
    1233 => '1233',
    1234 => '1234',
    1235 => '1235',
    1236 => '1236',
    1237 => '1237',
    1238 => '1238',
    1239 => '1239',
    1240 => '1240',
    1241 => '1241',
    1242 => '1242',
    1243 => '1243',
    1244 => '1244',
    1311 => '1311',
    1246 => '1246',
    1247 => '1247',
    1248 => '1248',
    1249 => '1249',
    1250 => '1250',
    1251 => '1251',
    1252 => '1252',
    1253 => '1253',
    1254 => '1254',
    1255 => '1255',
    1256 => '1256',
    1257 => '1257',
    1258 => '1258',
    1259 => '1259',
    1260 => '1260',
    1261 => '1261',
    1262 => '1262',
    1263 => '1263',
    1264 => '1264',
    1265 => '1265',
    1266 => '1266',
    1267 => '1267',
    1268 => '1268',
    1269 => '1269',
    1270 => '1270',
    1271 => '1271',
    1272 => '1272',
    1273 => '1273',
    1274 => '1274',
    1275 => '1275',
    1276 => '1276',
    1277 => '1277',
    1278 => '1278',
    1279 => '1279',
    1280 => '1280',
    1281 => '1281',
    1282 => '1282',
    1283 => '1283',
    1284 => '1284',
    1285 => '1285',
    1286 => '1286',
    1287 => '1287',
    1288 => '1288',
    1289 => '1289',
    1290 => '1290',
    1291 => '1291',
    1292 => '1292',
    1293 => '1293',
    1294 => '1294',
    1295 => '1295',
    1296 => '1296',
    1297 => '1297',
    1298 => '1298',
    1299 => '1299',
    1300 => '1300',
    1301 => '1301',
    1302 => '1302',
    1303 => '1303',
    1304 => '1304',
    1305 => '1305',
    1306 => '1306',
    1307 => '1307',
    1308 => '1308',
    820 => '820',
  );
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
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'nova_ilustracia' => 'nova_ilustracia',
    '_ilustr_cia_u_autora' => '_ilustr_cia_u_autora',
    'ilustracia_u_grafika' => 'ilustracia_u_grafika',
    'ilustracia_u_redaktora' => 'ilustracia_u_redaktora',
    'ilustracia_na_zverejnenie' => 'ilustracia_na_zverejnenie',
    'ilustracia_u_vyst_redaktora_5' => 'ilustracia_u_vyst_redaktora_5',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['id'] = 'field_taxsubor_tid_1';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['field'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['value'] = array(
    634 => '634',
    635 => '635',
    636 => '636',
    637 => '637',
    638 => '638',
    639 => '639',
    640 => '640',
    641 => '641',
    642 => '642',
    643 => '643',
    644 => '644',
    645 => '645',
    646 => '646',
    647 => '647',
    648 => '648',
    653 => '653',
    654 => '654',
    655 => '655',
    1573 => '1573',
    649 => '649',
    656 => '656',
    657 => '657',
    658 => '658',
    659 => '659',
    660 => '660',
    661 => '661',
    662 => '662',
    663 => '663',
    664 => '664',
    665 => '665',
    666 => '666',
    667 => '667',
    668 => '668',
    669 => '669',
    670 => '670',
    671 => '671',
    672 => '672',
    673 => '673',
    674 => '674',
    675 => '675',
    676 => '676',
    677 => '677',
    678 => '678',
    679 => '679',
    680 => '680',
    681 => '681',
    682 => '682',
    683 => '683',
    684 => '684',
    685 => '685',
    686 => '686',
    687 => '687',
    650 => '650',
    651 => '651',
    652 => '652',
    688 => '688',
    689 => '689',
    690 => '690',
    691 => '691',
    692 => '692',
    693 => '693',
    694 => '694',
    695 => '695',
    696 => '696',
    697 => '697',
    698 => '698',
    699 => '699',
    700 => '700',
    701 => '701',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid_1']['vocabulary'] = 'subory';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'nova_ilustracia' => 'nova_ilustracia',
    '_ilustr_cia_u_autora' => '_ilustr_cia_u_autora',
    'ilustracia_u_grafika' => 'ilustracia_u_grafika',
    'ilustracia_u_redaktora' => 'ilustracia_u_redaktora',
    'ilustracia_na_zverejnenie' => 'ilustracia_na_zverejnenie',
    'ilustracia_u_vyst_redaktora_5' => 'ilustracia_u_vyst_redaktora_5',
  );
  $handler->display->display_options['filters']['state_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['operator_id'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state_1']['expose']['operator'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['identifier'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['state_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/beliana/Ilustracie-vr';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Všetky moje ilustrácie';
  $handler->display->display_options['menu']['weight'] = '245';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
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
    t('Needs review R'),
    t('Na posúdenie (R)'),
    t('viac'),
    t('<em>Tu sú zobrazené všetky heslá, ktoré treba posúdiť pred odoslaním výstupnému redaktorovi 1. </em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať autorovi, konzultantovi alebo výstupnému redaktorovi:</b> Na riadku hesla kliknite na jeho názov s odkazom, vyberte požadovaný stav a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).'),
    t('Podmienkam zobrazenia nezodpovedajú žiadne položky.'),
    t('Súbor'),
    t('Prišlo zo stavu'),
    t('Rozpracované'),
    t('Tu sú zobrazené všetky heslá, ktoré máte vypracovať alebo upraviť. 
<ul>
<li><b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>. </li>
<li><b>Ak chcete heslo odoslať redaktorovi:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).</li>
</ul>
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. '),
    t('V tomto zozname sa zobrazujú všetky heslá v stave "U autora", ktoré zodpovedajú zvoleným kritériám. Momentálne im žiadne heslá nevyhovujú.'),
    t('Lexikálna skupina'),
    t('Odovzdané'),
    t('Odovzdané heslá'),
    t('V tomto zozname sa zobrazujú všetky heslá, ktoré zodpovedajú vašim oprávneniam a zvoleným kritériám. Momentálne im žiadne heslá nevyhovujú.'),
    t('<div>[state]</div><div>[workbench_moderation_history_link]</div>'),
    t('Aktualizované'),
    t('Workbench Moderation: State'),
    t('Priradiť autora'),
    t('Priradiť autora a zmeniť stav'),
    t('xx'),
    t('Tu sú zobrazené všetky heslá v stave <em>Zaradené</em>, ktoré možno priradiť autorom na vypracovanie. Postup pri priraďovaní: 
 1. Zaškrtneme heslá, ktoré chceme priradiť. Potom 
    ⚫ ak má heslo vypracovať autor, klikneme na <strong>Určiť autora a priradiť autorovi</strong>.
    ⚫ ak už máme od autora vypracovaný text a chceme ho do redakčného systému vložiť,  klikneme na <strong>Určiť autora a priradiť redaktorovi</strong>. Správne určenie autora je dôležité, lebo na jeho základe sa určí odmena autorovi.
 2. Meno autora zadáme v druhom kroku do poľa <strong>Vyberte autora...</strong>, čo potvrdíme kliknutím na <strong>Ďalej</strong>, a (po overení) na <strong>Potvrdiť\'</strong>. Po dokončení operácie sa zobrazenie vráti na túto stránku, pričom priradené heslá zo zoznamu zmiznú.
<strong>Upozornenie:</strong> Nastavenie nesprávneho autora môže opraviť len administrátor.
<strong>Upozornenie:</strong> Ak má heslo chybný názov alebo má nesprávnu lexikálnu skupinu, zmenu <a href="admin/beliana/nepriradene">navrhnite</a> ešte pred priradením autora.
<strong>Upozornenie:</strong> Ak redaktor vypracuje heslo sám, tak klikne na <strong>Určiť autora a priradiť redaktorovi</strong> a následne ako autora priradí seba.



'),
    t('Obsah'),
    t('Vybrať operáciu'),
    t('Záznam z pôvodného GH'),
    t('Komentár obsahuje'),
    t('Needs review VR1'),
    t('Na posúdenie VR1'),
    t('<em>Tu sú zobrazené všetky heslá, ktoré prišli od redaktorov a ktoré pred odoslaním výstupnému redaktorovi 2 treba posúdiť.</em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať autorovi alebo výstupnému redaktorovi 2:</b> Na riadku hesla kliknite na jeho názov s odkazom, vyberte požadovaný stav a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. '),
    t('Needs review VR2'),
    t('Na posúdenie VR2'),
    t('Needs review VR3'),
    t('Na posúdenie VR3'),
    t(' ⚫ Ak chcete heslo upraviť: Na riadku hesla kliknite na jeho názov s odkazom a potom na Upraviť. Spravte potrebné úpravy a kliknite na Uložiť
 ⚫ Ak chcete heslo odoslať na ďalšie spracovanie: Na riadku hesla kliknite na jeho názov s odkazom, zvoľte nasledujúci stav a potom kliknite na Zmeniť stav. Kliknite na Použiť (vpravo).
<b>Voľba nasledujúceho stavu:</b>
 ⚫ <i>U jaz. redaktora 2</i>: ak zmeny od 1. korektúry boli minimálne, alebo ak už sú doriešené. Heslo ďalej ide k výstupnému redaktorovi 5. 
 ⚫ <i>2. korektúra</i>: ak sa k zmenám od 1. korektúry musia vyjadriť redaktori. Heslo sa vráti naspäť. Pred odoslaním treba v hesle upraviť lexikálnu skupinu na meno toho redaktora, ktorý sa má v 2. korektúre k heslu vyjadriť.
 ⚫ <i>U výst. redaktora 4</i>: ak je potrebné vyjadrenie VR4. Heslo sa vráti naspäť.'),
    t('Needs review VR4'),
    t('Na posúdenie VR4'),
    t('Needs review VR5'),
    t('Na posúdenie VR5'),
    t('Proofreading JR1'),
    t('Jazyková redakcia 1'),
    t('<em>Tu sú zobrazené všetky heslá určené na prvú jazykovú korektúru.</em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať na ďalšie spracovanie:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. '),
    t('Proofreading JR2'),
    t('Jazyková redakcia 2'),
    t('<em>Tu sú zobrazené všetky heslá určené na druhú jazykovú korektúru.</em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať na ďalšie spracovanie:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).
<strong>Upozornenie</strong>: Ak počas úpravy kliknete na inú možnosť (napr. Odkazujúce heslá), na úpravu sa vrátite stlačením šípky doľava prehliadača a nie opätovne na Upraviť. Inak sa neuložené zmeny stratia. '),
    t('Zlúčené'),
    t('Zlúčiť'),
    t('Zlučovanie VR2'),
    t('Pred zlúčením si treba overiť, či na zlučované heslá neexistuje odkaz. Ak áno, po zlúčení treba tieto odkazy upraviť.'),
    t('Text hesla'),
    t('1. korektúra'),
    t('<strong>Upozornenie</strong>: Po zmene stavu na <em>U výst. redaktora 3</em> sa môže zobraziť prázdna stránka s oznamom <em>Na prístup k tomuto obsahu nemáte oprávnenie</em>. Je to normálny stav spôsobený tým, že heslo na korektúru dostal iný redaktor.'),
    t('Ilustrácie (R)'),
    t('IlustracieR'),
    t('Obrázok (náhľad)'),
    t('Súbory ilustrácie'),
    t('Všetky moje heslá'),
    t('Všetky heslá súvisiace s používateľom'),
    t('Tu sú zobrazené všetky heslá, ktoré zodpovedajú lexikálnym skupinám používateľa a sú už v procese spracovávania. Použite filtre na zúženie výberu. '),
    t('Nepriradené heslá'),
    t('Tu sú zobrazené všetky heslá, ktorým ešte nebol priradený autor (takéto heslá sú v stave <em>Zaradené</em>).
<b>K textu hesla môžete pridať komentár, webový odkaz, prípadne aj celý text</b> (čo neskôr môže pomôcť autorovi):
  ⚫ Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
<b>Môžete navrhnúť zmenu názvu hesla, zmenu lexikálnej skupiny alebo vyradenie hesla</b> (k vášmu návrhu sa vyjadrí správca hesiel):
 ⚫ Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Do poľa <em>Komentár/inštrukcie/návrh/zdôvodnenie </em> napíšte svoj návrh a kliknite na <em>Uložiť </em>
 ⚫ Potom kliknite na <em>Zmeniť stav</em>, zmeňte stav na <em>Navrhnuté na zmenu</em> a kliknite na <em>Použiť</em>.
<strong>Poznámka: </strong>Návrh na vytvorenie nového hesla môžete zadať v položke menu <em>Vytvoriť / Heslo </em> alebo kliknutím <a href="/node/add/heslo">sem</a>. Aj v tomto prípade sa k návrhu najskôr vyjadrí správca hesiel. '),
    t('Navrhnuté'),
    t('Tu sú zobrazené všetky heslá, ktoré boli navrhnuté na zaradenie do Beliany alebo bola navrhnutá zmena ich názvu alebo lexikálnej skupiny.'),
    t('Vyradené'),
    t('2. korektúra'),
    t('Konzultácia'),
    t('<em>Tu sú zobrazené všetky heslá, ktoré ste dostali na konzultáciu. </em>
 ⚫ <b>Ak chcete heslo upraviť:</b> Na riadku hesla kliknite na jeho názov s odkazom a potom na <em>Upraviť</em>. Spravte potrebné úpravy a kliknite na <em>Uložiť </em>
 ⚫ <b>Ak chcete heslo odoslať redaktorovi:</b> Na riadku hesla kliknite na jeho názov s odkazom, vyberte požadovaný stav a potom kliknite na <em>Zmeniť stav</em>. Kliknite na <em>Použiť</em> (vpravo).'),
    t('Ilustrácie (G)'),
    t('IlustracieG'),
    t('Všetky moje ilustrácie'),
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
  /* Pole: Obsah: Text hesla */
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    634 => '634',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['required'] = TRUE;
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
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['value'] = array(
    634 => '634',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['required'] = TRUE;
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
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
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
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Content revision: Dátum aktualizácie */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
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
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
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
  /* Filter criterion: Obsah: Atribúty (field_atributy) */
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

  /* Display: Export importované */
  $handler = $view->new_display('page', 'Export importované', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovať vydané heslá';
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Atribúty (field_atributy) */
  $handler->display->display_options['filters']['field_atributy_value']['id'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['filters']['field_atributy_value']['field'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['group'] = 1;
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
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'export-vydane';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export vydané';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Export importované - dáta */
  $handler = $view->new_display('views_data_export', 'Export importované - dáta', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovať vydané heslá';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'guid';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'nazov';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['label'] = 'kategoria';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['label'] = 'komentar';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = 'text';
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_hesla']['type'] = 'text_plain';
  /* Pole: Obsah: Dátum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'datum';
  $handler->display->display_options['fields']['field_datum']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_datum']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datum']['separator'] = ';';
  /* Pole: Obsah: Ilustrácie */
  $handler->display->display_options['fields']['field_ilustracia']['id'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['field'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['label'] = 'ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ilustracia']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_ilustracia']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_ilustracia']['delta_offset'] = '0';
  /* Pole: Obsah: Atribúty */
  $handler->display->display_options['fields']['field_atributy']['id'] = 'field_atributy';
  $handler->display->display_options['fields']['field_atributy']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['fields']['field_atributy']['field'] = 'field_atributy';
  $handler->display->display_options['fields']['field_atributy']['label'] = 'atrib';
  $handler->display->display_options['fields']['field_atributy']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Erráta */
  $handler->display->display_options['fields']['field_errta']['id'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['table'] = 'field_data_field_errta';
  $handler->display->display_options['fields']['field_errta']['field'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['label'] = 'errata';
  $handler->display->display_options['fields']['field_errta']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Cesta */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'alias';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Atribúty (field_atributy) */
  $handler->display->display_options['filters']['field_atributy_value']['id'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['filters']['field_atributy_value']['field'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['group'] = 1;
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
  /* Filter criterion: Obsah: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
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
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index)';
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
  $handler->display->display_options['path'] = 'exim_importovane.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Pole: Nefunkčný/chýbajúci ovládač */
  $handler->display->display_options['fields']['field_d_tum_prevzatia']['id'] = 'field_d_tum_prevzatia';
  $handler->display->display_options['fields']['field_d_tum_prevzatia']['table'] = 'field_data_field_d_tum_prevzatia';
  $handler->display->display_options['fields']['field_d_tum_prevzatia']['field'] = 'field_d_tum_prevzatia';
  $handler->display->display_options['fields']['field_d_tum_prevzatia']['label'] = 'datum_prevzatia';
  $handler->display->display_options['fields']['field_d_tum_prevzatia']['alter']['strip_tags'] = TRUE;
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
  /* Pole: Obsah: URL diela */
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
  /* Filter criterion: Obsah: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Text';
  $handler->display->display_options['filters']['body_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['body_value']['group_info']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['body_value']['group_info']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['body_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  /* Filter criterion: Obsah: Súbor (field_taxsubor) */
  $handler->display->display_options['filters']['field_taxsubor_tid']['id'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['table'] = 'field_data_field_taxsubor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['field'] = 'field_taxsubor_tid';
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

  /* Display: Export heslo GH */
  $handler = $view->new_display('page', 'Export heslo GH', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovať heslo GH';
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  $handler->display->display_options['path'] = 'export-heslo-gh';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export heslo GH';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Export heslo GH - dáta */
  $handler = $view->new_display('views_data_export', 'Export heslo GH - dáta', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovať heslo GH';
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
  /* Pole: Content revision: Dátum aktualizácie */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'nazov';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['label'] = 'kategoria';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['label'] = 'komentar';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = 'text';
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_hesla']['type'] = 'text_plain';
  /* Pole: Obsah: Záznam z pôvodného GH */
  $handler->display->display_options['fields']['field_text_z_gh']['id'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['table'] = 'field_data_field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['field'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['label'] = 'povodnyZaznamZGH';
  /* Pole: Obsah: Dátum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'datum';
  $handler->display->display_options['fields']['field_datum']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_datum']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datum']['separator'] = ';';
  /* Pole: Obsah: Ilustrácie */
  $handler->display->display_options['fields']['field_ilustracia']['id'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['field'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['label'] = 'ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ilustracia']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_ilustracia']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_ilustracia']['delta_offset'] = '0';
  /* Pole: Obsah: Na zoradenie */
  $handler->display->display_options['fields']['field_na_zoradenie']['id'] = 'field_na_zoradenie';
  $handler->display->display_options['fields']['field_na_zoradenie']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['fields']['field_na_zoradenie']['field'] = 'field_na_zoradenie';
  $handler->display->display_options['fields']['field_na_zoradenie']['label'] = 'nazovzorad';
  /* Pole: Obsah: Cesta */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'alias';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Atribúty */
  $handler->display->display_options['fields']['field_atributy']['id'] = 'field_atributy';
  $handler->display->display_options['fields']['field_atributy']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['fields']['field_atributy']['field'] = 'field_atributy';
  $handler->display->display_options['fields']['field_atributy']['label'] = 'atrib';
  $handler->display->display_options['fields']['field_atributy']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Vyplatenie odmeny */
  $handler->display->display_options['fields']['field_vyplatit']['id'] = 'field_vyplatit';
  $handler->display->display_options['fields']['field_vyplatit']['table'] = 'field_data_field_vyplatit';
  $handler->display->display_options['fields']['field_vyplatit']['field'] = 'field_vyplatit';
  $handler->display->display_options['fields']['field_vyplatit']['label'] = 'vyplatenieOdmeny';
  /* Pole: Obsah: Erráta */
  $handler->display->display_options['fields']['field_errta']['id'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['table'] = 'field_data_field_errta';
  $handler->display->display_options['fields']['field_errta']['field'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['label'] = 'errata';
  $handler->display->display_options['fields']['field_errta']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['path'] = 'exim_heslo_gh.csv';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
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
    t('Názov'),
    t('Dátum aktualizácie'),
    t('Text hesla'),
    t('Súbor'),
    t('Lexikálna skupina'),
    t('Atribúty (field_atributy)'),
    t('Export importované'),
    t('Exportovať vydané heslá'),
    t('Lexikálna skupina (alt)'),
    t('Export importované - dáta'),
    t('guid'),
    t('nazov'),
    t('kategoria'),
    t('komentar'),
    t('text'),
    t('datum'),
    t('ilustracia'),
    t('atrib'),
    t('errata'),
    t('alias'),
    t('Has taxonomy terms (with depth; Simple hierarchical select)'),
    t('Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index)'),
    t('Export ilustrácie'),
    t('Export ilustácie - dáta'),
    t('nid'),
    t('popis'),
    t('nazverejnenie'),
    t('obr_navrh'),
    t('pouzit'),
    t('povod_ilustracie'),
    t('licencia'),
    t('nazov_diela'),
    t('datum_prevzatia'),
    t('institucia'),
    t('drzitel_prav'),
    t('URL_licencie'),
    t('URL_autora'),
    t('URL_diela'),
    t('jazyk'),
    t('sk'),
    t('Text'),
    t('Export heslo GH'),
    t('Exportovať heslo GH'),
    t('Export heslo GH - dáta'),
    t('Nid'),
    t('povodnyZaznamZGH'),
    t('nazovzorad'),
    t('vyplatenieOdmeny'),
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
  /* Pole: Obsah: Lexikálna skupina (editable) */
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
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
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
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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

  /* Display: Upravovatelny */
  $handler = $view->new_display('page', 'Upravovatelny', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'upravovatelny';

  /* Display: Upravovatelny2 */
  $handler = $view->new_display('page', 'Upravovatelny2', 'page_1');
  $handler->display->display_options['path'] = 'upravovatelny2';

  /* Display: Opraviť LS 1 */
  $handler = $view->new_display('page', 'Opraviť LS 1', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opraviť lexikálnu skupinu 1';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    10 => '10',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_lexikalna_skupina_editable' => 'field_lexikalna_skupina_editable',
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
    'field_lexikalna_skupina_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' V zozname hesiel v poli "Lexikálna skupina" vpravo zmažte nesprávnu lexikálnu skupinu a vložte správnu (napíšte niekoľko písmen jej názvu a vyberte zo zoznamu) alebo vložte lexikálnu skupinu Neurčená. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = 'Text hesla (skrátený)';
  $handler->display->display_options['fields']['field_text_hesla']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_text_hesla']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina (editable) */
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['id'] = 'field_lexikalna_skupina_editable';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['field'] = 'field_lexikalna_skupina_editable';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['suppress_description'] = 0;
  $handler->display->display_options['path'] = 'opravit-ls1';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Opraviť LS 1 heslo';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Opraviť text hesla 1 */
  $handler = $view->new_display('page', 'Opraviť text hesla 1', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opraviť text hesla 1';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_lexikalna_skupina_editable' => 'field_lexikalna_skupina_editable',
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
    'field_lexikalna_skupina_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Upravte text a potom uložte kliknutím na "Uložiť" vľavo dolu. Ak treba, na ďalšie heslá prejdete kliknutím na odkaz "nasledujúca". ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Text hesla (editable) */
  $handler->display->display_options['fields']['field_text_hesla_editable']['id'] = 'field_text_hesla_editable';
  $handler->display->display_options['fields']['field_text_hesla_editable']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla_editable']['field'] = 'field_text_hesla_editable';
  $handler->display->display_options['fields']['field_text_hesla_editable']['label'] = 'Text hesla';
  $handler->display->display_options['fields']['field_text_hesla_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_text_hesla_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_text_hesla_editable']['suppress_description'] = 0;
  /* Pole: Obsah: Komentár/inštrukcie (editable) */
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['id'] = 'field_komentar_instrukcie_editable';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['field'] = 'field_komentar_instrukcie_editable';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['label'] = 'Komentár/inštrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
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
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['operator'] = 'contains';
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
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['path'] = 'opravit-text1';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Opraviť text 1 heslo';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Opraviť text hesla 3 */
  $handler = $view->new_display('page', 'Opraviť text hesla 3', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opraviť text hesla 3';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
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
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_lexikalna_skupina_editable' => 'field_lexikalna_skupina_editable',
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
    'field_lexikalna_skupina_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Upravte text a potom uložte kliknutím na "Uložiť" vľavo dolu. Ak treba, na ďalšie heslá prejdete kliknutím na odkaz "nasledujúca". ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Text hesla (editable) */
  $handler->display->display_options['fields']['field_text_hesla_editable']['id'] = 'field_text_hesla_editable';
  $handler->display->display_options['fields']['field_text_hesla_editable']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla_editable']['field'] = 'field_text_hesla_editable';
  $handler->display->display_options['fields']['field_text_hesla_editable']['label'] = 'Text hesla';
  $handler->display->display_options['fields']['field_text_hesla_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_text_hesla_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_text_hesla_editable']['suppress_description'] = 0;
  /* Pole: Obsah: Komentár/inštrukcie (editable) */
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['id'] = 'field_komentar_instrukcie_editable';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['field'] = 'field_komentar_instrukcie_editable';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['label'] = 'Komentár/inštrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_komentar_instrukcie_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
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
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
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
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['operator'] = 'contains';
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
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['path'] = 'opravit-text3';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Opraviť text 3 hesla';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Opraviť LS 3 */
  $handler = $view->new_display('page', 'Opraviť LS 3', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opraviť lexikálnu skupinu 3';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    10 => '10',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
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
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_lexikalna_skupina_editable' => 'field_lexikalna_skupina_editable',
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
    'field_lexikalna_skupina_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' V zozname hesiel v poli "Lexikálna skupina" vpravo zmažte nesprávnu lexikálnu skupinu a vložte správnu (napíšte niekoľko písmen jej názvu a vyberte zo zoznamu) alebo vložte lexikálnu skupinu Neurčená. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = 'Text hesla (skrátený)';
  $handler->display->display_options['fields']['field_text_hesla']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_text_hesla']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina (editable) */
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['id'] = 'field_lexikalna_skupina_editable';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['field'] = 'field_lexikalna_skupina_editable';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_lexikalna_skupina_editable']['suppress_description'] = 0;
  $handler->display->display_options['path'] = 'opravit-ls3';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Opraviť LS 3 hesla';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
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
    t('Lexikálna skupina (editable)'),
    t('Lexikálna skupina'),
    t('Súbor'),
    t('Text hesla'),
    t('Upravovatelny'),
    t('Upravovatelny2'),
    t('Opraviť LS 1'),
    t('Opraviť lexikálnu skupinu 1'),
    t(' V zozname hesiel v poli "Lexikálna skupina" vpravo zmažte nesprávnu lexikálnu skupinu a vložte správnu (napíšte niekoľko písmen jej názvu a vyberte zo zoznamu) alebo vložte lexikálnu skupinu Neurčená. '),
    t('Text hesla (skrátený)'),
    t('Opraviť text hesla 1'),
    t('Upravte text a potom uložte kliknutím na "Uložiť" vľavo dolu. Ak treba, na ďalšie heslá prejdete kliknutím na odkaz "nasledujúca". '),
    t('Komentár/inštrukcie'),
    t('Opraviť text hesla 3'),
    t('Opraviť LS 3'),
    t('Opraviť lexikálnu skupinu 3'),
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
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
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['label'] = '';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Záznam z pôvodného GH */
  $handler->display->display_options['fields']['field_text_z_gh']['id'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['table'] = 'field_data_field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['field'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['label'] = '';
  $handler->display->display_options['fields']['field_text_z_gh']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_z_gh']['type'] = 'text_plain';
  /* Pole: Obsah: Erráta */
  $handler->display->display_options['fields']['field_errta']['id'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['table'] = 'field_data_field_errta';
  $handler->display->display_options['fields']['field_errta']['field'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_errta']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_errta']['hide_empty'] = TRUE;
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = '';
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['id'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['field'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['operator_id'] = 'field_lexikalna_skupina_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['description'] = 'Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny';
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
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['error_message'] = FALSE;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_label'] = 'ddddd';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Obsah: Erráta (field_errta) */
  $handler->display->display_options['filters']['field_errta_value']['id'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['table'] = 'field_data_field_errta';
  $handler->display->display_options['filters']['field_errta_value']['field'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_errta_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator_id'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['label'] = 'Erráta';
  $handler->display->display_options['filters']['field_errta_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['identifier'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['expose']['remember_roles'] = array(
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

  /* Display: Vyhľadať */
  $handler = $view->new_display('page', 'Vyhľadať', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vyhľadať';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'V tomto náhľade sa zobrazujú vydané a aj budúce heslá Beliany. Knižne vydané heslá po <em>kokpit</em> majú typ <em>Importované heslo</em>. Heslá od <em>koks</em> majú typ <em>Heslo</em> a budú sa vypracovávať v redakčnom systéme. <br />Heslá s typom <em>Importované heslo</em> môžete upraviť vždy. Ostatné heslá môžete upraviť len vtedy, ak má jednu z vašich lexikálnych skupín. Odkazy na heslá sú aktívne.  Odkazy označené pôvodnou šípkou —> neboli programovo nájdené a treba ich vložiť ručne. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['label'] = '';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['element_label_type'] = 'strong';
  /* Pole: Obsah: Záznam z pôvodného GH */
  $handler->display->display_options['fields']['field_text_z_gh']['id'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['table'] = 'field_data_field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['field'] = 'field_text_z_gh';
  $handler->display->display_options['fields']['field_text_z_gh']['label'] = '';
  $handler->display->display_options['fields']['field_text_z_gh']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_z_gh']['type'] = 'text_plain';
  /* Pole: Obsah: Erráta */
  $handler->display->display_options['fields']['field_errta']['id'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['table'] = 'field_data_field_errta';
  $handler->display->display_options['fields']['field_errta']['field'] = 'field_errta';
  $handler->display->display_options['fields']['field_errta']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_errta']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_errta']['hide_empty'] = TRUE;
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = '';
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_label'] = 'ddddd';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Obsah: Erráta (field_errta) */
  $handler->display->display_options['filters']['field_errta_value']['id'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['table'] = 'field_data_field_errta';
  $handler->display->display_options['filters']['field_errta_value']['field'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_errta_value']['group'] = 1;
  $handler->display->display_options['filters']['field_errta_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator_id'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['label'] = 'Erráta';
  $handler->display->display_options['filters']['field_errta_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['identifier'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['id'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['operator_id'] = 'field_komentar_instrukcie_value_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value']['expose']['label'] = 'Komentár obsahuje';
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
    23 => 0,
  );
  /* Filter criterion: Obsah: Komentár/inštrukcie (field_komentar_instrukcie) */
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['id'] = 'field_komentar_instrukcie_value_1';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['field'] = 'field_komentar_instrukcie_value';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['expose']['operator_id'] = 'field_komentar_instrukcie_value_1_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['expose']['label'] = 'Komentár neobsahuje';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['expose']['operator'] = 'field_komentar_instrukcie_value_1_op';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['expose']['identifier'] = 'field_komentar_instrukcie_value_1';
  $handler->display->display_options['filters']['field_komentar_instrukcie_value_1']['expose']['remember_roles'] = array(
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
    'ukoncenezluene' => 'ukoncenezluene',
    'len_vyplatit' => 'len_vyplatit',
  );
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['path'] = 'vyhladat';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vyhľadať';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Opraviť importované */
  $handler = $view->new_display('page', 'Opraviť importované', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opraviť importované';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'V tomto náhľade možno importované (vydané) heslá prehľadávať aj na základe atribútov. Atribút je nejaká vlastnosť, ktorá bola zistená pri konverzii z doc súborov (bez diakritiky): \'instrukciepalo\' a \'instrukciesemancik\' (inštrukcie pre typografa), \'image\' (v texte má byť vložený obrázok), \'tabulka\' , \'matematika\', ghPriblizne\' a \'ghMultiPriblizne\' (lexikálnu skupinu hesla nebolo na základe informácií z generálneho heslára možné určiť jednoznačne). ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_label'] = 'ddddd';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
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
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['id'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['field'] = 'field_lexikalna_skupina_tid';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['value'] = '';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['operator_id'] = 'field_lexikalna_skupina_tid_op';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['expose']['description'] = 'Zadajte časť názvu lex. skupiny, napr. "deji". Vyhľadávanie podľa mena redaktora nie je možné.';
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
  );
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
  /* Filter criterion: Obsah: Atribúty (field_atributy) */
  $handler->display->display_options['filters']['field_atributy_value']['id'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['filters']['field_atributy_value']['field'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_atributy_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_atributy_value']['expose']['operator_id'] = 'field_atributy_value_op';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['label'] = 'Atribúty';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_atributy_value']['expose']['operator'] = 'field_atributy_value_op';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['identifier'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['remember'] = TRUE;
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
  /* Filter criterion: Obsah: Erráta (field_errta) */
  $handler->display->display_options['filters']['field_errta_value']['id'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['table'] = 'field_data_field_errta';
  $handler->display->display_options['filters']['field_errta_value']['field'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_errta_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator_id'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['label'] = 'Erráta';
  $handler->display->display_options['filters']['field_errta_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['identifier'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'opravit-importovane';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Opraviť importované';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Vyhľadať ilustrácie */
  $handler = $view->new_display('page', 'Vyhľadať ilustrácie', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vyhľadať ilustrácie';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_obrazok_navrh_' => 'field_obrazok_navrh_',
    'field_popis' => 'field_popis',
    'field_lexikalna_skupina_il' => 'field_lexikalna_skupina_il',
    'state' => 'state',
    'field_subor_ilustracie' => 'field_subor_ilustracie',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
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
    'field_popis' => array(
      'sortable' => 1,
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
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subor_ilustracie' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Obrázok (návrh/náhľad) */
  $handler->display->display_options['fields']['field_obrazok_navrh_']['id'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['table'] = 'field_data_field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['field'] = 'field_obrazok_navrh_';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['label'] = 'Obrázok (náhľad)';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obrazok_navrh_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Pole: Obsah: Text k ilustrácii */
  $handler->display->display_options['fields']['field_popis']['id'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['table'] = 'field_data_field_popis';
  $handler->display->display_options['fields']['field_popis']['field'] = 'field_popis';
  $handler->display->display_options['fields']['field_popis']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['id'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['table'] = 'field_data_field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['field'] = 'field_lexikalna_skupina_il';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina_il']['delta_offset'] = '0';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Súbory ilustrácie */
  $handler->display->display_options['fields']['field_subor_ilustracie']['id'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['table'] = 'field_data_field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['field'] = 'field_subor_ilustracie';
  $handler->display->display_options['fields']['field_subor_ilustracie']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subor_ilustracie']['delta_offset'] = '0';
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
    t('Stav'),
    t('Erráta'),
    t('Súbor'),
    t(' '),
    t('Súbor (field_taxsubor)'),
    t('Lexikálna skupina'),
    t('Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny'),
    t('Názov'),
    t('dddd'),
    t('Text hesla'),
    t('ddddd'),
    t('Vyhľadať'),
    t('V tomto náhľade sa zobrazujú vydané a aj budúce heslá Beliany. Knižne vydané heslá po <em>kokpit</em> majú typ <em>Importované heslo</em>. Heslá od <em>koks</em> majú typ <em>Heslo</em> a budú sa vypracovávať v redakčnom systéme. <br />Heslá s typom <em>Importované heslo</em> môžete upraviť vždy. Ostatné heslá môžete upraviť len vtedy, ak má jednu z vašich lexikálnych skupín. Odkazy na heslá sú aktívne.  Odkazy označené pôvodnou šípkou —> neboli programovo nájdené a treba ich vložiť ručne. '),
    t('Komentár/inštrukcie'),
    t('Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.'),
    t('Komentár obsahuje'),
    t('Komentár neobsahuje'),
    t('Lexikálna skupina (alt)'),
    t('Opraviť importované'),
    t('V tomto náhľade možno importované (vydané) heslá prehľadávať aj na základe atribútov. Atribút je nejaká vlastnosť, ktorá bola zistená pri konverzii z doc súborov (bez diakritiky): \'instrukciepalo\' a \'instrukciesemancik\' (inštrukcie pre typografa), \'image\' (v texte má byť vložený obrázok), \'tabulka\' , \'matematika\', ghPriblizne\' a \'ghMultiPriblizne\' (lexikálnu skupinu hesla nebolo na základe informácií z generálneho heslára možné určiť jednoznačne). '),
    t('Zadajte časť názvu lex. skupiny, napr. "deji". Vyhľadávanie podľa mena redaktora nie je možné.'),
    t('Atribúty'),
    t('Vyhľadať ilustrácie'),
    t(' V tomto náhľade sa zobrazujú všetky ilustrácie Beliany.'),
    t('Obrázok (náhľad)'),
    t('Text k ilustrácii'),
    t('Súbory ilustrácie'),
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
    17 => '17',
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'state' => 'state',
    'changed' => 'changed',
    'name' => 'name',
    'field_lexikalna_skupina' => 'field_lexikalna_skupina',
    'name_1' => 'name_1',
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
  );
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
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
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
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_label'] = 'ddddd';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
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
    17 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Obsah: Atribúty (field_atributy) */
  $handler->display->display_options['filters']['field_atributy_value']['id'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['table'] = 'field_data_field_atributy';
  $handler->display->display_options['filters']['field_atributy_value']['field'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_atributy_value']['group'] = 1;
  $handler->display->display_options['filters']['field_atributy_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_atributy_value']['expose']['operator_id'] = 'field_atributy_value_op';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['label'] = 'Atribúty';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_atributy_value']['expose']['operator'] = 'field_atributy_value_op';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['identifier'] = 'field_atributy_value';
  $handler->display->display_options['filters']['field_atributy_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Obsah: Erráta (field_errta) */
  $handler->display->display_options['filters']['field_errta_value']['id'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['table'] = 'field_data_field_errta';
  $handler->display->display_options['filters']['field_errta_value']['field'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['group'] = 1;
  $handler->display->display_options['filters']['field_errta_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator_id'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['label'] = 'Erráta';
  $handler->display->display_options['filters']['field_errta_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_errta_value']['expose']['operator'] = 'field_errta_value_op';
  $handler->display->display_options['filters']['field_errta_value']['expose']['identifier'] = 'field_errta_value';
  $handler->display->display_options['filters']['field_errta_value']['expose']['remember_roles'] = array(
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
    17 => 0,
    20 => 0,
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

  /* Display: Všetky heslá - prehľad */
  $handler = $view->new_display('page', 'Všetky heslá - prehľad', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky heslá - prehľad';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['path'] = 'vsetky-prehlad';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Prehľad';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Všetky heslá - operácie */
  $handler = $view->new_display('page', 'Všetky heslá - operácie', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky heslá - operácie';
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
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'heslo::field_lexikalna_skupina' => 'heslo::field_lexikalna_skupina',
          'importovane_heslo::field_taxsubor' => 'importovane_heslo::field_taxsubor',
          'importovane_heslo::field_lexikalna_skupina' => 'importovane_heslo::field_lexikalna_skupina',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
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
  /* Pole: Obsah: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
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
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Používateľ: Názov */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Autor';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Pole: Obsah: Ilustrácie */
  $handler->display->display_options['fields']['field_ilustracia']['id'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['field'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_ilustracia']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_ilustracia']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'vsetky-operacie';
  $handler->display->display_options['menu']['title'] = 'Prehľad';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Všetky heslá - prehľad (G) */
  $handler = $view->new_display('page', 'Všetky heslá - prehľad (G)', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Všetky heslá - prehľad (G)';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    17 => '17',
    3 => '3',
    23 => '23',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Obsah: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Pole: Workbench Moderation: Stav */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Pole: Obsah: Dátum aktualizácie */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
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
  /* Filter criterion: Obsah: Lexikálna skupina (field_lexikalna_skupina) */
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
    23 => 0,
  );
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['field_lexikalna_skupina_tid']['hierarchy'] = 1;
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
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_text_hesla_value']['group'] = 1;
  $handler->display->display_options['filters']['field_text_hesla_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_id'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['label'] = 'Text hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator_label'] = 'ddddd';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['operator'] = 'field_text_hesla_value_op';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['identifier'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
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
    17 => 0,
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
  /* Filter criterion: Obsah: User has a revision */
  $handler->display->display_options['filters']['uid_revision']['id'] = 'uid_revision';
  $handler->display->display_options['filters']['uid_revision']['table'] = 'node';
  $handler->display->display_options['filters']['uid_revision']['field'] = 'uid_revision';
  $handler->display->display_options['filters']['uid_revision']['value'] = '';
  $handler->display->display_options['filters']['uid_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_revision']['expose']['operator_id'] = 'uid_revision_op';
  $handler->display->display_options['filters']['uid_revision']['expose']['label'] = 'Upravil niektorú verziu';
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
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
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
  $handler->display->display_options['path'] = 'vsetky-prehlad-g';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Prehľad (G)';
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
    t('revision user'),
    t('autor'),
    t('Názov'),
    t('Na zoradenie'),
    t('Nid'),
    t('Typ'),
    t('Stav'),
    t('Dátum aktualizácie'),
    t('Naposledy upravil'),
    t('Lexikálna skupina'),
    t('Autor'),
    t('Súbor'),
    t('Stlačením prvého písmena mena redaktora prejdete na jeho lexikálne skupiny.'),
    t('dddd'),
    t('Text hesla'),
    t('ddddd'),
    t('Atribúty'),
    t('Erráta'),
    t(' Upravil niektorú verziu '),
    t('Komentár'),
    t('Všetky heslá - prehľad'),
    t('Všetky heslá - operácie'),
    t('Operácia'),
    t('Vybrať operáciu'),
    t('Ilustrácie'),
    t('Všetky heslá - prehľad (G)'),
    t('Upravil niektorú verziu'),
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
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['label'] = '';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
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
