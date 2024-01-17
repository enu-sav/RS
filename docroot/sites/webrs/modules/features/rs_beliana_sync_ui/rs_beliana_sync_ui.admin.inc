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

  $form['web']['beliana_web_password'] = [
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('beliana_web_password'),
  ];

  $form['rs'] = [
    '#type' => 'fieldset',
    '#title' => 'RS synchronisation config',
  ];

  $form['rs']['rs_api_type'] = [
    '#type' => 'select',
    '#title' => t('Type'),
    '#options' => [
      'rs' => 'RS',
      'webrs' => 'WEBRS'
    ],
    '#default_value' => variable_get('rs_api_type'),
    '#disabled' => TRUE,
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
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('rs_api_password'),
  ];

  $form['map'] = [
    '#type' => 'fieldset',
    '#title' => 'MAP synchronisation config',
  ];

  $form['map']['freemap_uri'] = [
    '#type' => 'textfield',
    '#title' => t('Freemap URI'),
    '#default_value' => variable_get('freemap_uri'),
  ];

  $form['map']['geodata_uri'] = [
    '#type' => 'textfield',
    '#title' => t('Geodata URI'),
    '#default_value' => variable_get('geodata_uri'),
  ];

  return system_settings_form($form);
}
