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
  $feeds_importer->id = 'datum_vyplatenia';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => 'Dátum vyplatenia',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'csv',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
        'direct' => 0,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Dátum vyplatenia (csv súbor vytvorený v DjangoBel)',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => '719',
        'authorize' => 0,
        'bundle' => 'heslo',
        'expire' => '-1',
        'input_format' => 'filtered_html',
        'insert_new' => '0',
        'language' => 'sk',
        'mappings' => array(
          0 => array(
            'feeds_empty_use_old' => 0,
            'language' => 'und',
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'feeds_empty_use_old' => 1,
            'language' => 'und',
            'source' => 'datum_vyplatenia',
            'target' => 'field_datum_vyplatenia',
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['datum_vyplatenia'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_objednavok';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => '',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'csv',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => ' Import objednávok',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => 0,
        'authorize' => 0,
        'bundle' => 'objednavka_hesiel',
        'expire' => '-1',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'autor',
            'target' => 'field_objednavka_autor',
            'unique' => FALSE,
          ),
          1 => array(
            'language' => 'und',
            'source' => 'datum',
            'target' => 'field_objednavka_datum:start',
            'unique' => FALSE,
          ),
          2 => array(
            'autocreate' => 0,
            'feeds_empty_use_old' => 0,
            'source' => 'ls',
            'target' => 'field_lexikalna_skupina',
            'term_search' => '1',
          ),
          3 => array(
            'language' => 'und',
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'feeds_empty_use_old' => 0,
            'format' => 'full_html',
            'source' => 'hesla',
            'target' => 'field_objednavka_hesla',
          ),
          5 => array(
            'language' => 'und',
            'source' => 'user',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
          6 => array(
            'language' => 'und',
            'source' => 'redaktor',
            'target' => 'field_objednavka_redaktor',
            'unique' => FALSE,
          ),
          7 => array(
            'feeds_empty_use_old' => 0,
            'file_exists' => '1',
            'source' => 'subor',
            'target' => 'field_objednavka_subor:uri',
          ),
          8 => array(
            'language' => 'und',
            'source' => 'cislo',
            'target' => 'field_objednavka_cislo',
            'unique' => FALSE,
          ),
          9 => array(
            'language' => 'und',
            'source' => 'zmluva',
            'target' => 'field_objednavka_zmluva',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['import_objednavok'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'importovat_cislo_objednavky_do_hesla';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => '',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'csv',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Importovať číslo objednávky do hesla',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'author' => 0,
        'authorize' => 0,
        'bundle' => 'heslo',
        'expire' => '-1',
        'input_format' => 'filtered_html',
        'insert_new' => '0',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'feeds_empty_use_old' => 0,
            'language' => 'und',
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'cislo',
            'target' => 'field_objednavka',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '2',
        'update_non_existent' => 'skip',
      ),
      'plugin_key' => 'FeedsNodeProcessor',
    ),
    'update' => 0,
  );
  $export['importovat_cislo_objednavky_do_hesla'] = $feeds_importer;

  return $export;
}
