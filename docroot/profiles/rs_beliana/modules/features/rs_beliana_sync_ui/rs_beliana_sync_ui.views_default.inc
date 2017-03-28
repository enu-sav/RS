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
  $handler->display->display_options['title'] = 'Publikovať na web';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    16 => '16',
    17 => '17',
    15 => '15',
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
  /* Pole: Hromadné operácie: Obsah */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'nid';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::rs_beliana_sync_ui_sync' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Pole: Content revision: Názov */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Globálny: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>';
  $handler->display->display_options['filters']['fields_compare']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'updated';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'timestamp';
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'heslo' => 'heslo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current_1']['id'] = 'is_current_1';
  $handler->display->display_options['filters']['is_current_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current_1']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current_1']['value'] = '1';
  $handler->display->display_options['filters']['is_current_1']['group'] = 2;
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
  );
  $handler->display->display_options['filters']['state_1']['group'] = 2;
  /* Filter criterion: Beliana sync: The Unix timestamp of last sync. */
  $handler->display->display_options['filters']['updated']['id'] = 'updated';
  $handler->display->display_options['filters']['updated']['table'] = 'beliana_sync';
  $handler->display->display_options['filters']['updated']['field'] = 'updated';
  $handler->display->display_options['filters']['updated']['operator'] = 'empty';
  $handler->display->display_options['filters']['updated']['group'] = 2;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'heslo' => 'heslo',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/beliana/sync-to-web';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publikovať na web';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['sync_to_web'] = array(
    t('Master'),
    t('Publikovať na web'),
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
    t('Žiadne heslá na publikovanie nie sú momentálne dostupné.'),
    t('Uzol'),
    t('Obsah'),
    t('Vybrať operáciu'),
    t('Názov'),
    t('Dátum aktualizácie'),
    t('Posledná synchronizácia'),
    t('Ešte nebola'),
    t('Page'),
  );
  $export['sync_to_web'] = $view;

  return $export;
}
