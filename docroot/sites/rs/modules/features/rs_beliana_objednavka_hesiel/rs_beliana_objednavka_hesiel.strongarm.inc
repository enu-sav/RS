<?php

/**
 * @file
 * rs_beliana_objednavka_hesiel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rs_beliana_objednavka_hesiel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_objednavka_hesiel';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_objednavka_hesiel';
  $strongarm->value = 0;
  $export['autosave_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_objednavka_hesiel';
  $strongarm->value = 0;
  $export['comment_anonymous_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_objednavka_hesiel';
  $strongarm->value = 1;
  $export['comment_default_mode_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_objednavka_hesiel';
  $strongarm->value = '50';
  $export['comment_default_per_page_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_objednavka_hesiel';
  $strongarm->value = 1;
  $export['comment_form_location_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_objednavka_hesiel';
  $strongarm->value = '1';
  $export['comment_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_objednavka_hesiel';
  $strongarm->value = '1';
  $export['comment_preview_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_objednavka_hesiel';
  $strongarm->value = 1;
  $export['comment_subject_field_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_objednavka_hesiel';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_objednavka_hesiel';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_objednavka_hesiel';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__objednavka_hesiel';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'path' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_node__objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_objednavka_hesiel';
  $strongarm->value = '0';
  $export['language_content_type_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_objednavka_hesiel';
  $strongarm->value = array();
  $export['menu_options_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_objednavka_hesiel';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_objednavka_hesiel';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_objednavka_hesiel';
  $strongarm->value = '1';
  $export['node_preview_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_objednavka_hesiel';
  $strongarm->value = 1;
  $export['node_submitted_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_objednavka_hesiel';
  $strongarm->value = 'Uložiť a pridať polia';
  $export['save_continue_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_objednavka_hesiel';
  $strongarm->value = array();
  $export['simplify_comments_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_objednavka_hesiel';
  $strongarm->value = array();
  $export['simplify_nodes_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_objednavka_hesiel';
  $strongarm->value = 1;
  $export['workbench_access_node_type_objednavka_hesiel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_objednavka_hesiel';
  $strongarm->value = 'v_zalamovani';
  $export['workbench_moderation_default_state_objednavka_hesiel'] = $strongarm;

  return $export;
}
