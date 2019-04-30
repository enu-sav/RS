
-- SUMMARY --

The account_sync module allows you to synchronize drupal user account data across
multiple Drupal sites. It currently supports basic account information as well as the drupal core profile module. It also has very basic single sign-on support.

This module uses XMLRPC to transmit data between sites when updates are made so
there's no need to have your sites running on the same database, server, or on the
same subdomain.

It is not recommended to use this module in a production environment. It's still in
the early stages of development and testing and you could risk breaking your
accounts or opening up security holes by using it. You should have complete trust in all sites (and their admins) that you're using this module with.

-- INSTALLATION --

 * Install the account_sync module as usual on all sites you wish to use it
   see http://drupal.org/node/70151 for further information.

 * By default all syncing settings are disabled so merely installing and enabling the
   module isn't enough to start the syncing process.

-- USAGE / CONFIGURATION --

There are two main pieces to the module, the "sender" (the site sending the data) and the "receiver" (the site receiving the data). In many cases all sites will be acting as both parts. The two parts have been separated into separate tabs on the settings page.

 * Configure module at admin/user/account_sync

 * You can control which roles have their accounts sync'd between sites by setting the "sync account" permission. Roles that do not have that permission will not be sync'd. 


Global Settings:

 * The server key setting will allow the data to be encrypted between the different Drupal sites when data is sent over XMLRPC

 * Unless you understand what you're doing, DO NOT enable "Allow UID 1 to by synced" if something goes wrong you could potentially lock yourself out of all of your sites.

 * The "sync all accounts" button should be only used if this site has the most recent data. It will sync all other sites it's connected to with the data it currently has stored.

Sender Settings:

 * To enable the sending of account data /to/ third party drupal sites check "Enable account syncing". 

 * Each drupal site you wish to send data to must be listed in the "Drupal sites to sync to" textarea. Sites that wish to sync to this Drupal site will be able to do so simply by having the server key and don't need to be listed here.

Receiver Settings:

 * To enable the receiving of account data /from/ third party drupal sites check "Allow other sites to sync..".

 * The "Attempt to match roles" setting should be enabled unless you know your role id's are all in sync. The account sync module synchronizes roles across sites and enabling this will synchronize the roles based on role name as opposed to role id.


-- SINGLE SIGN-ON --

The single signon support in this module is currently quite basic but hopefully will be enough to make working between multiple sites a bit more seemless. You need to add a link of the form "sso/goto/<servername>/path/to/destination", where servername might be site1.com and the path/to/destination is the target path on the remote site. When a user clicks on a link like this, they will be automatically redirected and logged in to the remote server. In order for this to work both sites need to have account sync enabled (the target site only needs to be receiving data) and the accounts must actually be in sync (i.e., if you enabled account_sync after the accounts were already created and active, it's possible they won't be in sync between different sites).

-- INTEGRATION --

If you need more control over what servers and accounts to sync to you can hook into hook_account_sync_servers($url, $account).  This hook passes the $url of the server to send data to as well as the $account object of the user who's data is being sent. If FALSE is returned from the hook then the account data will not be sent to the specified server for syncing.

-- SECURITY --

If this module is not configured correctly it could pose a massive security issue for your sites. As described in BAKERY.txt, if any peer site is compromised then ALL sites running account sync will also become compromised. You must have COMPLETE TRUST in the administrators of all sites running account sync.

There are ways however to increase the security of your install:

 * On the receiver settings page use the IP restriction to control which sites are allowed to send data.

 * Depending on your particular use case, you may be able to set up a master/slave style of sync'ing. On the master site disable "Allow other sites to sync into this site" on the receiver settings tab. Then on each slave site, you'll probably want to replace the user edit page with a link to "sso/goto/<masterserver>/user". Or something along those lines.


-- TODO --

 * Synchronize content_profile data
 * Support https for SSO module

-- CONTACT --

For bug reports, feature suggestions and latest developments visit the
project page: http://drupal.org/project/account_sync

Maintainers:
 * Scott Hadfield (hadsie) <hadsie@gmail.com>
