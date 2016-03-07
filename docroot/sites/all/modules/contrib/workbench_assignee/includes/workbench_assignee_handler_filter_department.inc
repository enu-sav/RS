<?php
/**
 * @file
 * Provides moderation links for Views.
 */

class workbench_assignee_handler_filter_department extends views_handler_filter_boolean_operator {
  function construct() {
    parent::construct();
    $this->value_value = t('Exclude current user assigned content');
  }

  function can_expose() {
    return FALSE;
  }

  function query() {
    $this->ensure_my_table();
    global $user;
    $account = user_load($user->uid);

    $department_fields = workbench_assignee_get_assigned_fields('user');
    $field = $this->table_alias . '.' . $this->real_field . ' ';
    $asid_field = $this->table_alias . '.asid ';

    $and = db_and();
    if($department_fields){
      $department_fields = array_keys($department_fields);
      $user_fields = field_get_items('user', $account, $department_fields[0]);
      if(!empty($user_fields)){
        $and->condition($field, $user_fields[0]['tid'], '=');
        if (!empty($this->value)) {
          $and->condition($asid_field, $account->uid, '<>');
        }
      }else{
        $and->condition("NULL", "NULL", '<>');
      }
      $this->query->add_where($this->options['group'], $and);
    }
  }
}
