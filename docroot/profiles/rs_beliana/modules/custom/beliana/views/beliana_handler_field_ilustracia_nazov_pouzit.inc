<?php
// This file must be at beliana/views directory.
/**
 * @file
 * Definition of beliana_handler_field_ilustracia_nazov_pouzit.
 */

/**
 * Description of what my handler does.
 */
class beliana_handler_field_ilustracia_nazov_pouzit extends views_handler_field {
    /**
     * Add some required fields needed on render().
     */
    function construct() {
        parent::construct();
        $this->additional_fields['ilustracia_nazov_pouzit'] = array(
            'table' => 'field_data_field_ilustracia',
            'field' => 'field_ilustracia_target_id',
        );
    }

    /**
     * Loads additional fields.
     */
    function query() {
        $this->ensure_my_table();
        $this->add_additional_fields();
    }

    /**
     * Renders the field handler.
     */
    function render($values) {
        $output = array();

        if(isset($values->node_workbench_moderation_node_history_nid)){
            $node = node_load($values->node_workbench_moderation_node_history_nid);
        }else{
            $node = node_load($values->nid);
        }

        if(isset($node)) {
            if (!empty($node->field_ilustracia[LANGUAGE_NONE])) {
                foreach ($node->field_ilustracia[LANGUAGE_NONE] as $item) {
                    if ($ilustracia = node_load($item['target_id'])) {
                        $output[] = l($ilustracia->title, 'node/' . $ilustracia->nid) . ' / ' . str_replace('_', ' ', $ilustracia->field_pouzit[LANGUAGE_NONE][0]['value']);
                    }
                }
            }
        }

        return implode(', ', $output);
    }
}