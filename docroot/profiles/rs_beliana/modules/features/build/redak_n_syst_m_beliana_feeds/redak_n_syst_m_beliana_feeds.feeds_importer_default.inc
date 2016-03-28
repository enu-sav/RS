<?php
/**
 * @file
 * redak_n_syst_m_beliana_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function redak_n_syst_m_beliana_feeds_feeds_importer_default() {
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
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'zorad',
            'target' => 'field_na_zoradenie',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'text',
            'target' => 'field_text_hesla',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'atrib',
            'target' => 'field_atributy',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'ilustracia',
            'target' => 'field_ilustracia',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'kategoria',
            'target' => 'field_lexikalna_skupina',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'importovane_heslo',
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
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'zorad',
            'target' => 'field_na_zoradenie',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'textHesla',
            'target' => 'field_text_hesla',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'povodnyZaznamZGH',
            'target' => 'field_text_z_gh',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'alias',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'geo',
            'target' => 'field_lexikalna_skupina',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'heslo',
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
          ),
          1 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jazyk',
            'target' => 'language',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'popis',
            'target' => 'field_popis',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'nazverejnenie',
            'target' => 'field_obrazok_na_zverejnenie_:uri',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'kategoria',
            'target' => 'field_lexikalna_skupina_il',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'institucia',
            'target' => 'field_institucia',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'povod_ilustracie',
            'target' => 'field_zdroj_ilustracie',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'ilustracia',
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
  $feeds_importer->id = 'node';
  $feeds_importer->config = array(
    'name' => 'Node import',
    'description' => 'Import nodes from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'article',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['node'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user';
  $feeds_importer->config = array(
    'name' => 'User import',
    'description' => 'Import users from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'bundle' => 'user',
        'roles' => array(),
        'update_existing' => 0,
        'status' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['user'] = $feeds_importer;

  return $export;
}
