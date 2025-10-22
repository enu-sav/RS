<?php

/**
 * @file
 * rs_beliana_sync_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_sync_ui_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ultimate_cron" && $api == "ultimate_cron") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function rs_beliana_sync_ui_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
