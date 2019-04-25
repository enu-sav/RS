<?php

/**
 * @file
 * Administration interfaces definition
 */

/**
 *
 */
function rs_beliana_sync_ui_sync_settings_form($form, &$form_state) {
  $envs = ['beliana' => 'Beliana', 'rs' => 'RS'];

  foreach ($envs as $key => $title) {
    $form[$key] = [
      '#type' => 'fieldset',
      '#title' => $title
    ];

    $form[$key][$key . '_web_uri'] = [
      '#type' => 'textfield',
      '#title' => t('Web URI'),
      '#default_value' => variable_get($key . '_web_uri'),
    ];

    $form[$key][$key . '_web_login'] = [
      '#type' => 'textfield',
      '#title' => t('User name'),
    ];

    $form[$key][$key . '_password_login'] = [
      '#type' => 'password',
      '#title' => t('Password'),
    ];
  }

  return system_settings_form($form);
}
