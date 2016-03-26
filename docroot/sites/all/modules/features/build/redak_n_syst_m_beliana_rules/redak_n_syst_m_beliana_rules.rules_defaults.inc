<?php
/**
 * @file
 * redak_n_syst_m_beliana_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function redak_n_syst_m_beliana_rules_default_rules_configuration() {
  $items = array();
  $items['rules_after_new_heslo_creation'] = entity_import('rules_config', '{ "rules_after_new_heslo_creation" : {
      "LABEL" : "After new `Heslo` creation",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "node_insert--heslo" : { "bundle" : "heslo" } },
      "DO" : [
        { "workbench_moderation_set_state_during_save" : { "node" : [ "node" ], "moderation_state" : "navrhnute" } },
        { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_after_new_importovane_heslo_creation'] = entity_import('rules_config', '{ "rules_after_new_importovane_heslo_creation" : {
      "LABEL" : "After new `Importovane heslo` creation",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "node_insert--importovane_heslo" : { "bundle" : "importovane_heslo" } },
      "DO" : [
        { "workbench_moderation_set_state_during_save" : { "node" : [ "node" ], "moderation_state" : "importovane" } },
        { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } }
      ]
    }
  }');
  return $items;
}
