<?php
/**
 * @file
 * rs_beliana_node_heslo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rs_beliana_node_heslo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_atributy'.
  $permissions['create field_atributy'] = array(
    'name' => 'create field_atributy',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum'.
  $permissions['create field_datum'] = array(
    'name' => 'create field_datum',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_aktualizacie'.
  $permissions['create field_datum_aktualizacie'] = array(
    'name' => 'create field_datum_aktualizacie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_prveho_zverejnenia'.
  $permissions['create field_datum_prveho_zverejnenia'] = array(
    'name' => 'create field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_errta'.
  $permissions['create field_errta'] = array(
    'name' => 'create field_errta',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ilustracia'.
  $permissions['create field_ilustracia'] = array(
    'name' => 'create field_ilustracia',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_lexikalna_skupina'.
  $permissions['create field_lexikalna_skupina'] = array(
    'name' => 'create field_lexikalna_skupina',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_na_zoradenie'.
  $permissions['create field_na_zoradenie'] = array(
    'name' => 'create field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_povodne_lexikalne_skupiny'.
  $permissions['create field_povodne_lexikalne_skupiny'] = array(
    'name' => 'create field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_redaktori_zluceneho'.
  $permissions['create field_redaktori_zluceneho'] = array(
    'name' => 'create field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_spravit_1_korekturu'.
  $permissions['create field_spravit_1_korekturu'] = array(
    'name' => 'create field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_taxsubor'.
  $permissions['create field_taxsubor'] = array(
    'name' => 'create field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_text_z_gh'.
  $permissions['create field_text_z_gh'] = array(
    'name' => 'create field_text_z_gh',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vyplatit'.
  $permissions['create field_vyplatit'] = array(
    'name' => 'create field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zlucene_do'.
  $permissions['create field_zlucene_do'] = array(
    'name' => 'create field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zlucene_z'.
  $permissions['create field_zlucene_z'] = array(
    'name' => 'create field_zlucene_z',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create heslo content'.
  $permissions['create heslo content'] = array(
    'name' => 'create heslo content',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create title_field'.
  $permissions['create title_field'] = array(
    'name' => 'create title_field',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'ig-redaktor' => 'ig-redaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any heslo content'.
  $permissions['delete any heslo content'] = array(
    'name' => 'delete any heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own heslo content'.
  $permissions['delete own heslo content'] = array(
    'name' => 'delete own heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any heslo content'.
  $permissions['edit any heslo content'] = array(
    'name' => 'edit any heslo content',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_atributy'.
  $permissions['edit field_atributy'] = array(
    'name' => 'edit field_atributy',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum'.
  $permissions['edit field_datum'] = array(
    'name' => 'edit field_datum',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_aktualizacie'.
  $permissions['edit field_datum_aktualizacie'] = array(
    'name' => 'edit field_datum_aktualizacie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_prveho_zverejnenia'.
  $permissions['edit field_datum_prveho_zverejnenia'] = array(
    'name' => 'edit field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_errta'.
  $permissions['edit field_errta'] = array(
    'name' => 'edit field_errta',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ilustracia'.
  $permissions['edit field_ilustracia'] = array(
    'name' => 'edit field_ilustracia',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lexikalna_skupina'.
  $permissions['edit field_lexikalna_skupina'] = array(
    'name' => 'edit field_lexikalna_skupina',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_na_zoradenie'.
  $permissions['edit field_na_zoradenie'] = array(
    'name' => 'edit field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_povodne_lexikalne_skupiny'.
  $permissions['edit field_povodne_lexikalne_skupiny'] = array(
    'name' => 'edit field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_redaktori_zluceneho'.
  $permissions['edit field_redaktori_zluceneho'] = array(
    'name' => 'edit field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_spravit_1_korekturu'.
  $permissions['edit field_spravit_1_korekturu'] = array(
    'name' => 'edit field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_taxsubor'.
  $permissions['edit field_taxsubor'] = array(
    'name' => 'edit field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_text_z_gh'.
  $permissions['edit field_text_z_gh'] = array(
    'name' => 'edit field_text_z_gh',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vyplatit'.
  $permissions['edit field_vyplatit'] = array(
    'name' => 'edit field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zlucene_do'.
  $permissions['edit field_zlucene_do'] = array(
    'name' => 'edit field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zlucene_z'.
  $permissions['edit field_zlucene_z'] = array(
    'name' => 'edit field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_atributy'.
  $permissions['edit own field_atributy'] = array(
    'name' => 'edit own field_atributy',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum'.
  $permissions['edit own field_datum'] = array(
    'name' => 'edit own field_datum',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_aktualizacie'.
  $permissions['edit own field_datum_aktualizacie'] = array(
    'name' => 'edit own field_datum_aktualizacie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_prveho_zverejnenia'.
  $permissions['edit own field_datum_prveho_zverejnenia'] = array(
    'name' => 'edit own field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_errta'.
  $permissions['edit own field_errta'] = array(
    'name' => 'edit own field_errta',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ilustracia'.
  $permissions['edit own field_ilustracia'] = array(
    'name' => 'edit own field_ilustracia',
    'roles' => array(
      'Autor' => 'Autor',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lexikalna_skupina'.
  $permissions['edit own field_lexikalna_skupina'] = array(
    'name' => 'edit own field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_na_zoradenie'.
  $permissions['edit own field_na_zoradenie'] = array(
    'name' => 'edit own field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_povodne_lexikalne_skupiny'.
  $permissions['edit own field_povodne_lexikalne_skupiny'] = array(
    'name' => 'edit own field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_redaktori_zluceneho'.
  $permissions['edit own field_redaktori_zluceneho'] = array(
    'name' => 'edit own field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_spravit_1_korekturu'.
  $permissions['edit own field_spravit_1_korekturu'] = array(
    'name' => 'edit own field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_taxsubor'.
  $permissions['edit own field_taxsubor'] = array(
    'name' => 'edit own field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_text_z_gh'.
  $permissions['edit own field_text_z_gh'] = array(
    'name' => 'edit own field_text_z_gh',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vyplatit'.
  $permissions['edit own field_vyplatit'] = array(
    'name' => 'edit own field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zlucene_do'.
  $permissions['edit own field_zlucene_do'] = array(
    'name' => 'edit own field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zlucene_z'.
  $permissions['edit own field_zlucene_z'] = array(
    'name' => 'edit own field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own heslo content'.
  $permissions['edit own heslo content'] = array(
    'name' => 'edit own heslo content',
    'roles' => array(
      'Autor' => 'Autor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own title_field'.
  $permissions['edit own title_field'] = array(
    'name' => 'edit own title_field',
    'roles' => array(
      'Grafik' => 'Grafik',
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit title_field'.
  $permissions['edit title_field'] = array(
    'name' => 'edit title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'administrátor' => 'administrátor',
      'ig-redaktor' => 'ig-redaktor',
      'iredaktor' => 'iredaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view any unpublished heslo content'.
  $permissions['view any unpublished heslo content'] = array(
    'name' => 'view any unpublished heslo content',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_atributy'.
  $permissions['view field_atributy'] = array(
    'name' => 'view field_atributy',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum'.
  $permissions['view field_datum'] = array(
    'name' => 'view field_datum',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_aktualizacie'.
  $permissions['view field_datum_aktualizacie'] = array(
    'name' => 'view field_datum_aktualizacie',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_prveho_zverejnenia'.
  $permissions['view field_datum_prveho_zverejnenia'] = array(
    'name' => 'view field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_errta'.
  $permissions['view field_errta'] = array(
    'name' => 'view field_errta',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ilustracia'.
  $permissions['view field_ilustracia'] = array(
    'name' => 'view field_ilustracia',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_lexikalna_skupina'.
  $permissions['view field_lexikalna_skupina'] = array(
    'name' => 'view field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_na_zoradenie'.
  $permissions['view field_na_zoradenie'] = array(
    'name' => 'view field_na_zoradenie',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 2HP' => 'Výstupný redaktor 2HP',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_povodne_lexikalne_skupiny'.
  $permissions['view field_povodne_lexikalne_skupiny'] = array(
    'name' => 'view field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_redaktori_zluceneho'.
  $permissions['view field_redaktori_zluceneho'] = array(
    'name' => 'view field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_spravit_1_korekturu'.
  $permissions['view field_spravit_1_korekturu'] = array(
    'name' => 'view field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_taxsubor'.
  $permissions['view field_taxsubor'] = array(
    'name' => 'view field_taxsubor',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_text_z_gh'.
  $permissions['view field_text_z_gh'] = array(
    'name' => 'view field_text_z_gh',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vyplatit'.
  $permissions['view field_vyplatit'] = array(
    'name' => 'view field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zlucene_do'.
  $permissions['view field_zlucene_do'] = array(
    'name' => 'view field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zlucene_z'.
  $permissions['view field_zlucene_z'] = array(
    'name' => 'view field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_atributy'.
  $permissions['view own field_atributy'] = array(
    'name' => 'view own field_atributy',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum'.
  $permissions['view own field_datum'] = array(
    'name' => 'view own field_datum',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_aktualizacie'.
  $permissions['view own field_datum_aktualizacie'] = array(
    'name' => 'view own field_datum_aktualizacie',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_prveho_zverejnenia'.
  $permissions['view own field_datum_prveho_zverejnenia'] = array(
    'name' => 'view own field_datum_prveho_zverejnenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_errta'.
  $permissions['view own field_errta'] = array(
    'name' => 'view own field_errta',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ilustracia'.
  $permissions['view own field_ilustracia'] = array(
    'name' => 'view own field_ilustracia',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_lexikalna_skupina'.
  $permissions['view own field_lexikalna_skupina'] = array(
    'name' => 'view own field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_na_zoradenie'.
  $permissions['view own field_na_zoradenie'] = array(
    'name' => 'view own field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor 4' => 'Výstupný redaktor 4',
      'Výstupný redaktor 5' => 'Výstupný redaktor 5',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_povodne_lexikalne_skupiny'.
  $permissions['view own field_povodne_lexikalne_skupiny'] = array(
    'name' => 'view own field_povodne_lexikalne_skupiny',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_redaktori_zluceneho'.
  $permissions['view own field_redaktori_zluceneho'] = array(
    'name' => 'view own field_redaktori_zluceneho',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_spravit_1_korekturu'.
  $permissions['view own field_spravit_1_korekturu'] = array(
    'name' => 'view own field_spravit_1_korekturu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_taxsubor'.
  $permissions['view own field_taxsubor'] = array(
    'name' => 'view own field_taxsubor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_text_z_gh'.
  $permissions['view own field_text_z_gh'] = array(
    'name' => 'view own field_text_z_gh',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vyplatit'.
  $permissions['view own field_vyplatit'] = array(
    'name' => 'view own field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor 1' => 'Výstupný redaktor 1',
      'Výstupný redaktor 3' => 'Výstupný redaktor 3',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zlucene_do'.
  $permissions['view own field_zlucene_do'] = array(
    'name' => 'view own field_zlucene_do',
    'roles' => array(
      'Výstupný redaktor 2' => 'Výstupný redaktor 2',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zlucene_z'.
  $permissions['view own field_zlucene_z'] = array(
    'name' => 'view own field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own title_field'.
  $permissions['view own title_field'] = array(
    'name' => 'view own title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view title_field'.
  $permissions['view title_field'] = array(
    'name' => 'view title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
