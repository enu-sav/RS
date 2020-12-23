<?php
// This file must be at beliana/views directory.
/**
 * @file
 * Definition of beliana_handler_field_sync_remote_id.
 */

/**
 * Description of what my handler does.
 */
class beliana_handler_field_sync_remote_id extends views_handler_field {

  /**
   * Add some required fields needed on render().
   */
  function construct() {
    parent::construct();
    $this->additional_fields['sync_remote_id'] = [
      'table' => 'beliana_sync',
      'field' => 'remote',
    ];
  }

  /**
   * Loads additional fields.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Renders the field handler.
   */
  function render($values) {
    if (isset($values->node_workbench_moderation_node_history__beliana_sync_remote)) {
      if ($values->node_workbench_moderation_node_history__beliana_sync_remote > 0) {
        $base_url = variable_get('beliana_web_uri');
        $url = $base_url . '/node/' . $values->node_workbench_moderation_node_history__beliana_sync_remote . '/edit';

        return l($url, $url);
      }
    }

    return NULL;
  }

}
