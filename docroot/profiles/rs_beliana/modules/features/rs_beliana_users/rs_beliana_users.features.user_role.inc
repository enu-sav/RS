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
    'weight' => 2,
  );

  // Exported role: Grafik.
  $roles['Grafik'] = array(
    'name' => 'Grafik',
    'weight' => 13,
  );

  // Exported role: Jazykový redaktor 1.
  $roles['Jazykový redaktor 1'] = array(
    'name' => 'Jazykový redaktor 1',
    'weight' => 5,
  );

  // Exported role: Jazykový redaktor 2.
  $roles['Jazykový redaktor 2'] = array(
    'name' => 'Jazykový redaktor 2',
    'weight' => 6,
  );

  // Exported role: Konzultant.
  $roles['Konzultant'] = array(
    'name' => 'Konzultant',
    'weight' => 17,
  );

  // Exported role: Redaktor.
  $roles['Redaktor'] = array(
    'name' => 'Redaktor',
    'weight' => 3,
  );

  // Exported role: Správca heslára.
  $roles['Správca heslára'] = array(
    'name' => 'Správca heslára',
    'weight' => 4,
  );

  // Exported role: Výstupný redaktor 1.
  $roles['Výstupný redaktor 1'] = array(
    'name' => 'Výstupný redaktor 1',
    'weight' => 7,
  );

  // Exported role: Výstupný redaktor 2.
  $roles['Výstupný redaktor 2'] = array(
    'name' => 'Výstupný redaktor 2',
    'weight' => 8,
  );

  // Exported role: Výstupný redaktor 2HP.
  $roles['Výstupný redaktor 2HP'] = array(
    'name' => 'Výstupný redaktor 2HP',
    'weight' => 9,
  );

  // Exported role: Výstupný redaktor 3.
  $roles['Výstupný redaktor 3'] = array(
    'name' => 'Výstupný redaktor 3',
    'weight' => 10,
  );

  // Exported role: Výstupný redaktor 4.
  $roles['Výstupný redaktor 4'] = array(
    'name' => 'Výstupný redaktor 4',
    'weight' => 11,
  );

  // Exported role: Výstupný redaktor 5.
  $roles['Výstupný redaktor 5'] = array(
    'name' => 'Výstupný redaktor 5',
    'weight' => 12,
  );

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 16,
  );

  // Exported role: administrátor.
  $roles['administrátor'] = array(
    'name' => 'administrátor',
    'weight' => 14,
  );

  // Exported role: iredaktor.
  $roles['iredaktor'] = array(
    'name' => 'iredaktor',
    'weight' => 15,
  );

  return $roles;
}
