<?php
/**
 * @file
 * rs_beliana_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rs_beliana_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export_sadzac';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export (sadzac)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exportovať';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'viac';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    27 => '27',
    16 => '16',
  );
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
  /* Päta: Globálny: Výsledný súhrn */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Zobrazenie po @per_page položkách, @start - @end z @total';
  /* Pole: Obsah: Text hesla */
  $handler->display->display_options['fields']['field_text_hesla']['id'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['table'] = 'field_data_field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['field'] = 'field_text_hesla';
  $handler->display->display_options['fields']['field_text_hesla']['label'] = '';
  $handler->display->display_options['fields']['field_text_hesla']['element_label_colon'] = FALSE;
  /* Pole: Obsah: Tabuľka pre geografické heslá */
  $handler->display->display_options['fields']['field_table']['id'] = 'field_table';
  $handler->display->display_options['fields']['field_table']['table'] = 'field_data_field_table';
  $handler->display->display_options['fields']['field_table']['field'] = 'field_table';
  $handler->display->display_options['fields']['field_table']['label'] = '';
  $handler->display->display_options['fields']['field_table']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_table']['alter']['text'] = 'Tabuľka pre geografické heslá: [field_table]';
  $handler->display->display_options['fields']['field_table']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_table']['hide_empty'] = TRUE;
  /* Pole: Obsah: Ilustrácie */
  $handler->display->display_options['fields']['field_ilustracia']['id'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['table'] = 'field_data_field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['field'] = 'field_ilustracia';
  $handler->display->display_options['fields']['field_ilustracia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ilustracia']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ilustracia']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_ilustracia']['settings'] = array(
    'view_mode' => 'export',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_ilustracia']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ilustracia']['separator'] = '';
  /* Kritéria zoradenia: Obsah: Na zoradenie (field_na_zoradenie) */
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['id'] = 'field_na_zoradenie_value';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['table'] = 'field_data_field_na_zoradenie';
  $handler->display->display_options['sorts']['field_na_zoradenie_value']['field'] = 'field_na_zoradenie_value';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'na_zalomenie' => 'na_zalomenie',
    'publikovane_na_webe' => 'publikovane_na_webe',
    'zverejnene_oprava' => 'zverejnene_oprava',
    'zverejnene_vratene' => 'zverejnene_vratene',
    'na_opakovane_zverejnenie' => 'na_opakovane_zverejnenie',
    'pozdr_an_' => 'pozdr_an_',
    'na_zverejnenie' => 'na_zverejnenie',
    'u_vyst_redaktora_2' => 'u_vyst_redaktora_2',
    'u_vyst_redaktora_3' => 'u_vyst_redaktora_3',
    'u_vyst_redaktora_4' => 'u_vyst_redaktora_4',
    'u_v_st_redaktora_5' => 'u_v_st_redaktora_5',
    'zlucene' => 'zlucene',
    '1_korektura' => '1_korektura',
    '2_korekt_ra' => '2_korekt_ra',
    'u_jaz_redaktora_2' => 'u_jaz_redaktora_2',
    'na_jazykovu_korekturu' => 'na_jazykovu_korekturu',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Stav';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
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
  $handler->display->display_options['filters']['field_taxsubor_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    4 => 0,
    17 => 0,
    18 => 0,
    16 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_taxsubor_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxsubor_tid']['vocabulary'] = 'subory';
  /* Filter criterion: Workbench Moderation: Stav */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'na_zalomenie' => 'na_zalomenie',
  );
  /* Filter criterion: Workbench Moderation: Aktuálny */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exportovanie hesiel (sadzba)';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Nadpis: Globálny: Rozsiahle textové pole */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Krátky popis';
  $handler->display->display_options['header']['area']['content'] = 'Pomocou nastavení vyberte požadované heslá, a potom kliknite na oranžové tlačidlo HTML, ktoré sa nachádza celkom dolu vľavo. Vytvorí sa stránka vo formáte HTML, ktorá sa podľa typu a nastavení prehliadača buď priamo v prehliadači zobrazí alebo prehliadač ponúkne inú možnosť. Stránku môžete uložiť do súboru, ktorý môžete otvoriť v textovom editore a tam upraviť, vytlačiť alebo niekomu poslať. Vytvorenú stránku môžete vytlačiť aj priamo z prehliadača. Vybrané heslá sa zobrazia po 20-tich, exportujú sa však všetky vybrané heslá. Povinne treba zadať práve jeden súbor.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'export-na-sadzbu';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Exportovať (sadzba)';
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
  $handler->display->display_options['path'] = 'export-na-sadzbu.html';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['export_sadzac'] = array(
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
    t('Zobrazenie po @per_page položkách, @start - @end z @total'),
    t('Tabuľka pre geografické heslá: [field_table]'),
    t('Ilustrácie'),
    t('Stav'),
    t('Lexikálna skupina'),
    t('Názov'),
    t('Súbor'),
    t('Page'),
    t('Exportovanie hesiel (sadzba)'),
    t('Krátky popis'),
    t('Pomocou nastavení vyberte požadované heslá, a potom kliknite na oranžové tlačidlo HTML, ktoré sa nachádza celkom dolu vľavo. Vytvorí sa stránka vo formáte HTML, ktorá sa podľa typu a nastavení prehliadača buď priamo v prehliadači zobrazí alebo prehliadač ponúkne inú možnosť. Stránku môžete uložiť do súboru, ktorý môžete otvoriť v textovom editore a tam upraviť, vytlačiť alebo niekomu poslať. Vytvorenú stránku môžete vytlačiť aj priamo z prehliadača. Vybrané heslá sa zobrazia po 20-tich, exportujú sa však všetky vybrané heslá. Povinne treba zadať práve jeden súbor.'),
    t('Data export'),
  );
  $export['export_sadzac'] = $view;

  return $export;
}
