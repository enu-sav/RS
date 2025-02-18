<?php
/**
 * @file
 * Code for views_handler_field_flood_control_locked.inc.
 */

/**
 * Class views_handler_flood_control_flood_locked.
 */
class views_handler_field_flood_control_locked extends views_handler_field_boolean {
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();

    // COUNT(flood.identifier AND flood.timestamp > {timestamp})
    $timestamp = REQUEST_TIME - variable_get('user_failed_login_user_window', 21600);
    $this->field_alias = $this->query->add_field(NULL, "{$this->table_alias}.identifier AND {$this->table_alias}.timestamp > $timestamp",
      $this->table_alias . '_' . $this->real_field,
      array('function' => 'count')
    );
  }

  function render($values) {
    // Compare if the count is higher than the threshold.
    $this->{$this->field_alias} = $this->get_value($values) < variable_get('user_failed_login_user_limit', 5);

    return parent::render($values);
  }

}
