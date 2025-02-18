<?php
/**
 * @file
 * Code for flood_control.views.inc.
 */

/**
 * Implements hook_views_data().
 */
function flood_control_views_data() {
  $data = array();

  // It doesn't make sense to enable views integration if there is no joinable
  // data. We do it anyway, but variable user_failed_login_identifier_uid_only
  // should be changed to TRUE.
  $data['flood']['table']['group'] = t('Flood');
  $data['flood']['table']['join']['users'] = array(
    'left_field' => 'uid',
    'field' => 'identifier',
  );
  $data['flood']['event'] = array(
    'title' => t('Event'),
    'help' => t('Event name.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['flood']['identifier'] = array(
    'real field' => 'identifier',
    'title' => t('User ID'),
    'help' => t('A flooded user id.'),
    'field' => array(
      'handler' => 'views_handler_flood_identifier',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'users',
      'base_field' => 'identifier',
      'handler' => 'views_handler_relationship',
      'label' => t('Flood to user relationship'),
    ),
  );
  $data['flood']['locked'] = array(
    'title' => t('Flood locked'),
    'help' => t('Whether or not a user is flood locked.'),
    'field' => array(
      'handler' => 'views_handler_field_flood_control_locked',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_flood_control_locked',
      'use equal' => 'FALSE',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
