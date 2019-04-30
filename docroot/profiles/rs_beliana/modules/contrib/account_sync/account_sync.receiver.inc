<?php

/**
 * @file
 * Handler for receiving and updating user account data.
 */

/**
 * XMLRPC callback to update the user account on /this/ drupal site.
 *
 * @TODO: What do we do about deleted users?
 */
function account_sync_update_user($server_key, $username, $edit, $remote_account, $category, $roles) {
  global $_account_sync_;

  // Flag to catch recursive syncing.
  $_account_sync_ = TRUE;

  if ($message = _account_sync_sync_in_deny($server_key, $category)) {
    return $message;
  }

  // Find the matching account on our side of things
  // @TODO: What if an account is being renamed and the renamed account
  // matches an existing account on our end?
  if ($username && ($local_account = user_load_by_name($username))) {
    // Found the account, so update it.
    if (user_access('sync account', $local_account)) {
      if (array_key_exists('roles', $edit)) {
        $edit['roles'] = _account_sync_edit_roles($roles, $remote_account['roles'], $local_account->roles);
      }
      unset($edit['original']);

      $local_account = user_save($local_account, $edit, $category);
      _account_sync_update_pass($local_account->uid, $remote_account['pass']);
      $message = array(
        WATCHDOG_INFO,
        'User account @account has been updated.',
        array('@account' => $local_account->name),
      );
      watchdog(
        'account_sync',
        'User account @account has been updated by a remote server.',
        array('@account' => $local_account->name)
      );
      module_invoke_all('account_sync_update', $remote_account);
    }
    else {
      $message = array(
        WATCHDOG_ERROR,
        'Not permitted to update account @account.',
        array('@account' => $remote_account['name']),
      );
      watchdog(
        'account_sync',
        'Remote server attempted to sync @account, but it is not in a role that can be synced',
        array('@account' => $username)
      );
    }
  }
  else {
    // No account found, so create the user account.
    if (variable_get('account_sync_create_users', FALSE)) {
      unset($remote_account['uid']);
      $user = new stdClass();
      $user->uid = 0;
      $remote_account['roles'] = _account_sync_roles($roles, $remote_account['roles']);
      unset($edit['original']);
      $remote_account['is_new'] = TRUE;
      $local_account = user_save($user, $remote_account);
      _account_sync_update_pass($local_account->uid, $remote_account['pass']);

      $message = array(
        WATCHDOG_INFO,
        'User account @account created',
        array('@account' => $local_account->name),
      );
      watchdog(
        'account_sync',
        'User account @account created by a remote server.',
        array('@account' => $local_account->name)
      );
      module_invoke_all('account_sync_add', $remote_account);
    }
    else {
      // No account found, and don't create new accounts on this site.
      $message = array(
        WATCHDOG_ERROR,
        "Couldn't find a valid account matching @account :(",
        array('@account' => $remote_account['init']),
      );
    }
  }
  return $message;
}

/**
 * Update the password on the account.
 *
 * We need to manually set the password since we don't send plain
 * text passwords between servers.
 */
function _account_sync_update_pass($uid, $pass) {
  db_query("UPDATE {users} SET pass = :pass WHERE uid = :uid", array(':pass' => $pass, ':uid' => $uid));
}

/**
 * Find a list of roles that should be set on the given account.
 *
 * If a role exists both on this site and on the sending site then sync it
 * against the account that was sent.
 *
 * @param Array $all_roles
 *   user_roles() from the sending site
 * @param Array $new_roles
 *   roles as set on the account that was sent
 * @param Array $existing_roles
 *   roles as they exist on the matching user account on this site
 *
 * @return Array
 *   the list of roles to be set on the provided account.
 */
function _account_sync_roles($all_roles, $new_roles, $existing_roles = NULL) {
  // If not matching roles based on role name, then we can return. This implies
  // that the rids on this site are identical to those on the sending site.
  if (!variable_get('account_sync_match_roles', FALSE)) {
    return $new_roles;
  }

  // Set any roles that exist both on this site AND are enabled on the user
  // account that was sent to us.
  $roles = array();
  foreach (user_roles() as $rid => $role_name) {
    if ($rid == DRUPAL_ANONYMOUS_RID || $rid == DRUPAL_AUTHENTICATED_RID) {
      continue;
    }
    if (in_array($role_name, $new_roles)) {
      $roles[$rid] = $role_name;
    }
  }

  // Set any roles that are currently enabled on the user on this site and
  // don't exist on the sending site.
  if (isset($existing_roles)) {
    foreach ($existing_roles as $rid => $name) {
      // Add in any roles that were already set but don't exist on the
      // foreign site.
      if (!in_array($name, $all_roles)) {
        $roles[$rid] = $name;
      }
    }
  }

  return $roles;
}

/**
 * Helper to convert the $account role format into the $edit role format.
 */
function _account_sync_edit_roles($all_roles, $new_roles, $existing_roles) {
  $edit_roles = _account_sync_roles($all_roles, $new_roles, $existing_roles);
  // The roles in the edit array is in a format that's not useful to us
  // So we need to rebuild it based on the $account['roles'] array.
  $roles = array();
  foreach (array_keys($edit_roles) as $rid) {
    $roles[$rid] = $rid;
  }
  return $roles;
}

/**
 * Check a any cases that should trigger us to deny the sync.
 */
function _account_sync_sync_in_deny($server_key, $category) {
  $message = NULL;

  // Check that account sync is enable and that some roles have been setup.
  if (!variable_get('account_sync_in_enabled', FALSE) || !account_sync_allowed_roles()) {
    $message = array(WATCHDOG_ERROR, 'Account sync not allowed');
    watchdog('account_sync', 'Remote server attempted to sync accounts, but sync-in is currently disabled.', array(), WATCHDOG_NOTICE);
  }
  elseif ($server_key != variable_get('account_sync_server_key', '')) {
    $message = array(WATCHDOG_ERROR, 'Invalid server key');
    watchdog('account_sync', 'Remote server passed invalid key when attempting to sync accounts.', array(), WATCHDOG_NOTICE);
  }
  else {
    // Check ip addresses.
    $sender_ip = ip_address();
    $ip_setting = variable_get('account_sync_ip_restriction', 0);
    $ips = array();
    foreach (explode("\n", variable_get('account_sync_ips', array())) as $ip) {
      $ips[] = trim($ip);
    }

    if (($ip_setting == 0 && in_array($sender_ip, $ips)) ||
      ($ip_setting == 1 && !in_array($sender_ip, $ips))) {
      $message = array(WATCHDOG_ERROR, 'This IP is not permitted access to sync to this site.');
      watchdog('account_sync', 'Remote server (%ip) attempted to update an account but that IP is not permitted to update accounts on this site.', array('%ip' => $sender_ip), WATCHDOG_NOTICE);
    }
  }
  return $message;
}
