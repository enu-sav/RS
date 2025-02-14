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
    'bb-atrib-explode' => FALSE,
    'bb-autor-explode' => FALSE,
    'bb-datum-explode' => FALSE,
    'bb-den-explode' => FALSE,
    'bb-editor-explode' => FALSE,
    'bb-iltext-explode' => FALSE,
    'bb-ilustracia-explode' => FALSE,
    'bb-kategoria-explode' => FALSE,
    'beliana_importovanie_gh-geo-explode' => FALSE,
    'beliana_importovanie_gh-kategoria-explode' => TRUE,
    'import_ilustr_cie-kategoria-explode' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic1' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic2' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic3' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic4' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic5' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic6' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic7' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic8' => FALSE,
    'import_ilustr_cie-licencia-find_replace_lic9' => FALSE,
    'import_ilustr_cie-povod_ilustracie-find_replace' => FALSE,
    'import_ilustr_cie-povod_ilustracie-find_replace2' => FALSE,
    'import_ilustr_cie-povod_ilustracie-find_replace3' => FALSE,
    'import_ilustr_cie-povod_ilustracie-find_replace4' => FALSE,
    'import_ilustr_cie-povod_ilustracie-find_replace5' => FALSE,
    'reimport_exp_il-datum_prevzatia-strtotime' => FALSE,
    'reimport_exp_il-kategoria-explode' => FALSE,
    'reimport_exp_il-nazverejnenie-explode' => FALSE,
    'reimport_exp_il-pouzit-explode' => FALSE,
    'reimport_gh-geo-explode' => FALSE,
    'reimport_gh-ilustracia-explode' => FALSE,
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
