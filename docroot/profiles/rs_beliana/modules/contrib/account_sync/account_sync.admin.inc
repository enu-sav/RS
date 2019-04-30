<?php

/**
 * @file
 * Admin settings for account_sync.
 */

/**
 * FAPI callback for the admin settings form.
 */
function account_sync_settings() {
  $form = array();

  if (!account_sync_allowed_roles()) {
    drupal_set_message(t('No roles have been configured with the <em>sync account</em> permission. Account syncing will not work until you set up your <a href="!url">permissions</a> appropriately.', array('!url' => url('admin/user/permissions'))), 'warning');
  }

  $form['account_sync_server_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Server key'),
    '#description' => t('Any sites you wish to sync with must have the same key'),
    '#default_value' => variable_get('account_sync_server_key', ''),
  );

  $form['account_sync_uid1'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow UID 1 to be synced.'),
    '#description' => t("It's recommended that this is left disabled."),
    '#default_value' => variable_get('account_sync_uid1', FALSE),
  );

  $form['sync_all'] = array(
    '#type' => 'fieldset',
    '#title' => 'Sync accounts',
    '#collapsible' => FALSE,
  );
  $form['sync_all']['info'] = array(
    '#markup' => t('This button will send all data from accounts on this site to all other configured sites.'),
    '#prefix' => '<p>',
    '#suffix' => '</p>',
  );
  $form['sync_all']['account_sync_sync_all'] = array(
    '#type' => 'submit',
    '#value' => t('Sync all accounts now'),
    '#submit' => array('account_sync_sync_all'),
  );

  return system_settings_form($form);
}

/**
 * Sync all accounts from this site to a 3rd party drupal site.
 */
function account_sync_sync_all() {
  module_load_include('inc', 'account_sync', 'account_sync.sender');

  $roles = account_sync_allowed_roles();
  $uids = db_query("SELECT uid FROM {users_roles} WHERE rid IN (:rids) ORDER BY uid", array(':rids' => array_keys($roles)))->fetchCol();

  $accounts = user_load_multiple($uids);
  foreach ($accounts as $account) {
    $edit = (array) $account;
    unset($edit['uid']);
    unset($edit['data']);
    if ($result = _account_sync_send_update($edit, $account, 'account')) {
      if ($result == 1) {
        drupal_set_message(t("Sync'd account information for %username", array('%username' => $account->name)));
      }
      elseif ($result == WATCHDOG_ERROR) {
        drupal_set_message(t('Error syncing account information for %username, see recent log entries for more details', array('%username' => $account->name)));
      }
    }
  }
}

/**
 * Settings form for the sender.
 */
function account_sync_sender_settings() {
  $form = array();

  $form['account_sync_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable account syncing'),
    '#description' => t('If this is checked, then anytime an account is changed it will sync those changes to the servers listed below'),
    '#default_value' => variable_get('account_sync_enabled', FALSE),
  );

  $form['account_sync_servers'] = array(
    '#type' => 'textarea',
    '#title' => t('Sites to send user account data to'),
    '#description' => t("Enter each site you would like to sync accounts with. Each site should be on it's own line. Include <em>http://</em>."),
    '#default_value' => variable_get('account_sync_servers', ''),
  );

  return system_settings_form($form);
}

/**
 * Settings form for the receiver.
 */
function account_sync_receiver_settings() {
  $form['account_sync_in_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow other sites to sync into this site'),
    '#description' => t('Enabling this will allow 3rd party drupal sites with the server key to update user accounts on /this/ site when changes happen on their site'),
    '#default_value' => variable_get('account_sync_in_enabled', FALSE),
  );

  $form['account_sync_create_users'] = array(
    '#type' => 'checkbox',
    '#title' => t("Create users that aren't found when syncing to this site."),
    '#description' => t("If enabled, users synced from another server to this server that don't currently exist on this server will be created. This setting has no effect on remote servers."),
    '#default_value' => variable_get('account_sync_create_users', FALSE),
  );

  $form['account_sync_match_roles'] = array(
    '#type' => 'checkbox',
    '#title' => t('Attempt to match roles'),
    '#description' => t('Role ids may not be in sync from site to site. Using this will attempt to match a users roles by matching against role names instead of role IDs.') . ' (<strong>' . t('Recommended') . '</strong>)',
    '#default_value' => variable_get('account_sync_match_roles', TRUE),
  );

  $form['restrictions'] = array(
    '#type' => 'fieldset',
    '#title' => t('IP restrictions'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['restrictions']['account_sync_ip_restriction'] = array(
    '#type' => 'radios',
    '#title' => t('Restrict account sync update access to specific IP addresses'),
    '#options' => array(
      t('Allow access from all IPs except the listed ones.'),
      t('Allow access from only the listed IPs.'),
    ),
    '#default_value' => variable_get('account_sync_ip_restriction', 0),
  );

  $form['restrictions']['account_sync_ips'] = array(
    '#type' => 'textarea',
    '#title' => t('IPs'),
    '#description' => t('Enter one IP address per line.'),
    '#default_value' => variable_get('account_sync_ips', ''),
  );

  return system_settings_form($form);
}
