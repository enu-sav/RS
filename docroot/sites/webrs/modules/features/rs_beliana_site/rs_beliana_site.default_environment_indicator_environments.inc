<?php

/**
 * @file
 * rs_beliana_site.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function rs_beliana_site_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = TRUE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'default_environment';
  $environment->name = 'DEV';
  $environment->regexurl = '';
  $environment->settings = array(
    'color' => '#37aa33',
    'fixed' => 0,
    'position' => 'top',
    'text_color' => '#ffffff',
    'weight' => '99',
  );
  $export['default_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev';
  $environment->name = 'DEV';
  $environment->regexurl = 'webrs-dev.beliana.sav.sk';
  $environment->settings = array(
    'color' => '#37aa33',
    'fixed' => 1,
    'position' => 'top',
    'text_color' => '#ffffff',
    'weight' => '99',
  );
  $export['dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'prod';
  $environment->name = 'PROD';
  $environment->regexurl = 'webrs.beliana.sav.sk';
  $environment->settings = array(
    'color' => '#d0d0d0',
    'fixed' => 1,
    'position' => 'top',
    'text_color' => '#ffffff',
    'weight' => '',
  );
  $export['prod'] = $environment;

  return $export;
}
