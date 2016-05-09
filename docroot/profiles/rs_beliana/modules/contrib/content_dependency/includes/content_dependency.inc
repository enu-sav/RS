<?php

/**
 * @file
 * Primarily module functions.
 */

/**
 * Usort comparison function. Sort from latest revision to first revisions. 
 * 
 * @param array $a
 *   Comparison Item a.
 * @param array $b
 *   Comparison Item b.
 */
function content_dependency_sort_node_array($a, $b) {

  if (empty($a->revision_timestamp) || empty($b->revision_timestamp)) {
    // Object validation.
    return 0;
  }

  if ($a->revision_timestamp == $b->revision_timestamp) {
    return 0;
  }

  return ($a->revision_timestamp > $b->revision_timestamp) ? -1 : 1;
}

/**
 * Sort node array by content types.
 * 
 * @param array &$node_array
 *   Array of nodes.
 */
function content_dependency_sort_node_array_by_content_type(&$node_array) {
  usort($node_array, 'content_dependency_sort_node_array');
}

/**
 * Get requested content types relevant fields.
 * 
 * @param array $content_type_array
 *   Array of content types relevant name.
 */
function content_dependency_get_content_type_details($content_type_array) {
  if (empty($content_type_array)) {
    return FALSE;
  }

  $result = db_select('node_type', 'nt')
    ->fields('nt', array('type', 'name', 'description'))
    ->condition('type', $content_type_array, 'IN')
    ->execute();

  if (!$result) {
    return FALSE;
  }

  $content_type_details_array = array();
  foreach ($result as $record) {
    if (empty($record->type) || empty($record->name)) {
      continue;
    }

    $content_type_details_array[$record->type]['name'] = check_plain(ContentDependencyMain::escape_input_string($record->name));
    if (!empty($record->description)) {
      $content_type_details_array[$record->type]['description']
        = check_plain(ContentDependencyMain::escape_input_string($record->description));
    }
  }

  return $content_type_details_array;
}

/**
 * Return html of entity types array.
 * 
 * @param array $full_target_entity_types_field
 *   An entity type target field array.
 * @param array $entity_type_array_categories
 *   An array of entity types.
 * @param int $entity_id
 *   An entity id value.
 */
function content_dependency_get_entity_types_arrays_html($full_target_entity_types_field, $entity_type_array_categories, $entity_id) {

  if (CONTENT_DEPENDENCY_DISPLAY_NO_ENTITY_BLOCK === FALSE &&
    empty($entity_type_array_categories)) {
    return FALSE;
  }

  $module_path = drupal_get_path('module', 'content_dependency');
  drupal_add_css($module_path . '/css/content_dependency.css');
  drupal_add_css($module_path . '/css/jquery.ui.accordion.css');  
  drupal_add_library('system', 'ui.accordion');
  drupal_add_js($module_path . '/js/content_dependency.js');

  $last_content_type = NULL;

  $theme_array = array();
  $theme_array_settings = array();
  // @todo - Modify node into all entity types.
  $theme_array_settings['current_entity']['entity_type'] = 'node';
  // @todo - Modify node id into general entity type id.
  $theme_array_settings['current_entity']['entity_id'] = $entity_id;

  $theme_array_settings['href']['attributes']['target'] = CONTENT_DEPENDENCY_NEW_CONTENT_ANCHOR_TARGET_TYPE;

  if (!empty($entity_type_array_categories)) {
    foreach ($entity_type_array_categories as $entity_type_key => $entity_type_value) {

      foreach ($entity_type_value as $key => $value) {

        switch ($entity_type_key) {
          case 'node':
            $entity_title_field = 'title';
            $entity_id_field = 'nid';
            $entity_type_label_prefix = t('Node') . ': ';
            $entity_href_edit_prefix = 'node';
            $entity_href_add_prefix = 'node/add/';
            $entity_href_add_suffix = '';
            break;

          case 'taxonomy_term':
            $entity_title_field = 'name';
            $entity_id_field = 'tid';
            $entity_type_label_prefix = t('Taxonomy') . ': ';
            $entity_href_edit_prefix = 'taxonomy/term';
            $entity_href_add_prefix = 'admin/structure/taxonomy/';
            $entity_href_add_suffix = '/add';
            break;

          case 'user':
            $entity_title_field = 'name';
            $entity_id_field = 'uid';
            $entity_type_label_prefix = '';
            $entity_href_edit_prefix = 'user';
            $entity_href_add_prefix = 'admin/';
            $entity_href_add_suffix = '/create';
            break;

          default:
            // $entity_title_field = 'title';
            // $entity_id_field = 'entity_id';
            // $entity_type_label_prefix = t('Default') . ' ';
            // $entity_href_edit_prefix = 'entity';
            // $entity_href_add_prefix = 'entity/add/';
            // $entity_href_add_suffix = '';
            break;
        }

        $theme_array[$entity_type_key][$key]['general_settings']['entity_type_label_prefix'] = $entity_type_label_prefix;
        $theme_array[$entity_type_key][$key]['general_settings']['entity_href_edit_prefix'] = $entity_href_edit_prefix;
        $theme_array[$entity_type_key][$key]['general_settings']['entity_href_add_prefix'] = $entity_href_add_prefix;
        $theme_array[$entity_type_key][$key]['general_settings']['entity_href_add_suffix'] = $entity_href_add_suffix;

        if ($last_content_type === NULL || $last_content_type != $key) {
          // New content type.
          $last_content_type = $key;

          if (!empty($entity_type_value[$key]['name'])) {
            $theme_array[$entity_type_key][$key]['general_settings']['name'] = t($entity_type_value[$key]['name']);
          }
          else {
            $theme_array[$entity_type_key][$key]['general_settings']['name'] = t($key);
          }

          $theme_array[$entity_type_key][$key]['general_settings']['count']
            = isset($value['values']) ? count($value['values']) : '0';
          // End of element "content_type_name".
        }

        if (!empty($value['values'])) {
          $counter = -1;
          foreach ($value['values'] as $value2) {
            $counter++;
            $theme_array[$entity_type_key][$key]['values'][$counter]['title'] = $value2->$entity_title_field;
            $theme_array[$entity_type_key][$key]['values'][$counter]['id'] = $value2->$entity_id_field;
          }
        }
      }

      // End of last iteration content type.
    }
  }

  /* Add new content link although if no dependecy content exists */
  if (CONTENT_DEPENDENCY_NEW_CONTENT_ADD_NO_ENTITY_OUTPUT === TRUE) {
    // @todo - For future use.
  }
  /* /Add new content link although if no dependecy content exists */

  return theme('content_dependency_tab',
    array(
      'content_dependency_settings_array' => $theme_array_settings,
      'content_dependency_values_array' => $theme_array,
    ));
}

