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
    'weight' => 5,
  );

  // Exported role: Etymologický redaktor.
  $roles['Etymologický redaktor'] = array(
    'name' => 'Etymologický redaktor',
    'weight' => 13,
  );

  // Exported role: Grafik.
  $roles['Grafik'] = array(
    'name' => 'Grafik',
    'weight' => 3,
  );

  // Exported role: Komentátor.
  $roles['Komentátor'] = array(
    'name' => 'Komentátor',
    'weight' => 8,
  );

  // Exported role: Konzultant.
  $roles['Konzultant'] = array(
    'name' => 'Konzultant',
    'weight' => 15,
  );

  // Exported role: Oznamy.
  $roles['Oznamy'] = array(
    'name' => 'Oznamy',
    'weight' => 16,
  );

  // Exported role: Redaktor.
  $roles['Redaktor'] = array(
    'name' => 'Redaktor',
    'weight' => 6,
  );

  // Exported role: Správca heslára.
  $roles['Správca heslára'] = array(
    'name' => 'Správca heslára',
    'weight' => 4,
  );

  // Exported role: Výstupný redaktor.
  $roles['Výstupný redaktor'] = array(
    'name' => 'Výstupný redaktor',
    'weight' => 12,
  );

  // Exported role: administrátor.
  $roles['administrátor'] = array(
    'name' => 'administrátor',
    'weight' => 14,
  );

  // Exported role: chRedaktor.
  $roles['chRedaktor'] = array(
    'name' => 'chRedaktor',
    'weight' => 17,
  );

  // Exported role: garant.
  $roles['garant'] = array(
    'name' => 'garant',
    'weight' => 18,
  );

  // Exported role: geoRedaktor.
  $roles['geoRedaktor'] = array(
    'name' => 'geoRedaktor',
    'weight' => 2,
  );

  // Exported role: guest.
  $roles['guest'] = array(
    'name' => 'guest',
    'weight' => 19,
  );

  // Exported role: useradmin.
  $roles['useradmin'] = array(
    'name' => 'useradmin',
    'weight' => 7,
  );

  return $roles;
}
