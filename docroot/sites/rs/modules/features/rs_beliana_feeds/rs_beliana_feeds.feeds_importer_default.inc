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
  $feeds_importer->id = 'datum_vyplatenia';
  $feeds_importer->config = array(
    'name' => 'Dátum vyplatenia',
    'description' => 'Dátum vyplatenia',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Nid',
            'target' => 'nid',
            'feeds_empty_use_old' => 0,
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'datum_vyplatenia',
            'target' => 'field_datum_vyplatenia',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'heslo',
        'update_non_existent' => 'skip',
        'insert_new' => '0',
        'language' => 'sk',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['datum_vyplatenia'] = $feeds_importer;

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
        'delete_uploaded_file' => FALSE,
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
          19 => array(
            'source' => 'meno_autora',
            'target' => 'field_meno_autora_diela',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'ilustracia',
        'insert_new' => '1',
        'language' => 'sk',
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
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_ls';
  $feeds_importer->config = array(
    'name' => 'import LS',
    'description' => 'Importovanie LS a ich tagov',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'delete_uploaded_file' => 0,
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
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'tags',
            'target' => 'field_taglist',
            'feeds_empty_use_old' => 1,
          ),
          1 => array(
            'source' => 'ls',
            'target' => 'name',
            'feeds_empty_use_old' => 0,
            'unique' => 1,
            'language' => 'und',
          ),
        ),
        'insert_new' => '0',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'lexikalne_skupiny',
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
  $export['import_ls'] = $feeds_importer;

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
        'delete_uploaded_file' => FALSE,
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          9 => 0,
          31 => 0,
          27 => 0,
          18 => 0,
          28 => 0,
          22 => 0,
          29 => 0,
          32 => 0,
          10 => 0,
          5 => 0,
          23 => 0,
          20 => 0,
          4 => 0,
          34 => 0,
          7 => 0,
          12 => 0,
          6 => 0,
          13 => 0,
          19 => 0,
          33 => 0,
          14 => 0,
          15 => 0,
          16 => 0,
          3 => 0,
          21 => 0,
          26 => 0,
        ),
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'login',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'zmluva',
            'target' => 'field_autorska_zmluva',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
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
  $export['import_pou_vate_ov_beliany'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = TRUE; /* Edit this to true to make a default feeds_importer disabled initially */
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

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'reimport_exp_il';
  $feeds_importer->config = array(
    'name' => 'Reimport exportovanej ilustrácie',
    'description' => 'Reimport exportovanej ilustrácie po doplnení obrázka',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'feeds_empty_use_old' => 1,
            'unique' => 0,
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
          19 => array(
            'source' => 'nid',
            'target' => 'nid',
            'feeds_empty_use_old' => 1,
            'unique' => 1,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'autor_diela',
            'target' => 'field_meno_autora_diela',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'autor_foto',
            'target' => 'field_meno_autora_snimky_diela',
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
  $export['reimport_exp_il'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'reimport_gh';
  $feeds_importer->config = array(
    'name' => 'Reimport GH',
    'description' => 'Importovanie typu Heslo po exportovaní',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'feeds_empty_use_old' => 1,
            'unique' => 0,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'feeds_empty_use_old' => 1,
            'unique' => 0,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'zorad',
            'target' => 'field_na_zoradenie',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'povodnyZaznamZGH',
            'target' => 'field_text_z_gh',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'komentar',
            'target' => 'field_komentar_instrukcie',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'vyplatenieOdmeny',
            'target' => 'field_vyplatit',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'errata',
            'target' => 'field_errta',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'kategoria',
            'target' => 'field_lexikalna_skupina',
            'term_search' => '0',
            'autocreate' => 0,
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'text',
            'target' => 'field_text_hesla',
            'format' => 'filtered_html',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'datum_end',
            'target' => 'field_datum:end',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'feeds_empty_use_old' => 0,
            'unique' => 1,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'ilustracia',
            'target' => 'field_ilustracia',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'datum_vyplatenia',
            'target' => 'field_datum_vyplatenia',
            'feeds_empty_use_old' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'heslo',
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
  $export['reimport_gh'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'reimport_pou_vate_ov';
  $feeds_importer->config = array(
    'name' => 'Reimport používateľov',
    'description' => 'Importovanie upravených údajov, ktoré boli predtým exportované',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'delete_uploaded_file' => 0,
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
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          9 => 0,
          31 => 0,
          27 => 0,
          18 => 0,
          28 => 0,
          22 => 0,
          29 => 0,
          32 => 0,
          10 => 0,
          5 => 0,
          23 => 0,
          20 => 0,
          4 => 0,
          34 => 0,
          7 => 0,
          12 => 0,
          6 => 0,
          13 => 0,
          19 => 0,
          33 => 0,
          14 => 0,
          15 => 0,
          16 => 0,
          3 => 0,
          21 => 0,
          26 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'uid',
            'target' => 'uid',
            'feeds_empty_use_old' => 0,
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Autorska_zmluva',
            'target' => 'field_autorska_zmluva',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'user',
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
  $export['reimport_pou_vate_ov'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'vyplatenie_odmeny';
  $feeds_importer->config = array(
    'name' => 'Vyplatenie odmeny',
    'description' => 'Import údajov o spôsobe vypracovania za 9. zväzok',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
            'source' => 'Nid',
            'target' => 'nid',
            'feeds_empty_use_old' => 0,
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'datum_vyplatenia',
            'target' => 'field_datum_vyplatenia',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Vyplatenie odmeny',
            'target' => 'field_vyplatit',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Číslo zmluvy',
            'target' => 'field_zmluva',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Prihlasovacie meno autora',
            'target' => 'user_name',
            'feeds_empty_use_old' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Počet znakov',
            'target' => 'field_dlzka_autorovho_textu_zad',
            'feeds_empty_use_old' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'heslo',
        'update_non_existent' => 'skip',
        'insert_new' => '0',
        'language' => 'sk',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['vyplatenie_odmeny'] = $feeds_importer;

  return $export;
}
