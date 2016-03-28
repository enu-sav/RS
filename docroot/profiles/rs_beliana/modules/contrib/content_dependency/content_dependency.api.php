<?php

/**
 * @file
 * Hooks provided by the content_dependency module.
 */

/**
 * Filter content dependency editable entities during build proccess.
 *  
 * Enable you to control via add/update/remove callback functions which handles 
 *  entity ids, after entity ids received from query results.
 *   
 * @param array &$array
 *   An array which contains callback functions. 
 */
function hook_content_dependency_filter_entities_edit_build(&$array) {
  // Should implement following function, which declaration contains (&$array).
  $array['callback_func'][] = 'MORE_CALLBACK_FUNCTION_NAME';
}

/**
 * Filter content dependency editable entities after build proccess.
 * 
 * Enable you to filter entity id array of entities id, which refer to current 
 *   entity and should be display as editable entities.
 *   
 * @param array &$entity_id_array
 *   An array of entities, categories by entity type. 
 *  E.g.: $entity_id_array['node'], etc.
 */
function hook_content_dependency_filter_entities_edit_alter(&$entity_id_array) {
  // Choose your entity type.
  $entity_type = 'node';
  if (!empty($entity_id_array[$entity_type])) {
    // Put to-hide entity ids.
    $hide_entity_id_array = array(1, 2, 3, 4, 25);

    foreach ($entity_id_array[$entity_type] as $key => $entity_id) {
      if (in_array($entity_id, $hide_entity_id_array)) {
        unset($entity_id_array[$entity_type][$key]);
      }
    }
  }
}
