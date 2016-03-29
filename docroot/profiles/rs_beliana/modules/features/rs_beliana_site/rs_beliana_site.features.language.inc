<?php
/**
 * @file
 * redak_n_syst_m_beliana_site.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function rs_beliana_site_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 0,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
  );
  // Exported language: sk.
  $languages['sk'] = array(
    'language' => 'sk',
    'name' => 'Slovak',
    'native' => 'Slovenčina',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(($n==1)?(0):((($n>=2)&&($n<=4))?(1):2))',
    'domain' => '',
    'prefix' => 'sk',
    'weight' => 0,
  );
  return $languages;
}
