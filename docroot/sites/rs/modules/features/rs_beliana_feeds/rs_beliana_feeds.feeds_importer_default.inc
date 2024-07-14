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
    'name' => 'Dátum vyplatenia (csv súbor vytvorený v DjangoBel)',
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
  $feeds_importer->id = 'import_objednavok';
  $feeds_importer->config = array(
    'name' => ' Import objednávok',
    'description' => '',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'autor',
            'target' => 'field_objednavka_autor',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'datum',
            'target' => 'field_objednavka_datum:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'ls',
            'target' => 'field_lexikalna_skupina',
            'term_search' => '1',
            'autocreate' => 0,
            'feeds_empty_use_old' => 0,
          ),
          3 => array(
            'source' => 'nazov',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'hesla',
            'target' => 'field_objednavka_hesla',
            'format' => 'full_html',
            'feeds_empty_use_old' => 0,
          ),
          5 => array(
            'source' => 'user',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'redaktor',
            'target' => 'field_objednavka_redaktor',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'subor',
            'target' => 'field_objednavka_subor:uri',
            'file_exists' => '1',
            'feeds_empty_use_old' => 0,
          ),
          8 => array(
            'source' => 'cislo',
            'target' => 'field_objednavka_cislo',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'zmluva',
            'target' => 'field_objednavka_zmluva',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'objednavka_hesiel',
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
  $export['import_objednavok'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'importovat_cislo_objednavky_do_hesla';
  $feeds_importer->config = array(
    'name' => 'Importovať číslo objednávky do hesla',
    'description' => '',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'nid',
            'feeds_empty_use_old' => 0,
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'cislo',
            'target' => 'field_objednavka',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '0',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'heslo',
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
  $export['importovat_cislo_objednavky_do_hesla'] = $feeds_importer;

  return $export;
}
