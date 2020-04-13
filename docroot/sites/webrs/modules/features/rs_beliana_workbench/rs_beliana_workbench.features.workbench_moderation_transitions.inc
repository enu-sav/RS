<?php
/**
 * @file
 * rs_beliana_workbench.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function rs_beliana_workbench_workbench_moderation_export_transitions() {
  $items = array(
    'draft:vyradene' => array(
      'from_name' => 'draft',
      'to_name' => 'vyradene',
      'name' => 'navrhnute_vyradene',
    ),
    'draft:zaradene' => array(
      'from_name' => 'draft',
      'to_name' => 'zaradene',
      'name' => 'navrhnute_zaradene',
    ),
    'ilustracia_na_webe:ilustracia_u_vyst_redaktora_5' => array(
      'from_name' => 'ilustracia_na_webe',
      'to_name' => 'ilustracia_u_vyst_redaktora_5',
      'name' => 'il_na_webe-il_u_vr',
    ),
    'ilustracia_na_zverejnenie:ilustracia_u_vyst_redaktora_5' => array(
      'from_name' => 'ilustracia_na_zverejnenie',
      'to_name' => 'ilustracia_u_vyst_redaktora_5',
      'name' => 'il_na_zverejnenie-il_u_vr_5',
    ),
    'ilustracia_u_grafika:ilustracia_u_redaktora' => array(
      'from_name' => 'ilustracia_u_grafika',
      'to_name' => 'ilustracia_u_redaktora',
      'name' => 'il_u_grafika-il_u_redaktora',
    ),
    'ilustracia_u_redaktora:_ilustr_cia_u_autora' => array(
      'from_name' => 'ilustracia_u_redaktora',
      'to_name' => '_ilustr_cia_u_autora',
      'name' => 'il_u_redaktora-il_u_autora',
    ),
    'ilustracia_u_redaktora:ilustracia_u_grafika' => array(
      'from_name' => 'ilustracia_u_redaktora',
      'to_name' => 'ilustracia_u_grafika',
      'name' => 'il_u_autora-il_u_grafika',
    ),
    'ilustracia_u_redaktora:ilustracia_u_vyst_redaktora_5' => array(
      'from_name' => 'ilustracia_u_redaktora',
      'to_name' => 'ilustracia_u_vyst_redaktora_5',
      'name' => 'il_uredaktora-u_vr_5',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_na_zverejnenie' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_na_zverejnenie',
      'name' => 'il_u_vr-il_na_zverejnenie',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_u_grafika' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_u_grafika',
      'name' => 'il_u_vr-il_u_grafika',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_u_redaktora' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_u_redaktora',
      'name' => 'il_u_vr-il_u_redaktora',
    ),
    'importovane:importovane_u_jr2' => array(
      'from_name' => 'importovane',
      'to_name' => 'importovane_u_jr2',
      'name' => 'importovane-importovane_u_JR2',
    ),
    'importovane:zaradene' => array(
      'from_name' => 'importovane',
      'to_name' => 'zaradene',
      'name' => 'importovane-zaradene',
    ),
    'importovane_u_jr2:importovane' => array(
      'from_name' => 'importovane_u_jr2',
      'to_name' => 'importovane',
      'name' => 'importovane_u_jr2-importovane',
    ),
    'importovane_u_jr2:importovane_u_vr' => array(
      'from_name' => 'importovane_u_jr2',
      'to_name' => 'importovane_u_vr',
      'name' => 'importovane_u_JR2-importovane_U_VR',
    ),
    'importovane_u_vr:importovane' => array(
      'from_name' => 'importovane_u_vr',
      'to_name' => 'importovane',
      'name' => 'importovane_u_vr-importovane',
    ),
    'kontrola_etymologie:na_jazykovu_korekturu' => array(
      'from_name' => 'kontrola_etymologie',
      'to_name' => 'na_jazykovu_korekturu',
      'name' => 'kontrola_etymologie-u_jaz_redaktora',
    ),
    'len_vyplatit:zaradene' => array(
      'from_name' => 'len_vyplatit',
      'to_name' => 'zaradene',
      'name' => 'len_vyplatit-zaradene',
    ),
    'na_jazykovu_korekturu:u_redaktora_revizia' => array(
      'from_name' => 'na_jazykovu_korekturu',
      'to_name' => 'u_redaktora_revizia',
      'name' => 'u_jaz_redaktora-u_redaktora_rev',
    ),
    'na_zverejnenie:kontrola_etymologie' => array(
      'from_name' => 'na_zverejnenie',
      'to_name' => 'kontrola_etymologie',
      'name' => 'u_vyst_redaktora-kontrola_etymologie',
    ),
    'na_zverejnenie:needs_review' => array(
      'from_name' => 'na_zverejnenie',
      'to_name' => 'needs_review',
      'name' => 'u_vyst_redaktora1-u_redaktora',
    ),
    'navrhnute_na_vyradenie:len_vyplatit' => array(
      'from_name' => 'navrhnute_na_vyradenie',
      'to_name' => 'len_vyplatit',
      'name' => 'navrhute_na_zmenu-len_vyplatit',
    ),
    'navrhnute_na_vyradenie:vyradene' => array(
      'from_name' => 'navrhnute_na_vyradenie',
      'to_name' => 'vyradene',
      'name' => 'navrhute_na_zmenu-vyradene',
    ),
    'navrhnute_na_vyradenie:zaradene' => array(
      'from_name' => 'navrhnute_na_vyradenie',
      'to_name' => 'zaradene',
      'name' => 'navrhute_na_zmenu-zaradene',
    ),
    'needs_review:na_zverejnenie' => array(
      'from_name' => 'needs_review',
      'to_name' => 'na_zverejnenie',
      'name' => 'u_redaktora-u_vyst_redaktora1',
    ),
    'needs_review:u_autora' => array(
      'from_name' => 'needs_review',
      'to_name' => 'u_autora',
      'name' => 'u_redaktora-u_autora',
    ),
    'needs_review:u_konzultanta' => array(
      'from_name' => 'needs_review',
      'to_name' => 'u_konzultanta',
      'name' => 'u_redaktora-u_konzultanta',
    ),
    'nova_ilustracia:_ilustr_cia_u_autora' => array(
      'from_name' => 'nova_ilustracia',
      'to_name' => '_ilustr_cia_u_autora',
      'name' => 'il_nova-u_autora',
    ),
    'nova_ilustracia:ilustracia_u_grafika' => array(
      'from_name' => 'nova_ilustracia',
      'to_name' => 'ilustracia_u_grafika',
      'name' => 'il_nova-u_grafika',
    ),
    'nova_ilustracia:ilustracia_u_redaktora' => array(
      'from_name' => 'nova_ilustracia',
      'to_name' => 'ilustracia_u_redaktora',
      'name' => 'il_nova-u_redaktora',
    ),
    'publikovane_na_webe:zverejnene_oprava' => array(
      'from_name' => 'publikovane_na_webe',
      'to_name' => 'zverejnene_oprava',
      'name' => 'zverejnene_na_webe-zverejnene_oprava',
    ),
    'publikovane_na_webe:zverejnene_vratene' => array(
      'from_name' => 'publikovane_na_webe',
      'to_name' => 'zverejnene_vratene',
      'name' => 'zverejnene_na_webe-zverejnene_vratene',
    ),
    'u_autora:needs_review' => array(
      'from_name' => 'u_autora',
      'to_name' => 'needs_review',
      'name' => 'u_autora-u_redaktora',
    ),
    'u_autora_revizia:u_redaktora_revizia' => array(
      'from_name' => 'u_autora_revizia',
      'to_name' => 'u_redaktora_revizia',
      'name' => 'u_autora_rev-u_redaktora_rev',
    ),
    'u_jaz_redaktora_revizia:u_redaktora_revizia' => array(
      'from_name' => 'u_jaz_redaktora_revizia',
      'to_name' => 'u_redaktora_revizia',
      'name' => 'u_jaz_redaktora_rev-u_redaktora_rev',
    ),
    'u_konzultanta:needs_review' => array(
      'from_name' => 'u_konzultanta',
      'to_name' => 'needs_review',
      'name' => 'u_konzultanta-u_redaktora',
    ),
    'u_konzultanta_revizia:u_redaktora_revizia' => array(
      'from_name' => 'u_konzultanta_revizia',
      'to_name' => 'u_redaktora_revizia',
      'name' => 'u_konzultanta_rev-u_redaktora_rev',
    ),
    'u_redaktora_revizia:u_autora_revizia' => array(
      'from_name' => 'u_redaktora_revizia',
      'to_name' => 'u_autora_revizia',
      'name' => 'u_redaktora_rev-u_autora_rev',
    ),
    'u_redaktora_revizia:u_jaz_redaktora_revizia' => array(
      'from_name' => 'u_redaktora_revizia',
      'to_name' => 'u_jaz_redaktora_revizia',
      'name' => 'u_redaktora_rev-u_jaz_redaktora_rev',
    ),
    'u_redaktora_revizia:u_konzultanta_revizia' => array(
      'from_name' => 'u_redaktora_revizia',
      'to_name' => 'u_konzultanta_revizia',
      'name' => 'u_redaktora_rev-u_konzultanta_rev',
    ),
    'u_redaktora_revizia:u_vyst_redaktora_revizia' => array(
      'from_name' => 'u_redaktora_revizia',
      'to_name' => 'u_vyst_redaktora_revizia',
      'name' => 'u_redaktora_rev-u_vyst_redaktora_rev',
    ),
    'u_vyst_redaktora_revizia:na_zalomenie' => array(
      'from_name' => 'u_vyst_redaktora_revizia',
      'to_name' => 'na_zalomenie',
      'name' => 'u_vyst_redaktora_rev-na_zverejnenie',
    ),
    'u_vyst_redaktora_revizia:u_jaz_redaktora_revizia' => array(
      'from_name' => 'u_vyst_redaktora_revizia',
      'to_name' => 'u_jaz_redaktora_revizia',
      'name' => 'u_vyst_redaktora_rev-u_jaz_redaktora_rev',
    ),
    'vyradene:zaradene' => array(
      'from_name' => 'vyradene',
      'to_name' => 'zaradene',
      'name' => 'vyradene-zaradene',
    ),
    'zaradene:draft' => array(
      'from_name' => 'zaradene',
      'to_name' => 'draft',
      'name' => 'zaradene-navrhute',
    ),
    'zaradene:navrhnute_na_vyradenie' => array(
      'from_name' => 'zaradene',
      'to_name' => 'navrhnute_na_vyradenie',
      'name' => 'zaradene-navrhnurtre_na_vyradenie',
    ),
    'zaradene:needs_review' => array(
      'from_name' => 'zaradene',
      'to_name' => 'needs_review',
      'name' => 'zaradene-u_redaktora',
    ),
    'zaradene:u_autora' => array(
      'from_name' => 'zaradene',
      'to_name' => 'u_autora',
      'name' => 'zaradene-u_autora',
    ),
    'zaradene:vyradene' => array(
      'from_name' => 'zaradene',
      'to_name' => 'vyradene',
      'name' => 'zaradené-vyradene',
    ),
    'zverejnene_oprava:na_opakovane_zverejnenie' => array(
      'from_name' => 'zverejnene_oprava',
      'to_name' => 'na_opakovane_zverejnenie',
      'name' => 'zverejnene_oprava-na_opakovane_zverejnenie',
    ),
    'zverejnene_oprava:zverejnene_vratene' => array(
      'from_name' => 'zverejnene_oprava',
      'to_name' => 'zverejnene_vratene',
      'name' => 'zverejnene_oprava-zverejnene_vratene',
    ),
    'zverejnene_vratene:na_opakovane_zverejnenie' => array(
      'from_name' => 'zverejnene_vratene',
      'to_name' => 'na_opakovane_zverejnenie',
      'name' => 'zverejnene_vratene-na_opakovane_zverejnenie',
    ),
    'zverejnene_vratene:zverejnene_oprava' => array(
      'from_name' => 'zverejnene_vratene',
      'to_name' => 'zverejnene_oprava',
      'name' => 'zverejnene_vratene-zverejnene_oprava',
    ),
  );
  return $items;
}
