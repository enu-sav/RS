<?php

/**
 * @param $form
 * @param $form_state
 */
function beliana_print_form($form, &$form_state) {
  $form = array();

  $options = array();

  $query = new EntityFieldQuery();
  $nodes = $query->entityCondition('entity_type','node')
    ->entityCondition('bundle','heslo')
    ->fieldOrderBy('field_na_zoradenie','value','ASC')
    ->addTag('WorkbenchModerationAssigned')
    ->pager(300)
    ->execute();

  dsm($nodes);

  foreach ($nodes['node'] as $nid) {
    $node = node_load($nid->nid);
    $options[$node->nid] = array('title' => $node->title);
  }

  $header = array(
    'title' => t('Title'),
  );

  $form['table'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#empty' => t('No content available.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Print'),
  );

  return $form;
}

function beliana_query_WorkbenchModerationAssigned_alter(QueryAlterableInterface $query) {
  // Join the workbench moderation node history table
  $query->join('workbench_moderation_node_history', 'wmnh', 'wmnh.nid = nid');

  // Add the state and current conditions
  $query->condition('wmnh.state', 'na_zalomenie');
  $query->condition('wmnh.is_current', 1);
}