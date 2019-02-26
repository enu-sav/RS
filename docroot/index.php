<?php

/**
 * @file
 * The PHP page that serves all page requests on a Drupal installation.
 *
 * The routines here dispatch control to the appropriate handler, which then
 * prints the appropriate page.
 *
 * All Drupal code is released under the GNU General Public License.
 * See COPYRIGHT.txt and LICENSE.txt.
 */

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

// log $_POST and $_GET
if (substr($_GET['q'], 0, 4) == 'node') {
  global $user;
  
  $log_folder = 'public://logs/' . date('Ym');
  file_prepare_directory($log_folder, FILE_CREATE_DIRECTORY);

  $filename = drupal_realpath($log_folder . '/log-' . date('d') . '.txt');
  $log_prefix = date('Y-m-d H:i:s') . ' [' . $user->name . '] - ';

  error_log($log_prefix . "GET: \n" . serialize($_GET) . "\n", 3, $filename);
  if (!empty($_POST)) {
    error_log($log_prefix . "POST (" . $_GET['q'] . "): \n" . serialize($_POST) . "\n\n", 3, $filename);
  }
}

menu_execute_active_handler();
