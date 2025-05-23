<?php

/**
 * @file
 * Definition of views_handler_filter_term_node_tid_depth.
 */

/**
 * Filter for taxonomy terms with depth (including selection by simple
 * hierarchical select).
 *
 * This handler is actually part of the node table and has some restrictions,
 * because it uses a subquery to find nodes with.
 *
 * @ingroup views_filter_handlers
 */
class shs_handler_filter_term_node_tid_depth extends shs_handler_filter_term_node_tid {

  /**
   * {@inheritdoc}
   */
  public function operator_options($which = 'title') {
    return array(
      'or' => t('Is one of'),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['depth'] = array('default' => 0);

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function extra_options_form(&$form, &$form_state) {
    parent::extra_options_form($form, $form_state);

    $form['depth'] = array(
      '#type' => 'weight',
      '#title' => t('Depth'),
      '#default_value' => $this->options['depth'],
      '#description' => t('The depth will match nodes tagged with terms in the hierarchy. For example, if you have the term "fruit" and a child term "apple", with a depth of 1 (or higher) then filtering for the term "fruit" will get nodes that are tagged with "apple" as well as "fruit". If negative, the reverse is true; searching for "apple" will also pick up nodes tagged with "fruit" if depth is -1 (or lower).'),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    // Check if multiple select allowed.
    if ($this->options['expose']['multiple']) {
      // If no filter values are present, then do nothing.
      if ($this->value == 'All') {
        return;
      }
      else {
        $this->value = explode('+', reset($this->value));
        $this->value = explode(',', end($this->value));
        $operator = 'IN';
      }
    }
    else {
      // If no filter values are present, then do nothing.
      if (count($this->value) == 0) {
        return;
      }
      elseif (count($this->value) == 1) {
        // $this->value is an array with a single element so convert it.
        if (is_array($this->value)) {
          $this->value = current($this->value);
        }
        $operator = '=';
      }
      else {
        $operator = 'IN';
      }
    }

    // The normal use of ensure_my_table() here breaks Views.
    // So instead we trick the filter into using the alias of the base table.
    // See http://drupal.org/node/271833
    // If a relationship is set, we must use the alias it provides.
    if (!empty($this->relationship)) {
      $this->table_alias = $this->relationship;
    }
    // If no relationship, then use the alias of the base table.
    elseif (isset($this->query->table_queue[$this->query->base_table]['alias'])) {
      $this->table_alias = $this->query->table_queue[$this->query->base_table]['alias'];
    }
    // This should never happen, but if it does, we fail quietly.
    else {
      return;
    }

    // Now build the subqueries.
    if (module_exists('taxonomy_entity_index')) {
      $subquery = db_select('taxonomy_entity_index', 'tn');
      $subquery->addField('tn', 'entity_id');
      $subquery->condition('entity_type', 'node');
    }
    else {
      $subquery = db_select('taxonomy_index', 'tn');
      $subquery->addField('tn', 'nid');
    }
    $where = db_or()->condition('tn.tid', $this->value, $operator);
    $last = "tn";

    if ($this->options['depth'] > 0) {
      $subquery->leftJoin('taxonomy_term_hierarchy', 'th', "th.tid = tn.tid");
      $last = "th";
      foreach (range(1, abs($this->options['depth'])) as $count) {
        $subquery->leftJoin('taxonomy_term_hierarchy', "th$count", "$last.parent = th$count.tid");
        $where->condition("th$count.tid", $this->value, $operator);
        $last = "th$count";
      }
    }
    elseif ($this->options['depth'] < 0) {
      foreach (range(1, abs($this->options['depth'])) as $count) {
        $subquery->leftJoin('taxonomy_term_hierarchy', "th$count", "$last.tid = th$count.parent");
        $where->condition("th$count.tid", $this->value, $operator);
        $last = "th$count";
      }
    }

    $subquery->condition($where);
    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", $subquery, 'IN');
  }

}
