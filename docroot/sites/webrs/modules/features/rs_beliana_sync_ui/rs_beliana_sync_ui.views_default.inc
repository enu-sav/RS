<?php
/**
 * @file
 * rs_beliana_sync_ui.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rs_beliana_sync_ui_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sync_to_web';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Publikovať na web';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Zverejniť Heslo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
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
  /* Päta: Globálny: Výsledný súhrn */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Zobrazenie po @per_page položkách, @start - @end z @total';
  /* No results behavior: Globálny: Nefiltrovaný text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Žiadne heslá na publikovanie nie sú momentálne dostupné.';
  /* Vzťah: Workbench Moderation: Uzol */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'Heslo';
  /* Vzťah: Odkaz na entitu: Referenced Entity */
  $handler->display->display_options['relationships']['field_ilustracia_target_id']['id'] = 'field_ilustracia_target_id';
  $handler->display->display_options['relationships']['field_ilustracia_target_id']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['relationships']['field_ilustracia_target_id']['field'] = 'field_ilustracia_target_id';
  $handler->display->display_options['relationships']['field_ilustracia_target_id']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_ilustracia_target_id']['label'] = 'Ilustracia';
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'nid';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::rs_beliana_sync_ui_sync' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Pole: Content revision: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Content revision: Dátum aktualizácie */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  /* Pole: Beliana sync: The Unix timestamp of last sync. */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'beliana_sync';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['label'] = 'Posledná synchronizácia';
  $handler->display->display_options['fields']['updated']['empty'] = 'Ešte nebola';
  $handler->display->display_options['fields']['updated']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['updated']['second_date_format'] = 'privatemsg_current_day';
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['relationship'] = 'nid';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['relationship'] = 'nid';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
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
  );
  /* Filter criterion: Obsah: Obrázok - odkaz (návrh/náhľad) (field_obrazok_odkaz) */
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['id'] = 'field_obrazok_odkaz_value_1';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['table'] = 'field_data_field_obrazok_odkaz';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['field'] = 'field_obrazok_odkaz_value';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['relationship'] = 'field_ilustracia_target_id_1';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['operator_id'] = 'field_obrazok_odkaz_value_1_op';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['label'] = 'Obrázok je odkaz';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['operator'] = 'field_obrazok_odkaz_value_1_op';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['identifier'] = 'field_obrazok_odkaz_value_1';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Obsah: Ilustrácie (field_ilustracia) */
  $handler->display->display_options['filters']['field_ilustracia_target_id']['id'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['field'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_ilustracia_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['operator_id'] = 'field_ilustracia_target_id_op';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['label'] = 'Má ilustráciu';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['operator'] = 'field_ilustracia_target_id_op';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['identifier'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Zverejniť na web */
  $handler = $view->new_display('page', 'Zverejniť na web', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zverejniť na web';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    34 => '34',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_lexikalna_skupina' => 'field_lexikalna_skupina',
    'timestamp' => 'timestamp',
    'updated' => 'updated',
    'field_text_hesla_1' => 'field_text_hesla_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'title' => array(
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
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'updated' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_text_hesla_1' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Vzťah: Workbench Moderation: Uzol */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'Heslo';
  /* Vzťah: Odkaz na entitu: Referenced Entity */
  $handler->display->display_options['relationships']['field_ilustracia_target_id_1']['id'] = 'field_ilustracia_target_id_1';
  $handler->display->display_options['relationships']['field_ilustracia_target_id_1']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['relationships']['field_ilustracia_target_id_1']['field'] = 'field_ilustracia_target_id';
  $handler->display->display_options['relationships']['field_ilustracia_target_id_1']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_ilustracia_target_id_1']['label'] = 'Ilustracia';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'nid';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::rs_beliana_sync_ui_sync' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Pole: Content revision: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Obsah: Lexikálna skupina */
  $handler->display->display_options['fields']['field_lexikalna_skupina']['id'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['table'] = 'field_data_field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['field'] = 'field_lexikalna_skupina';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['relationship'] = 'nid';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lexikalna_skupina']['delta_offset'] = '0';
  /* Pole: Beliana sync: The Unix timestamp of last sync. */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'beliana_sync';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['label'] = 'Synchronizácia';
  $handler->display->display_options['fields']['updated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['updated']['empty'] = 'Ešte nebola';
  $handler->display->display_options['fields']['updated']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['updated']['second_date_format'] = 'privatemsg_current_day';
  /* Pole: Content revision: Dátum aktualizácie */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['alter']['text'] = '[timestamp] / [updated]';
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  /* Pole: Obsah: Komentár/inštrukcie */
  $handler->display->display_options['fields']['field_komentar_instrukcie']['id'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['table'] = 'field_data_field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['field'] = 'field_komentar_instrukcie';
  $handler->display->display_options['fields']['field_komentar_instrukcie']['relationship'] = 'nid';
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla_1']['id'] = 'field_text_hesla_1';
  $handler->display->display_options['fields']['field_text_hesla_1']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla_1']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla_1']['relationship'] = 'nid';
  /* Pole: Obsah: Ilustracia: Nazov/Pouzit */
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['id'] = 'ilustracia_nazov_pouzit';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['table'] = 'node';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['field'] = 'ilustracia_nazov_pouzit';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['relationship'] = 'nid';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['label'] = 'Ilustrácie';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxsubor_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator_id'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['label'] = 'Súbor';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['operator'] = 'field_taxsubor_tid_op';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['identifier'] = 'field_taxsubor_tid';
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Uzol  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['relationship'] = 'nid';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
    'importovane_heslo' => 'importovane_heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Obsah: Názov */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
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
  );
  /* Filter criterion: Obsah: Obrázok - odkaz (návrh/náhľad) (field_obrazok_odkaz) */
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['id'] = 'field_obrazok_odkaz_value_1';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['table'] = 'field_data_field_obrazok_odkaz';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['field'] = 'field_obrazok_odkaz_value';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['relationship'] = 'field_ilustracia_target_id_1';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['operator_id'] = 'field_obrazok_odkaz_value_1_op';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['label'] = 'Obrázok je odkaz';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['operator'] = 'field_obrazok_odkaz_value_1_op';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['identifier'] = 'field_obrazok_odkaz_value_1';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Obsah: Ilustrácie (field_ilustracia) */
  $handler->display->display_options['filters']['field_ilustracia_target_id']['id'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['field'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_ilustracia_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['operator_id'] = 'field_ilustracia_target_id_op';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['label'] = 'Má ilustráciu';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['operator'] = 'field_ilustracia_target_id_op';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['identifier'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'importovane_na_zverejnenie' => 'importovane_na_zverejnenie',
    'na_zalomenie' => 'na_zalomenie',
    'na_opakovane_zverejnenie' => 'na_opakovane_zverejnenie',
  );
  $handler->display->display_options['path'] = 'zverejnit-na-web';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Zverejniť na web';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Zverejnené na webe */
  $handler = $view->new_display('page', 'Zverejnené na webe', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zverejnené na webe';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'timestamp' => 'timestamp',
    'updated' => 'updated',
    'state' => 'state',
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
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'updated' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Výsledný súhrn */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Zobrazené publikované heslá @start - @end z celkového počtu @total
<h1>Postup pri sťahovaní hesla z webu a jeho následnom vyradení</h1>
<ol>
<li>Na stránke <a href="v">https://beliana.sav.sk</a> zrušiť zverejnenie hesla (možno použiť odkaz v stĺpci <em>Heslo na webe</em>, najskôr sa treba na web prihlásiť)</li>
<li> V hesle skontrolovať jeho Odkazujúce heslá (v prípade potreby upraviť)</li>
<li>V tomto náhľade heslo presunúť do stavu <em>Vyradené</em></li>
</ol>
Ak ide len o dočasné stiahnutie hesla, krok 2 treba vynechať a heslo treba (namiesto bodu 3)  preradiť (priamo v hesle) do stavu <em> Zverejnené – oprava</em>. 
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::moderate_to_vyradene' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Pole: Content revision: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Pole: Content revision: Dátum aktualizácie */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  /* Pole: Beliana sync: The Unix timestamp of last sync. */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'beliana_sync';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['label'] = 'Posledná synchronizácia';
  $handler->display->display_options['fields']['updated']['empty'] = 'Ešte nebola';
  $handler->display->display_options['fields']['updated']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['updated']['second_date_format'] = 'privatemsg_current_day';
  /* Pole: Obsah: Ilustracia: Nazov/Pouzit */
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['id'] = 'ilustracia_nazov_pouzit';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['table'] = 'node';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['field'] = 'ilustracia_nazov_pouzit';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['relationship'] = 'nid';
  $handler->display->display_options['fields']['ilustracia_nazov_pouzit']['label'] = 'Ilustrácie';
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['relationship'] = 'nid';
  /* Pole: Beliana: Remote ID (Sync) */
  $handler->display->display_options['fields']['sync_remote_id']['id'] = 'sync_remote_id';
  $handler->display->display_options['fields']['sync_remote_id']['table'] = 'node';
  $handler->display->display_options['fields']['sync_remote_id']['field'] = 'sync_remote_id';
  $handler->display->display_options['fields']['sync_remote_id']['relationship'] = 'nid';
  $handler->display->display_options['fields']['sync_remote_id']['label'] = 'Heslo na webe';
  $handler->display->display_options['fields']['sync_remote_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  $handler->display->display_options['filters']['is_current']['group'] = 1;
  /* Filter criterion: Beliana sync: The Unix timestamp of last sync. */
  $handler->display->display_options['filters']['updated']['id'] = 'updated';
  $handler->display->display_options['filters']['updated']['table'] = 'beliana_sync';
  $handler->display->display_options['filters']['updated']['field'] = 'updated';
  $handler->display->display_options['filters']['updated']['operator'] = 'not empty';
  $handler->display->display_options['filters']['updated']['group'] = 1;
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
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['relationship'] = 'nid';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Lexikálna skupina';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'lexikalne_skupiny';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '3';
  /* Filter criterion: Obsah: Názov (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Názov';
  $handler->display->display_options['filters']['title_field_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Obsah: Text hesla (field_text_hesla) */
  $handler->display->display_options['filters']['field_text_hesla_value']['id'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['filters']['field_text_hesla_value']['field'] = 'field_text_hesla_value';
  $handler->display->display_options['filters']['field_text_hesla_value']['relationship'] = 'nid';
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
  );
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
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
    25 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'publikovane_na_webe' => 'publikovane_na_webe',
  );
  /* Filter criterion: Beliana sync: The Unix timestamp of last sync. */
  $handler->display->display_options['filters']['updated_1']['id'] = 'updated_1';
  $handler->display->display_options['filters']['updated_1']['table'] = 'beliana_sync';
  $handler->display->display_options['filters']['updated_1']['field'] = 'updated';
  $handler->display->display_options['filters']['updated_1']['operator'] = '>';
  $handler->display->display_options['filters']['updated_1']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['updated_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['updated_1']['expose']['operator_id'] = 'updated_1_op';
  $handler->display->display_options['filters']['updated_1']['expose']['label'] = 'Synchronizácia po';
  $handler->display->display_options['filters']['updated_1']['expose']['description'] = 'Dátum vo formáte RRRR-MM-DD alebo záporná hodnota (-2 day, -5 hour)';
  $handler->display->display_options['filters']['updated_1']['expose']['operator'] = 'updated_1_op';
  $handler->display->display_options['filters']['updated_1']['expose']['identifier'] = 'updated_1';
  $handler->display->display_options['filters']['updated_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    31 => 0,
    18 => 0,
    10 => 0,
    5 => 0,
    4 => 0,
    34 => 0,
    7 => 0,
    12 => 0,
    6 => 0,
    37 => 0,
    3 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
  );
  /* Filter criterion: Obsah: Ilustrácie (field_ilustracia) */
  $handler->display->display_options['filters']['field_ilustracia_target_id']['id'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['field'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['operator_id'] = 'field_ilustracia_target_id_op';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['label'] = 'Má ilustráciu';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['operator'] = 'field_ilustracia_target_id_op';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['identifier'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_ilustracia_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Obsah: Obrázok - odkaz (návrh/náhľad) (field_obrazok_odkaz) */
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['id'] = 'field_obrazok_odkaz_value';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['table'] = 'field_data_field_obrazok_odkaz';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['field'] = 'field_obrazok_odkaz_value';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['relationship'] = 'field_ilustracia_target_id';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['expose']['operator_id'] = 'field_obrazok_odkaz_value_op';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['expose']['label'] = 'Obrázok je odkaz';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['expose']['operator'] = 'field_obrazok_odkaz_value_op';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['expose']['identifier'] = 'field_obrazok_odkaz_value';
  $handler->display->display_options['filters']['field_obrazok_odkaz_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Obsah: Dátum aktualizácie (field_datum_aktualizacie) */
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['id'] = 'field_datum_aktualizacie_value';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['table'] = 'field_data_field_datum_aktualizacie';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['field'] = 'field_datum_aktualizacie_value';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['operator_id'] = 'field_datum_aktualizacie_value_op';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['label'] = 'Dátum aktualizácie';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['operator'] = 'field_datum_aktualizacie_value_op';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['limit_operators'] = TRUE;
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['available_operators'] = array(
    'empty' => 'empty',
    'not empty' => 'not empty',
  );
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['identifier'] = 'field_datum_aktualizacie_value';
  $handler->display->display_options['filters']['field_datum_aktualizacie_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'zverejnene-na-webe';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Zverejnené';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['sync_to_web'] = array(
    t('Master'),
    t('Zverejniť Heslo'),
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
    t('Žiadne heslá na publikovanie nie sú momentálne dostupné.'),
    t('Heslo'),
    t('Ilustracia'),
    t('Obsah'),
    t('Vybrať operáciu'),
    t('Názov'),
    t('Dátum aktualizácie'),
    t('Posledná synchronizácia'),
    t('Ešte nebola'),
    t('Súbor'),
    t('Lexikálna skupina'),
    t('Typ'),
    t('Text hesla'),
    t('Obrázok je odkaz'),
    t('Má ilustráciu'),
    t('Zverejniť na web'),
    t('Synchronizácia'),
    t('[timestamp] / [updated]'),
    t('Komentár/inštrukcie'),
    t('Ilustrácie'),
    t('Zverejnené na webe'),
    t('Zobrazené publikované heslá @start - @end z celkového počtu @total
<h1>Postup pri sťahovaní hesla z webu a jeho následnom vyradení</h1>
<ol>
<li>Na stránke <a href="v">https://beliana.sav.sk</a> zrušiť zverejnenie hesla (možno použiť odkaz v stĺpci <em>Heslo na webe</em>, najskôr sa treba na web prihlásiť)</li>
<li> V hesle skontrolovať jeho Odkazujúce heslá (v prípade potreby upraviť)</li>
<li>V tomto náhľade heslo presunúť do stavu <em>Vyradené</em></li>
</ol>
Ak ide len o dočasné stiahnutie hesla, krok 2 treba vynechať a heslo treba (namiesto bodu 3)  preradiť (priamo v hesle) do stavu <em> Zverejnené – oprava</em>. 
'),
    t('Heslo na webe'),
    t('Synchronizácia po'),
    t('Dátum vo formáte RRRR-MM-DD alebo záporná hodnota (-2 day, -5 hour)'),
  );
  $export['sync_to_web'] = $view;

  return $export;
}
