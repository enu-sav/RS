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
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'default_environment';
  $environment->name = 'DEV';
  $environment->regexurl = '';
  $environment->settings = array(
    'color' => '#37aa33',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['default_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev';
  $environment->name = 'DEV';
  $environment->regexurl = 'dev.beliana.sav.sk';
  $environment->settings = array(
    'color' => '#37aa33',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 1,
  );
  $export['dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'prod';
  $environment->name = 'PROD';
  $environment->regexurl = 'rs.beliana.sav.sk';
  $environment->settings = array(
    'color' => '#d0d0d0',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 1,
  );
  $export['prod'] = $environment;

  return $export;
}
