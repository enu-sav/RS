<?php

/**
 * @file
 * Handler for sending account data to other sites
 */

/**
 * Send an account update to all target sites.
 */
function account_sync_send_update($op, &$edit, $account, $category) {
  global $_account_sync_;

  // Ensure syncing is enabled and check the account_sync flag (no recursion).
  if (!variable_get('account_sync_enabled', FALSE) || $_account_sync_) {
    return;
  }

  if ($op == 'update') {
    // Save the original username so that if it's changed it can still be
    // matched on the syncing sites.
    $original_username = $account->original->name;
  }
  else {
    $original_username = $account->name;
  }

  _account_sync_send_update($edit, $account, $category, $original_username);
}

/**
 * Helper function to do the heavy lifting of the account information transfer.
 */
function _account_sync_send_update($edit, $account, $category, $username = NULL) {
  // Check sync account permission and don't sync user with uid 0
  // or 1 (unless permitted).
  if (!$account->uid || !user_access('sync account', $account) || ($account->uid == 1 && !variable_get('account_sync_uid1', FALSE))) {
    return;
  }

  // No need to send a plain text password across. We can just send the hash.
  unset($edit['pass']);

  // Flag to verify that account data was sent somewhere.
  $data_sent = 0;

  _account_sync_update_roles($account);

  // Send the data to all target servers.
  foreach (account_sync_servers($account) as $server_url) {
    $results = xmlrpc(
      $server_url . '/xmlrpc.php',
      array(
        'account_sync.updateUser' => array(
          variable_get('account_sync_server_key', ''),
          $username ? $username : $account->name,
          $edit,
          (array) $account,
          $category,
          user_roles(),
        ),
      )
    );
    if ($errmsg = xmlrpc_error_msg()) {
      watchdog('account_sync', 'XMLRPC error received while syncing users to @server: ' . $errmsg, array('@server' => $server_url), WATCHDOG_ERROR);
      return WATCHDOG_ERROR;
    }
    if (is_array($results)) {
      $vars = is_array($results[2]) ? $results[2] : array();
      $vars['@server'] = $server_url;
      watchdog('account_sync', '@server: ' . $results[1], $vars, $results[0]);
      $data_sent = $results[0] == WATCHDOG_ERROR ? WATCHDOG_ERROR : 1;
    }
  }
  return $data_sent;
}

/**
 * Properly set the roles in the account prior to sending to the receiver.
 *
 * When updating a user account the roles aren't always properly set to the
 * ($rid => $name) format, but instead ($rid => $rid). This function should
 * correct that issue.
 */
function _account_sync_update_roles(&$account) {
  foreach ($account->roles as $rid => $role_name) {
    if (is_numeric($role_name)) {
      $role = user_role_load($rid);
      $account->roles[$rid] = $role->name;
    }
  }
}
