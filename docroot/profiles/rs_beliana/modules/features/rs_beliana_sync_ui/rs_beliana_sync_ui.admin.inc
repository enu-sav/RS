<?php

/**
 * @file
 * Administration interfaces definition
 */

/**
 *
 */
function rs_beliana_sync_ui_sync_settings_form($form, &$form_state) {
  $form = [];
  $form['beliana_web_uri'] = [
    '#type' => 'textfield',
    '#title' => t('Web URI'),
    '#default_value' => variable_get('beliana_web_uri'),
  ];
  $form['beliana_web_login'] = [
    '#type' => 'textfield',
    '#title' => t('User name'),
  ];
  $form['beliana_password_login'] = [
    '#type' => 'password',
    '#title' => t('Password'),
  ];

  return system_settings_form($form);
}