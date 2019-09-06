<?php
/**
 * @file
 * rs_beliana_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rs_beliana_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
