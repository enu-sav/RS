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
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_aktualizacie'.
  $permissions['create field_datum_aktualizacie'] = array(
    'name' => 'create field_datum_aktualizacie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_autorovho_textu'.
  $permissions['create field_datum_autorovho_textu'] = array(
    'name' => 'create field_datum_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_prebratia'.
  $permissions['create field_datum_prebratia'] = array(
    'name' => 'create field_datum_prebratia',
    'roles' => array(
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

  // Exported permission: 'create field_datum_vyplatenia'.
  $permissions['create field_datum_vyplatenia'] = array(
    'name' => 'create field_datum_vyplatenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_dlzka_autorovho_textu'.
  $permissions['create field_dlzka_autorovho_textu'] = array(
    'name' => 'create field_dlzka_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_dlzka_autorovho_textu_zad'.
  $permissions['create field_dlzka_autorovho_textu_zad'] = array(
    'name' => 'create field_dlzka_autorovho_textu_zad',
    'roles' => array(
      'Redaktor' => 'Redaktor',
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
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ilustracia'.
  $permissions['create field_ilustracia'] = array(
    'name' => 'create field_ilustracia',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
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
      'Výstupný redaktor' => 'Výstupný redaktor',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_podiel_autora'.
  $permissions['create field_podiel_autora'] = array(
    'name' => 'create field_podiel_autora',
    'roles' => array(),
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

  // Exported permission: 'create field_remote_id'.
  $permissions['create field_remote_id'] = array(
    'name' => 'create field_remote_id',
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

  // Exported permission: 'create field_table'.
  $permissions['create field_table'] = array(
    'name' => 'create field_table',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_table_weight'.
  $permissions['create field_table_weight'] = array(
    'name' => 'create field_table_weight',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
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

  // Exported permission: 'create field_uid_autora'.
  $permissions['create field_uid_autora'] = array(
    'name' => 'create field_uid_autora',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vyslo_knizne'.
  $permissions['create field_vyslo_knizne'] = array(
    'name' => 'create field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zlucene_do'.
  $permissions['create field_zlucene_do'] = array(
    'name' => 'create field_zlucene_do',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zlucene_z'.
  $permissions['create field_zlucene_z'] = array(
    'name' => 'create field_zlucene_z',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zverejnit_meno_autora'.
  $permissions['create field_zverejnit_meno_autora'] = array(
    'name' => 'create field_zverejnit_meno_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create heslo content'.
  $permissions['create heslo content'] = array(
    'name' => 'create heslo content',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
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
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
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
      'Etymologický redaktor' => 'Etymologický redaktor',
      'Jazykový korektor' => 'Jazykový korektor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Konzultant' => 'Konzultant',
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'useradmin' => 'useradmin',
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
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_aktualizacie'.
  $permissions['edit field_datum_aktualizacie'] = array(
    'name' => 'edit field_datum_aktualizacie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_autorovho_textu'.
  $permissions['edit field_datum_autorovho_textu'] = array(
    'name' => 'edit field_datum_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_prebratia'.
  $permissions['edit field_datum_prebratia'] = array(
    'name' => 'edit field_datum_prebratia',
    'roles' => array(
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

  // Exported permission: 'edit field_datum_vyplatenia'.
  $permissions['edit field_datum_vyplatenia'] = array(
    'name' => 'edit field_datum_vyplatenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_dlzka_autorovho_textu'.
  $permissions['edit field_dlzka_autorovho_textu'] = array(
    'name' => 'edit field_dlzka_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_dlzka_autorovho_textu_zad'.
  $permissions['edit field_dlzka_autorovho_textu_zad'] = array(
    'name' => 'edit field_dlzka_autorovho_textu_zad',
    'roles' => array(
      'Redaktor' => 'Redaktor',
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
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ilustracia'.
  $permissions['edit field_ilustracia'] = array(
    'name' => 'edit field_ilustracia',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lexikalna_skupina'.
  $permissions['edit field_lexikalna_skupina'] = array(
    'name' => 'edit field_lexikalna_skupina',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_na_zoradenie'.
  $permissions['edit field_na_zoradenie'] = array(
    'name' => 'edit field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_podiel_autora'.
  $permissions['edit field_podiel_autora'] = array(
    'name' => 'edit field_podiel_autora',
    'roles' => array(),
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

  // Exported permission: 'edit field_remote_id'.
  $permissions['edit field_remote_id'] = array(
    'name' => 'edit field_remote_id',
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

  // Exported permission: 'edit field_table'.
  $permissions['edit field_table'] = array(
    'name' => 'edit field_table',
    'roles' => array(
      'Jazykový korektor' => 'Jazykový korektor',
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_table_weight'.
  $permissions['edit field_table_weight'] = array(
    'name' => 'edit field_table_weight',
    'roles' => array(
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
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

  // Exported permission: 'edit field_uid_autora'.
  $permissions['edit field_uid_autora'] = array(
    'name' => 'edit field_uid_autora',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vyslo_knizne'.
  $permissions['edit field_vyslo_knizne'] = array(
    'name' => 'edit field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zlucene_do'.
  $permissions['edit field_zlucene_do'] = array(
    'name' => 'edit field_zlucene_do',
    'roles' => array(
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

  // Exported permission: 'edit field_zverejnit_meno_autora'.
  $permissions['edit field_zverejnit_meno_autora'] = array(
    'name' => 'edit field_zverejnit_meno_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
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
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_aktualizacie'.
  $permissions['edit own field_datum_aktualizacie'] = array(
    'name' => 'edit own field_datum_aktualizacie',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_autorovho_textu'.
  $permissions['edit own field_datum_autorovho_textu'] = array(
    'name' => 'edit own field_datum_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_prebratia'.
  $permissions['edit own field_datum_prebratia'] = array(
    'name' => 'edit own field_datum_prebratia',
    'roles' => array(
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

  // Exported permission: 'edit own field_datum_vyplatenia'.
  $permissions['edit own field_datum_vyplatenia'] = array(
    'name' => 'edit own field_datum_vyplatenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_dlzka_autorovho_textu'.
  $permissions['edit own field_dlzka_autorovho_textu'] = array(
    'name' => 'edit own field_dlzka_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_dlzka_autorovho_textu_zad'.
  $permissions['edit own field_dlzka_autorovho_textu_zad'] = array(
    'name' => 'edit own field_dlzka_autorovho_textu_zad',
    'roles' => array(
      'Redaktor' => 'Redaktor',
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
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'garant' => 'garant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ilustracia'.
  $permissions['edit own field_ilustracia'] = array(
    'name' => 'edit own field_ilustracia',
    'roles' => array(
      'Autor' => 'Autor',
      'Grafik' => 'Grafik',
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lexikalna_skupina'.
  $permissions['edit own field_lexikalna_skupina'] = array(
    'name' => 'edit own field_lexikalna_skupina',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_na_zoradenie'.
  $permissions['edit own field_na_zoradenie'] = array(
    'name' => 'edit own field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_podiel_autora'.
  $permissions['edit own field_podiel_autora'] = array(
    'name' => 'edit own field_podiel_autora',
    'roles' => array(),
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

  // Exported permission: 'edit own field_remote_id'.
  $permissions['edit own field_remote_id'] = array(
    'name' => 'edit own field_remote_id',
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

  // Exported permission: 'edit own field_table'.
  $permissions['edit own field_table'] = array(
    'name' => 'edit own field_table',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_table_weight'.
  $permissions['edit own field_table_weight'] = array(
    'name' => 'edit own field_table_weight',
    'roles' => array(
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
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

  // Exported permission: 'edit own field_uid_autora'.
  $permissions['edit own field_uid_autora'] = array(
    'name' => 'edit own field_uid_autora',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vyslo_knizne'.
  $permissions['edit own field_vyslo_knizne'] = array(
    'name' => 'edit own field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zlucene_do'.
  $permissions['edit own field_zlucene_do'] = array(
    'name' => 'edit own field_zlucene_do',
    'roles' => array(
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

  // Exported permission: 'edit own field_zverejnit_meno_autora'.
  $permissions['edit own field_zverejnit_meno_autora'] = array(
    'name' => 'edit own field_zverejnit_meno_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
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
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit title_field'.
  $permissions['edit title_field'] = array(
    'name' => 'edit title_field',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view any unpublished heslo content'.
  $permissions['view any unpublished heslo content'] = array(
    'name' => 'view any unpublished heslo content',
    'roles' => array(
      'Etymologický redaktor' => 'Etymologický redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'guest' => 'guest',
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

  // Exported permission: 'view field_datum_autorovho_textu'.
  $permissions['view field_datum_autorovho_textu'] = array(
    'name' => 'view field_datum_autorovho_textu',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_prebratia'.
  $permissions['view field_datum_prebratia'] = array(
    'name' => 'view field_datum_prebratia',
    'roles' => array(
      'administrátor' => 'administrátor',
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

  // Exported permission: 'view field_datum_vyplatenia'.
  $permissions['view field_datum_vyplatenia'] = array(
    'name' => 'view field_datum_vyplatenia',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_dlzka_autorovho_textu'.
  $permissions['view field_dlzka_autorovho_textu'] = array(
    'name' => 'view field_dlzka_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_dlzka_autorovho_textu_zad'.
  $permissions['view field_dlzka_autorovho_textu_zad'] = array(
    'name' => 'view field_dlzka_autorovho_textu_zad',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
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
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_podiel_autora'.
  $permissions['view field_podiel_autora'] = array(
    'name' => 'view field_podiel_autora',
    'roles' => array(),
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

  // Exported permission: 'view field_remote_id'.
  $permissions['view field_remote_id'] = array(
    'name' => 'view field_remote_id',
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

  // Exported permission: 'view field_table'.
  $permissions['view field_table'] = array(
    'name' => 'view field_table',
    'roles' => array(
      'Jazykový redaktor 1' => 'Jazykový redaktor 1',
      'Jazykový redaktor 2' => 'Jazykový redaktor 2',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_table_weight'.
  $permissions['view field_table_weight'] = array(
    'name' => 'view field_table_weight',
    'roles' => array(
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'geoRedaktor' => 'geoRedaktor',
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

  // Exported permission: 'view field_uid_autora'.
  $permissions['view field_uid_autora'] = array(
    'name' => 'view field_uid_autora',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vyplatit'.
  $permissions['view field_vyplatit'] = array(
    'name' => 'view field_vyplatit',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Správca heslára' => 'Správca heslára',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vyslo_knizne'.
  $permissions['view field_vyslo_knizne'] = array(
    'name' => 'view field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zlucene_do'.
  $permissions['view field_zlucene_do'] = array(
    'name' => 'view field_zlucene_do',
    'roles' => array(
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

  // Exported permission: 'view field_zverejnit_meno_autora'.
  $permissions['view field_zverejnit_meno_autora'] = array(
    'name' => 'view field_zverejnit_meno_autora',
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

  // Exported permission: 'view own field_datum_autorovho_textu'.
  $permissions['view own field_datum_autorovho_textu'] = array(
    'name' => 'view own field_datum_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_prebratia'.
  $permissions['view own field_datum_prebratia'] = array(
    'name' => 'view own field_datum_prebratia',
    'roles' => array(
      'administrátor' => 'administrátor',
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

  // Exported permission: 'view own field_datum_vyplatenia'.
  $permissions['view own field_datum_vyplatenia'] = array(
    'name' => 'view own field_datum_vyplatenia',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_dlzka_autorovho_textu'.
  $permissions['view own field_dlzka_autorovho_textu'] = array(
    'name' => 'view own field_dlzka_autorovho_textu',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_dlzka_autorovho_textu_zad'.
  $permissions['view own field_dlzka_autorovho_textu_zad'] = array(
    'name' => 'view own field_dlzka_autorovho_textu_zad',
    'roles' => array(
      'Redaktor' => 'Redaktor',
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
      'administrátor' => 'administrátor',
      'guest' => 'guest',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_na_zoradenie'.
  $permissions['view own field_na_zoradenie'] = array(
    'name' => 'view own field_na_zoradenie',
    'roles' => array(
      'Správca heslára' => 'Správca heslára',
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_podiel_autora'.
  $permissions['view own field_podiel_autora'] = array(
    'name' => 'view own field_podiel_autora',
    'roles' => array(),
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

  // Exported permission: 'view own field_remote_id'.
  $permissions['view own field_remote_id'] = array(
    'name' => 'view own field_remote_id',
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

  // Exported permission: 'view own field_table'.
  $permissions['view own field_table'] = array(
    'name' => 'view own field_table',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
      'geoRedaktor' => 'geoRedaktor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_table_weight'.
  $permissions['view own field_table_weight'] = array(
    'name' => 'view own field_table_weight',
    'roles' => array(
      'administrátor' => 'administrátor',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'view own field_uid_autora'.
  $permissions['view own field_uid_autora'] = array(
    'name' => 'view own field_uid_autora',
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
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vyslo_knizne'.
  $permissions['view own field_vyslo_knizne'] = array(
    'name' => 'view own field_vyslo_knizne',
    'roles' => array(
      'administrátor' => 'administrátor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zlucene_do'.
  $permissions['view own field_zlucene_do'] = array(
    'name' => 'view own field_zlucene_do',
    'roles' => array(
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

  // Exported permission: 'view own field_zverejnit_meno_autora'.
  $permissions['view own field_zverejnit_meno_autora'] = array(
    'name' => 'view own field_zverejnit_meno_autora',
    'roles' => array(
      'Redaktor' => 'Redaktor',
      'Výstupný redaktor' => 'Výstupný redaktor',
      'administrátor' => 'administrátor',
      'useradmin' => 'useradmin',
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
