<?php
/**
 * @file
 * Enables modules and site configuration for the RS Beliana site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function rs_beliana_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Redakčný systém Beliana';
  $form['site_information']['site_mail']['#default_value'] = 'info@' . $_SERVER['SERVER_NAME'];
  // Set default location.
  $form['server_settings']['site_default_country']['#default_value'] = 'SK';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Bratislava';
  unset($form['server_settings']['date_default_timezone']['#attributes']);
  // Set default values for updating.
  $form['update_notifications']['update_status_module'][1]['#default_value'] = 0;
  $form['update_notifications']['update_status_module'][2]['#default_value'] = 0;
  // Set default admin values.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'info@' . $_SERVER['SERVER_NAME'];
}
