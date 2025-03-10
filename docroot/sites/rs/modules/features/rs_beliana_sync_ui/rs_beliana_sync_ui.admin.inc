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
    '#title' => 'WEBRS synchronisation config',
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

  $form['rs']['rs_api_taxonomy_names_files'] = [
    '#type' => 'textfield',
    '#default_value' => variable_get('rs_api_taxonomy_names_files'),
    '#maxlength' => 60,
    '#autocomplete_path' => 'get-terms-subory-autocomplete',
    '#title' => 'V knižnom RS automaticky vyradiť novovytvorené heslá v abecednom rozsahu A až',
  ];

  return system_settings_form($form);
}
