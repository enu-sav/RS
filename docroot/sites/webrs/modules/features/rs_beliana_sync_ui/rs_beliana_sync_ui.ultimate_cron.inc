<?php
/**
 * @file
 * rs_beliana_sync_ui.ultimate_cron.inc
 */

/**
 * Implements hook_default_ultimate_cron_job().
 */
function rs_beliana_sync_ui_default_ultimate_cron_job() {
  $export = array();

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'beliana_sync_cron';
  $job->title = 'Default cron handler';
  $job->settings = array(
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '0+@ 0 * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
    'settings' => array(
      'queue' => array(),
      'poorman' => array(),
      'general' => array(),
    ),
  );
  $export['beliana_sync_cron'] = $job;

  return $export;
}
