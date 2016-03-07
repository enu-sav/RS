<?php

/**
 * @file
 * Content dependency class "ContentDependencyMain".
 */

/**
 * Main content dependency class which handles entity types dependency.
 */
class ContentDependencyMain {

  // @todo - For future use.
  protected $fullTargetEntityTypesField;
  protected $entityType;

  /**
   * Object constructor.
   * 
   * @param array $entity_type
   *   An entity type array.
   */
  protected function __construct($entity_type) {
    $this->fullTargetEntityTypesField = array();
    $this->entityType = $entity_type;
  }

  /**
   * Get protected object variable $fullTargetEntityTypesField.
   *
   * @return multitype:
   *   Return "$fullTargetEntityTypesField" variable.
   */
  public function getFullTargetEntityTypesField() {
    return $this->fullTargetEntityTypesField;
  }

  /**
   * Get protected object variable $entity_type.
   *
   * @return multitype:
   *   Return "$entity_type" variable for current page.
   */
  public function getCurrentPageEntityType() {
    return $this->entityType;
  }

  /**
   * Escape string, used to prevent sql injections.
   * 
   * @param string $s
   *   Unescaped string.
   *
   * @return string
   *   Escaped string.
   */
  public static function escape_input_string($s) {
    return strtr($s, array(
      "\x00" => '\x00',
      "\n" => '\n', 
      "\r" => '\r', 
      '\\' => '\\\\',
      "'" => "\'", 
      '"' => '\"', 
      "\x1a" => '\x1a'
    ));
  }

  /**
   * Get entity id of current page.
   */
  public function getCurrentPageEntityId() {
    $arg0 = arg(0);
    $arg1 = arg(1);
    if ($arg0 == $this->getCurrentPageEntityType() &&
      is_numeric($arg1) && $arg1 > 0) {
      return $arg1;
    }

    return FALSE;
  }

  /**
   * Get an array of entity types list.
   *
   * @param array $array
   *   A settings array.
   */
  public static function getEntityTypesArray($array = array()) {
    $default_array = array('full_array' => FALSE);
    $array = array_merge($default_array, $array);

    if ($array['full_array']) {
      return array('comment', 'field_collection_item',
        'node', 'redirect', 'file', 'taxonomy_term',
        'taxonomy_vocabulary', 'user', 'rules_config', 'menu_link');
    }

    return array('field_collection_item', 'node',
      'user', 'taxonomy_term', 'comment');
  }

  /**
   * Returns array with optional target entity type.
   * 
   * Function get field names and returns an array with optional target
   *   entity types for each field. (although there is no entity exists)
   * Return an array along with content names as
   *   keys and the optional dependency fields as values.
   * Get all entity types. e.g: node, taxonomy, field_collection_item, etc.
   * @todo - need to improve function complexity.
   * 
   * @param array $field_array
   *   Each array item contains name and type.
   */
  public function getTargetEntityTypes($field_array) {
    $optional_target_entity_types = array();

    if (!empty($field_array)) {
      foreach ($field_array as $value) {
        if (!empty($value[CONTENT_DEPENDENCY_FIELD_ARRAY_NAME_KEY])) {
          // Return all entity types that can be referred from this field.
          $target_entity_types
            = field_info_field($value[CONTENT_DEPENDENCY_FIELD_ARRAY_NAME_KEY]);

          if (!empty($target_entity_types['entity_types']) &&
            !empty($target_entity_types['settings']['handler_settings']['target_bundles'])) {

            foreach ($target_entity_types['entity_types'] as $key2 => $value2) {
              // Loop all entity types.
              foreach ($value2 as $key3 => $value3) {
                $optional_target_entity_types[$key2][$value3][]
                  = array(
                    CONTENT_DEPENDENCY_FIELD_ARRAY_NAME_KEY => $target_entity_types['settings']['handler_settings']['target_entity_types'],
                    CONTENT_DEPENDENCY_FIELD_ARRAY_TYPE_KEY => $value[CONTENT_DEPENDENCY_FIELD_ARRAY_TYPE_KEY]);
              }
            }
          }
        }
      }
    }

    /* Add object array additional entities */
    if (!empty($optional_target_entity_types)) {
      foreach ($optional_target_entity_types as $key => $value) {
        if (isset($this->fullTargetEntityTypesField[$key])) {
          $this->fullTargetEntityTypesField[$key]
            = array_merge($optional_target_entity_types[$key],
            $this->fullTargetEntityTypesField[$key]);
        }
        else {
          $this->fullTargetEntityTypesField[$key] = $optional_target_entity_types[$key];
        }
      }
    }
    /* /Add object array additional entities */

    return TRUE;
  }

