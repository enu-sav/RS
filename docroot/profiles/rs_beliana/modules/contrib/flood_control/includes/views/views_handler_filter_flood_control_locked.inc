<?php

/**
 * @file
 * Definition of views_handler_filter_flood_control_locked.
 */

/**
 * Class views_handler_filter_flood_control_locked.
 */
class views_handler_filter_flood_control_locked extends views_handler_filter_boolean_operator {
  function query() {
    $this->ensure_my_table();

    // COUNT(flood.identifier AND flood.timestamp > {timestamp})
    $timestamp = REQUEST_TIME - variable_get('user_failed_login_user_window', 21600);
    $this->field_alias = $this->query->add_field(NULL, "{$this->table_alias}.identifier AND {$this->table_alias}.timestamp > $timestamp",
      $this->table_alias . '_' . $this->real_field,
      array('function' => 'count')
    );

    $operator = '>=';
    if (empty($this->value)) {
      $operator = '<';
    }
    $limit = variable_get('user_failed_login_user_limit', 5);
    $this->query->add_having_expression(NULL, "{$this->field_alias} $operator $limit");
  }

}
