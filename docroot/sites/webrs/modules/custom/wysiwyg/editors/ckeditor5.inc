<?php

/**
 * @file
 * Editor integration functions for CKEditor 5.
 */

/**
 * Plugin implementation of hook_editor().
 */
function wysiwyg_ckeditor5_editor() {
  $editor['ckeditor5'] = array(
    'title' => 'CKEditor5',
    'vendor url' => 'https://ckeditor.com/ckeditor-5/',
    'download url' => 'https://ckeditor.com/ckeditor-5/download/',
    'libraries' => array(
      '' => array(
        'title' => 'Minified',
        'files' => array('ckeditor.js'),
      ),
    ),
    'verified version range' => array('15.0.0', '19.0.0'),
    'version callback' => 'wysiwyg_ckeditor5_version',
    // it looks like at least values should be set, the version number is not important
    'versions' => array(
      '17.0.0' => array(
        'js files' => array('ckeditor5.js'),
      ),
      '18.0.0' => array(
        'js files' => array('ckeditor5.js'),
      ),
      '19.0.0' => array(
        'js files' => array('ckeditor5.js'),
      ),
    ),
  );
  return $editor;
}

/**
 * Detect editor version.
 *
 * @param $editor
 *   An array containing editor properties as returned from hook_editor().
 *
 * @return
 *   The installed editor version.
 */
function wysiwyg_ckeditor5_version(&$editor) {

  $library = $editor['library path'] . '/ckeditor.js';
  if (!file_exists($library)) {
      return;
    }
  // @todo Do not load the entire file; use fgets() instead.
  $library = file_get_contents($library, 'r');
  preg_match('%CKEDITOR_VERSION=\"([0-9.]*)\"%', $library, $matches);
  if (!isset($matches[1])) {
    return;
  }
  return $matches[1];
}