  /**
   * Build a complex query of along with all db referenced fields.
   *
   * @param array $fields_to_check_array
   *   Array of fields to check.
   * @param int $entity_id
   *   An entity id value.
   * 
   * @return string.
   *   Return sql query string.
   */
  public function buildEntityIdQuery($fields_to_check_array, $entity_id) {

    if (empty($fields_to_check_array) || !is_numeric($entity_id)) {
      return FALSE;
    }

    // Validation that there is no sql injection issues.
    $entity_id = (int) $entity_id;

    $mass_table_prefix = 'content_dependency_table_';
    // @todo - Need to verify that prefix to support all drupal installations.
    $table_prefix = 'field_data_';

    $counter = 0;
    $select_array = array();
    $where_array = array();
    $table_array = array();
    foreach ($fields_to_check_array as $value) {

      // Validation that there is no sql injection issues.
      $value_name_key = self::escape_input_string($value[CONTENT_DEPENDENCY_FIELD_ARRAY_NAME_KEY]);

      switch ($value[CONTENT_DEPENDENCY_FIELD_ARRAY_TYPE_KEY]) {
        case 'node_reference':
          $field_suffix = '_nid';
          break;
        case 'entityreference':
        default:
          $field_suffix = '_target_id';
          // @todo - Need a prefix to support all entity types/installations.
          break;

      }

      $counter++;
      $select_array[] = $mass_table_prefix . $counter . '.entity_id, ' .
        $mass_table_prefix . $counter . '.entity_type';
      $where_array[] = $mass_table_prefix . $counter . '.' .
        $value_name_key . $field_suffix . "='" . $entity_id . "'";
      $table_array[] = "{" . $table_prefix .
        $value_name_key . "}" . ' AS ' .
        $mass_table_prefix . $counter;
    }

    $selects = implode(', ', $select_array);
    $where = implode(' OR ', $where_array);

    $union_query = array();
    for ($i = 0; $i < $counter; $i++) {
      $union_query[] = 'SELECT ' . $select_array[$i] . ' FROM ' .
      $table_array[$i] . ' WHERE ' . $where_array[$i];
    }

    $q = implode(' UNION ', $union_query);

    return $q;
  }

  /**
   * Get fields name of all kind of reference types fields.
   * 
   * Use sql query to get all fields name of reference type fields.
   * Current version supports entityreference 
   *   module, & node_reference (references module).
   */
  public function getReferenceFieldsArray() {

    $result = db_select('field_config', 'fc')
    ->fields('fc', array('field_name', 'type'))
    ->condition('type', array('entityreference', 'node_reference'), 'IN')
    ->execute();

    $field_array = array();
    if (!empty($result)) {
      foreach ($result as $record) {
        if (!empty($record->field_name) && !empty($record->type)) {
          $field_array[] = array(
            CONTENT_DEPENDENCY_FIELD_ARRAY_NAME_KEY => $record->field_name,
            CONTENT_DEPENDENCY_FIELD_ARRAY_TYPE_KEY => $record->type);
        }
      }
    }

    return $field_array;
  }

