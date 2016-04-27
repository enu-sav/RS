<?php
/**
 * @file
 * rs_beliana_feeds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rs_beliana_feeds_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'bb-iltext-explode' => FALSE,
    'bb-editor-explode' => FALSE,
    'bb-autor-explode' => FALSE,
    'bb-kategoria-explode' => FALSE,
    'bb-datum-explode' => FALSE,
    'bb-den-explode' => FALSE,
    'bb-atrib-explode' => FALSE,
    'beliana_importovanie_gh-kategoria-explode' => TRUE,
    'beliana_importovanie_gh-geo-explode' => FALSE,
    'import_ilustr_cie-kategoria-explode' => FALSE,
    'bb-ilustracia-explode' => FALSE,
    'import_ilustr_cie-pouzit-explode' => FALSE,
    'import_ilustr_cie-datum_prevzatia-strtotime' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = FALSE;
  $export['feeds_reschedule'] = $strongarm;

  return $export;
}
