<?php

/**
 * @file
 * Definition of beliana_handler_filter_odmena_date_year.
 */

/**
 * One line description of the filter.
 *
 * This sample filter extends from the basic views_handler_filter. However, you can extend
 * from all of the other filter handlers used for dates, strings, lists, etc. Search for
 * *_handler_filter_* files to find them.
 */
class beliana_handler_filter_odmena_date_year extends views_handler_filter_in_operator {

  function construct() {
    parent::construct();

    $current_year = date('Y');
    $this->value_options = array();

    for($year = $current_year - 2; $year <= $current_year + 2; $year++) {
      $this->value_options[$year] = $year;
    }
  }

  function op_simple() {
    if (empty($this->value)) {
      return;
    }

    $this->ensure_my_table();
    $field = "field_data_field_datum_zverejnenia.field_datum_zverejnenia_value";
    $value = reset($this->value);

    // Adds a condition to filter for content created on a given month.
    $this->query->add_where_expression($this->options['group'], "YEAR($field) = $value");
  }

}
