<?php

/**
 * @file
 * Definition of beliana_handler_filter_odmena_date_month.
 */

/**
 * One line description of the filter.
 *
 * This sample filter extends from the basic views_handler_filter. However, you can extend
 * from all of the other filter handlers used for dates, strings, lists, etc. Search for
 * *_handler_filter_* files to find them.
 */
class beliana_handler_filter_odmena_date_month extends views_handler_filter_in_operator {

  function construct() {
    parent::construct();

    $this->value_options = array(
      '1' => t('January'),
      '2' => t('February'),
      '3' => t('March'),
      '4' => t('April'),
      '5' => t('May'),
      '6' => t('June'),
      '7' => t('July'),
      '8' => t('August'),
      '9' => t('September'),
      '10' => t('October'),
      '11' => t('November'),
      '12' => t('December'),
    );
  }

  function op_simple() {
    if (empty($this->value)) {
      return;
    }

    $this->ensure_my_table();
    $field = "field_data_field_datum_zverejnenia.field_datum_zverejnenia_value";
    $value = reset($this->value);

    // Adds a condition to filter for content created on a given month.
    $this->query->add_where_expression($this->options['group'], "MONTH($field) = $value");
  }

}
