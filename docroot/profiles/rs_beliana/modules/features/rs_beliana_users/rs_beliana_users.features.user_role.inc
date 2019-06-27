<?php
/**
 * @file
 * rs_beliana_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rs_beliana_users_user_default_roles() {
  $roles = array();

  // Exported role: Autor.
  $roles['Autor'] = array(
    'name' => 'Autor',
    'weight' => 4,
  );

  // Exported role: Grafik.
  $roles['Grafik'] = array(
    'name' => 'Grafik',
    'weight' => 2,
  );

  // Exported role: Oznamy.
  $roles['Oznamy'] = array(
    'name' => 'Oznamy',
    'weight' => 7,
  );

  // Exported role: Redaktor.
  $roles['Redaktor'] = array(
    'name' => 'Redaktor',
    'weight' => 5,
  );

  // Exported role: administrátor.
  $roles['administrátor'] = array(
    'name' => 'administrátor',
    'weight' => 6,
  );

  // Exported role: iGrafik.
  $roles['iGrafik'] = array(
    'name' => 'iGrafik',
    'weight' => 3,
  );

  return $roles;
}
