<?php

/**
 * @file
 * rs_beliana_node_heslo.ultimate_cron.inc
 */

/**
 * Implements hook_default_ultimate_cron_job().
 */
function rs_beliana_node_heslo_default_ultimate_cron_job() {
  $export = array();

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'rs_beliana_node_heslo_cron';
  $job->title = 'Default cron handler';
  $job->settings = array(
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'database' => array(),
      'name' => '',
    ),
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '0+@ 0 * * *',
        ),
      ),
    ),
    'settings' => array(
      'general' => array(),
      'poorman' => array(),
      'queue' => array(),
    ),
  );
  $export['rs_beliana_node_heslo_cron'] = $job;

  return $export;
}