  /**
   * Merge field collection entities into other entity types.
   * 
   * Perform query to field collection array to receive its source entity.
   * Then, merge entity details into $entity_array at different entity types.
   * 
   * @param array &$category_details_array
   *   Full entity type array.
   * @param array $entity_array
   *   Field collection entity array.
   */
  public static function mergeFieldCollectionIntoArrayTypeCategories(&$category_details_array, $entity_array) {
    if (!empty($entity_array)) {

      $field_collection_temp_array = array();
      $entity_array_temp = array();

      foreach ($entity_array as $value) {
        $field_collection_temp_array[] = array(
          'item_id' => $value->item_id,
          'field_name' => self::escape_input_string($value->field_name));
      }

      $mass_table_prefix = 'content_dependency_table_';
      $table_prefix = 'field_data_';
      $field_collection_target_suffix = '_value';
      $entity_name_field = 'field_name';
      $entity_id_field = 'item_id';
      // @todo - relevant only to entity type "node".
      $field_suffix = '_value';

      $counter = 0;
      $select_array = array();
      $where_array = array();
      $table_array = array();
      foreach ($field_collection_temp_array as $value) {
        $counter++;
        $select_array[] = $mass_table_prefix . $counter . '.entity_id, ' .
          $mass_table_prefix . $counter . '.entity_type';
        $where_array[] = $mass_table_prefix . $counter . '.' .
            $value[$entity_name_field] .
            $field_suffix . "='" . $value[$entity_id_field] . "'";
        $table_array[] = "{" . $table_prefix .
        $value[$entity_name_field] . "}" . ' AS ' .
        $mass_table_prefix . $counter;
      }

      $selects = implode(', ', $select_array);
      $where = implode(' OR ', $where_array);

      $union_query = array();
      for ($i = 0; $i < $counter; $i++) {
        $union_query[] = 'SELECT ' . $select_array[$i] . ' FROM ' .
            $table_array[$i] . ' WHERE ' . $where_array[$i];
      }

      $q = implode(' UNION ', $union_query);
      $result = db_query($q);

      if ($result) {
        foreach ($result as $record) {
          if (empty($entity_array_temp[$record->entity_type])
            || (!in_array($record->entity_id,
            $entity_array_temp[$record->entity_type]))) {
            $entity_array_temp[$record->entity_type][] = $record->entity_id;
          }
        }
      }

      if (!empty($entity_array_temp)) {
        foreach ($entity_array_temp as $key => &$value) {
          $entity_array_temp[$key] = entity_load($key, $value);
          if (empty($entity_array_temp[$key])) {
            unset($entity_array_temp[$key]);
          }
        }
      }

      if (!empty($entity_array_temp)) {
        foreach ($entity_array_temp as $key => $value) {
          if (!empty($value)) {
            foreach ($value as $key2 => $value2) {
              switch ($key) {
                case 'node':
                  $type = $value2->type;
                  break;

                case 'taxonomy_term':
                  $type = $value2->vocabulary_machine_name;
                  break;

                case 'user':
                  $type = $value2->people;
                  break;

                default:
                  break;

              }

              if (!isset($category_details_array[$key][$type]['values'][$key2])) {
                $category_details_array[$key][$type]['values'][$key2] = $value2;
              }

            }
          }
        }
      }

      unset($category_details_array['field_collection_item']);
    }
  }

  /**
   * Return content dependency main html content.
   */
  public static function getMainContentHtml() {

    drupal_add_js(array('arg' => arg()), 'setting');
    module_load_include('inc', 'content_dependency', 'includes/content_dependency');

    $content = '';

    // @todo - Need to make it dynamic.
    $entity_type = 'node';

    $content_dependency_main = new ContentDependencyMain($entity_type);
    $field_array = $content_dependency_main->getReferenceFieldsArray();
    $content_dependency_main->getTargetEntityTypes($field_array);
    $entity_id = $content_dependency_main->getCurrentPageEntityId();

    if (!empty($field_array)) {
      $q = $content_dependency_main->buildEntityIdQuery($field_array, $entity_id);
      if (!empty($q)) {
        $result = db_query($q);
        if ($result) {
          $entity_id_array = array();

          foreach ($result as $record) {
            if (!empty($record->entity_id)) {
              $entity_id_array[$record->entity_type][] = $record->entity_id;
            }
          }
        }

        content_dependency_execute_hook_filter_entities_edit_build($entity_id_array,
        array('callback_func' => array('content_dependency_filter_entity_id_array_edit_permission')));
        content_dependency_execute_hook_filter_entities_edit_alter($entity_id_array);

        /* Verify within each entity type array there are unique values */
        if (!empty($entity_id_array)) {
          foreach ($entity_id_array as &$value) {
            $value = array_unique($value);
          }
        }
        /* /Verify within each entity type array there are unique values */

        $content .= content_dependency_get_entities_html(
            $content_dependency_main->getFullTargetEntityTypesField(),
            $entity_id_array, $entity_id);
      }
    }

    return $content;
  }

  /**
   * Get current page node type.
   * 
   * Support also "node/add/CONTENT_TYPE".
   */
  public static function getCurrentNodeContentType() {
    $arg0 = arg(0);
    $arg1 = arg(1);
    $arg2 = arg(2);

    $is_arg0_node = $arg0 == 'node';

    if ($is_arg0_node && is_numeric($arg1) && $arg1 > 0) {
      $node = node_load($arg1);
      // @todo - Need to be expanded to load general entity.
      if (!empty($node->type)) {
        return $node->type;
      }
    }

    if ($is_arg0_node && $arg1 == 'add' && !empty($arg2)) {
      return $arg2;
    }

    return FALSE;
  }

}
