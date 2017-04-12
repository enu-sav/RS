<?php
/**
 * @file
 * rs_beliana_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function rs_beliana_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'bb';
  $feeds_importer->config = array(
    'name' => 'Beliana CSV import knižne vydané',
    'description' => 'Importovanie knižne vydaných hesiel z CSV súboru',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1427',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'text',
            'target' => 'field_text_hesla',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'atrib',
            'target' => 'field_atributy',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'ilustracia',
            'target' => 'field_ilustracia',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'kategoria',
            'target' => 'field_lexikalna_skupina',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'komentar',
            'target' => 'field_komentar_instrukcie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'datum',
            'target' => 'field_datum:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'errata',
            'target' => 'field_errta',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'importovane_heslo',
        'update_non_existent' => 'skip',
        'insert_new' => '1',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['bb'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'beliana_importovanie_gh';
  $feeds_importer->config = array(
    'name' => 'Beliana importovanie GH',
    'description' => 'Importovanie hesiel na úrovni GH, heslá K - Ž',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '719',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'zorad',
            'target' => 'field_na_zoradenie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'textHesla',
            'target' => 'field_text_hesla',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'povodnyZaznamZGH',
            'target' => 'field_text_z_gh',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'geo',
            'target' => 'field_lexikalna_skupina',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'attr',
            'target' => 'field_atributy',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'ilustracia',
            'target' => 'field_ilustracia',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'komentar',
            'target' => 'field_komentar_instrukcie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'vyplatenieOdmeny',
            'target' => 'field_vyplatit',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'errata',
            'target' => 'field_errta',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'heslo',
        'update_non_existent' => 'skip',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['beliana_importovanie_gh'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_ilustr_cie';
  $feeds_importer->config = array(
    'name' => 'Import ilustrácie',
    'description' => 'Import ilustrácie',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1427',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'kategoria',
            'target' => 'field_lexikalna_skupina_il',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'komentar',
            'target' => 'field_komentar_instrukcie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'popis',
            'target' => 'field_popis',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'obr_navrh',
            'target' => 'field_obrazok_navrh_:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'pouzit',
            'target' => 'field_pouzit',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'povod_ilustracie',
            'target' => 'field_zdroj_ilustracie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'institucia',
            'target' => 'field_institucia',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'licencia',
            'target' => 'field_licencia1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'nazov_diela',
            'target' => 'field_nazov_diela',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'datum_prevzatia',
            'target' => 'field_d_tum_prevzatia:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'institucia',
            'target' => 'field_institucia',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'drzitel_prav',
            'target' => 'field_drzitel_prav',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'URL_licencie',
            'target' => 'field_url_textu_licencie_l:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'URL_autora',
            'target' => 'field_url_autora_diela_l:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'URL_diela',
            'target' => 'field_url_diela_l:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'nazverejnenie',
            'target' => 'field_subor_ilustracie:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'ilustracia',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_ilustr_cie'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_pou_vate_ov_beliany';
  $feeds_importer->config = array(
    'name' => 'Import používateľov Beliany',
    'description' => 'Import používateľov Beliany',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'csv',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          4 => '4',
          5 => 0,
          7 => 0,
          6 => 0,
          3 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
        ),
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'login',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'heslo',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'meno',
            'target' => 'field_meno',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'priezvisko',
            'target' => 'field_priezvisko',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'zmluva',
            'target' => 'field_autorska_zmluva',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_pou_vate_ov_beliany'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'importova_vydan_ako_archivovan_';
  $feeds_importer->config = array(
    'name' => 'Importovať vydané ako archivované',
    'description' => 'Archivované originály bez možnosti zmeny',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1427',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'text',
            'target' => 'field_aheslo_text',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'zorad',
            'target' => 'field_aheslo_zorad',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'archivovane_knizne',
        'update_non_existent' => 'skip',
        'insert_new' => '1',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['importova_vydan_ako_archivovan_'] = $feeds_importer;

  return $export;
}