/**
 * Execute content dependency filter entities edit build hook instances.
 * 
 * @param array &$entity_id_array
 *   An entity id array.
 * @param array $array
 *   Settings array (inc. callback functions, etc.)  
 */
function content_dependency_execute_hook_filter_entities_edit_build(&$entity_id_array, $array) {
  $hook_name = 'content_dependency_filter_entities_edit_build';
  foreach (module_implements($hook_name) as $module) {
    $function = $module . '_' . $hook_name;
    $function($array);
  }

  if (!empty($array['callback_func'])) {
    foreach ($array['callback_func'] as $function) {
      $function($entity_id_array);
      // Execute callback functions.
    }
  }
}

/**
 * Execute content dependency filter entities edit alter hook instances.
 * 
 * @param array &$entity_id_array
 *   An entity id array.
 */
function content_dependency_execute_hook_filter_entities_edit_alter(&$entity_id_array) {
  $hook_name = 'content_dependency_filter_entities_edit_alter';
  foreach (module_implements($hook_name) as $module) {
    $function = $module . '_' . $hook_name;
    $function($entity_id_array);
  }
}

/**
 * Filter entity id array.
 * 
 * Remove entities that should be not displayed, because of permission issuses.
 * All entities which are not allowed to be edited are filtered within
 *   this function.
 * This function supports external modules, such as "content access",
 *   "og" (organic groups),etc. which give specific roles for edit entities.
 * 
 * @param array &$entity_id_array
 *   An entity id array.
 * 
 * @return NULL|boolean
 *   Returns NULL/TRUE/FALSE value.
 */
function content_dependency_filter_entity_id_array_edit_permission(&$entity_id_array) {

  if (empty($entity_id_array)) {
    return NULL;
  }

  $entity_id_array_full = array();

  foreach ($entity_id_array as $key => &$value) {
    $entity_id_array_full[$key] = entity_load($key, $entity_id_array[$key]);

    foreach ($entity_id_array_full[$key] as $key2 => $value2) {
      if (!entity_access('update', $key, $value2)) {
        unset($entity_id_array[$key][array_search($key2, $value)]);
      }
    }
  }

  foreach ($entity_id_array as $key => &$value) {
    if (empty($value)) {
      unset($entity_id_array[$key]);
    }
  }

  return TRUE;
}

/**
 * Get dependent html for specific content.
 * 
 * @param array $full_target_entity_types_field
 *   An entity type target field array.
 * @param array $entity_id_array
 *   An entity id array.
 * @param int $entity_id
 *   An entity id value.
 */
function content_dependency_get_entities_html($full_target_entity_types_field, $entity_id_array, $entity_id) {

  if (!CONTENT_DEPENDENCY_DISPLAY_NO_ENTITY_BLOCK) {
    return NULL;
  }

  $category_details_array = array();

  if (!empty($entity_id_array)) {
    foreach ($entity_id_array as $key => &$value) {
      if (!empty($value)) {
        $entity_array = entity_load($key, $value);

        if (!empty($entity_array)) {
          switch ($key) {
            case 'node':
              content_dependency_sort_node_array_by_content_type($entity_array);
              foreach ($entity_array as $value2) {
                $category_details_array[$key][$value2->type]['values'][$value2->nid] = $value2;
              }
              $content_type_details_array = content_dependency_get_content_type_details(array_keys($category_details_array[$key]));

              foreach ($category_details_array[$key] as $key2 => $value2) {
                if (isset($content_type_details_array[$key2]['name']) &&
                  !isset($category_details_array[$key][$key2]['name'])) {
                  $category_details_array[$key][$key2]['name'] = $content_type_details_array[$key2]['name'];
                }
              }
              break;

            case 'taxonomy_term':
              foreach ($entity_array as $value2) {
                $category_details_array[$key][$value2->vocabulary_machine_name]['values'][$value2->tid] = $value2;
                if (!isset($category_details_array[$key][$value2->vocabulary_machine_name]['name'])) {
                  $category_details_array[$key][$value2->vocabulary_machine_name]['name'] = check_plain($value2->name);
                }
              }
              break;

            case 'user':
              foreach ($entity_array as $value2) {
                $category_details_array[$key]['people']['values'][$value2->uid] = $value2;
                if (!isset($category_details_array[$key]['people']['name'])) {
                  $category_details_array[$key]['people']['name'] = t('User');
                }
              }
              break;

            case 'field_collection_item':
              ContentDependencyMain::mergeFieldCollectionIntoArrayTypeCategories($category_details_array, $entity_array);
              break;

            default:
              break;

          }
        }
      }
    }
  }

  return content_dependency_get_entity_types_arrays_html(
    $full_target_entity_types_field, $category_details_array, $entity_id);
}
