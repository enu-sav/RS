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

  if ($filename = drupal_realpath($log_folder . '/log-' . date('d') . '.txt')) {
    $log_suffix = '';
    $log_prefix = date('Y-m-d H:i:s') . ' [' . $user->name . '] - ';

    if (empty($_POST)) {
      error_log($log_prefix . 'GET' . $log_suffix . ': ' . serialize($_GET) . "\n", 3, $filename);
    }
    else {
      if (isset($_POST['op'])) {
        if ($_POST['op'] == 'Zobraziť aktuálne zmeny') {
          $log_suffix = ' [PREVIEW] ';
        }

        if ($_POST['op'] == 'Uložiť') {
          $log_suffix = ' [SAVE] ';
        }
      }

      error_log($log_prefix . 'POST' . $log_suffix . '(' . $_GET['q'] . "): \n" . serialize($_POST) . "\n\n", 3, $filename);
    }
  }
}

menu_execute_active_handler();
