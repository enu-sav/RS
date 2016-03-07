<?php
/**
 * @file
 * Provides moderation links for Views.
 */

class workbench_assignee_handler_field_asid extends views_handler_field {

  function render($values) {
    $value = $this->get_value($values);
    return $this->sanitize_value($value);
  }
}
