<?php

/**
 * @file
 * Documents Transliteration's hooks for api reference.
 */

/**
 * Alters a file name before transliteration and sanitization.
 *
 * @param string &$filename
 *   The file name before being parsed by transliteration.
 * @param string $source_langcode
 *   Optional ISO 639 language code that denotes the language of the input.
 *
 * @see transliteration_clean_filename()
 */
function hook_transliteration_clean_filename_prepare_alter(&$filename, $source_langcode) {
  $filename = drupal_strtolower($filename);
  $filename = str_ireplace(array('&amp; ', '& '), 'and ', $filename);
}

/**
 * Alters a file name after transliteration and sanitization.
 *
 * @param string &$filename
 *   The file name after being parsed by transliteration.
 * @param string $source_langcode
 *   Optional ISO 639 language code that denotes the language of the input.
 *
 * @see transliteration_clean_filename()
 */
function hook_transliteration_clean_filename_alter(&$filename, $source_langcode) {
  $filename = drupal_strtolower($filename);
  $filename = str_ireplace(array('&amp; ', '& '), 'and ', $filename);
}
