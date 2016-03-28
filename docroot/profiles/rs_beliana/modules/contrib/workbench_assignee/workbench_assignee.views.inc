<?php
/**
 * @file
 *  Content moderation views integration for Workbench Moderation Notes.
 */

/**
 * Implements hook_views_data().
 */
function workbench_assignee_views_data() {
  $data = array();

  $data['workbench_moderation_node_history']['asid'] = array(
    'title' => t('Moderation Assignee'),
    'help' => t('The Assigned user for the current moderation action'),
    'field' => array(
      'title' => t('Assigned user Id'),
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'label' => t('Assigned user'),
    ),
  );


  $data['workbench_moderation_node_history']['department'] = array(
    'title' => t('Moderation Assignee department'),
    'help' => t('Get the department id for Assigned user of the current moderation action'),
    'field' => array(
      'title' => t('Assigned user department Id'),
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'title' => t('Assigned user department'),
      'handler' => 'workbench_assignee_handler_filter_department',
    )
  );

  return $data;
}
