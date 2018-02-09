<?php

/**
 * @file
 * Definition of views_handler_field_text_hesla
 */

/**
 * Provides a custom views field.
 */
class views_handler_field_text_hesla extends views_handler_field {

  function option_definition() {
    return parent::option_definition();
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    
  }

  function render($data) {
    $output = '';

    if (isset($data->_field_data['node_workbench_moderation_node_history_nid'])) {
      $node = $data->_field_data['node_workbench_moderation_node_history_nid']['entity'];

      if ($node->type == 'heslo' || $node->type == 'importovane_heslo') {
        $field = $node->field_text_hesla[LANGUAGE_NONE];

        if (!empty($field)) {
          $output = check_markup($field[0]['value'], $field[0]['format']);
        }
      }
    }

    return $output;
  }

}
