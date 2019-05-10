<?php

/**
 * Implements hook_views_data_alter().
 */
function beliana_views_data_alter(&$data) {
  $data['node']['author_date_month'] = array(
    'group' => 'Beliana',
    'title' => t('Author Date Filter (Month)'),
    'help' => t('The content from selected date range.'),
    'real field' => 'field_datum_autorovho_textu',
    'filter' => array(
      'handler' => 'beliana_handler_filter_author_date_month',
    ),
  );
  
  $data['node']['author_date_year'] = array(
    'group' => 'Beliana',
    'title' => t('Author Date Filter (Year)'),
    'help' => t('The content from selected date range.'),
    'real field' => 'field_datum_autorovho_textu',
    'filter' => array(
      'handler' => 'beliana_handler_filter_author_date_year',
    ),
  );
  
  $data['node']['odmena_date_month'] = array(
    'group' => 'Beliana',
    'title' => t('Odmena Date Filter (Month)'),
    'help' => t('The content from selected date range.'),
    'real field' => 'field_datum_zverejnenia',
    'filter' => array(
      'handler' => 'beliana_handler_filter_odmena_date_month',
    ),
  );
  
  $data['node']['odmena_date_year'] = array(
    'group' => 'Beliana',
    'title' => t('Odmena Date Filter (Year)'),
    'help' => t('The content from selected date range.'),
    'real field' => 'field_datum_zverejnenia',
    'filter' => array(
      'handler' => 'beliana_handler_filter_odmena_date_year',
    ),
  );
}
