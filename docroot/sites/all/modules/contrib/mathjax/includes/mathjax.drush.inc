<?php
/**
 * @file
 * MathJax module drush integration.
 */

/**
 * Implements hook_drush_command().
 */
function mathjax_drush_command() {
  $items['mathjax-download'] = array(
    'callback' => 'drush_mathjax_download',
    'description' => dt('Downloads the required MathJax library from mathjax.svn.sourceforge.net.'),
    'arguments' => array(
      'path' => dt('Optional. A path to the download folder. If omitted Drush will use the default location (sites/all/libraries/mathjax).'),
    ),
  );
  return $items;
}


/**
 * Downloads MathJax to the libraries directory.
 */
function drush_mathjax_download() {
  $args = func_get_args();
  if ($args[0]) {
    $path = $args[0];
  }
  else {
    $path = drush_get_context('DRUSH_DRUPAL_ROOT') . '/sites/all/libraries/mathjax';
  }

  if (drush_shell_exec('mkdir ' . $path . '; git clone git://github.com/mathjax/MathJax.git ' . $path)) {
    drush_log(dt('MathJax has been downloaded to @path.', array('@path' => $path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to download the MathJax to @path.', array('@path' => $path)), 'error');
  }
}


/**
 * Implements drush_MODULE_post_COMMAND().
 */
function drush_mathjax_post_enable() {
  $modules = func_get_args();
  if (in_array('mathjax', $modules)) {
    drush_mathjax_download();
  }
}
