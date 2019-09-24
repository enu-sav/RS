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

  $form['web'] = [
    '#type' => 'fieldset',
    '#title' => 'Beliana WEB synchronisation config',
  ];

  $form['web']['beliana_web_uri'] = [
    '#type' => 'textfield',
    '#title' => t('Web URI'),
    '#default_value' => variable_get('beliana_web_uri'),
  ];
  $form['web']['beliana_web_login'] = [
    '#type' => 'textfield',
    '#title' => t('User name'),
    '#default_value' => variable_get('beliana_web_login'),
  ];
  $form['web']['beliana_password_login'] = [
    '#type' => 'password',
    '#title' => t('Password'),
    '#default_value' => variable_get('beliana_web_password'),
  ];

  $form['rs'] = [
    '#type' => 'fieldset',
    '#title' => 'RS synchronisation config',
  ];

  $form['rs']['rs_api_uri'] = [
    '#type' => 'textfield',
    '#title' => t('Web URI'),
    '#default_value' => variable_get('rs_api_uri'),
  ];

  $form['rs']['rs_api_login'] = [
    '#type' => 'textfield',
    '#title' => t('User name'),
    '#default_value' => variable_get('rs_api_login'),
  ];

  $form['rs']['rs_api_password'] = [
    '#type' => 'password',
    '#title' => t('Password'),
    '#default_value' => variable_get('rs_api_password'),
  ];

  return system_settings_form($form);
}