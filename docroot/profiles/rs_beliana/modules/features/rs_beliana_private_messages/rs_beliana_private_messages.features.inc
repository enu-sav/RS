<?php
/**
 * @file
 * rs_beliana_private_messages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_private_messages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
