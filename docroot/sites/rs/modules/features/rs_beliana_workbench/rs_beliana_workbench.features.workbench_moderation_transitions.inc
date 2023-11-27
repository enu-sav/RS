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
    '1_korektura:u_vyst_redaktora_4' => array(
      'from_name' => '1_korektura',
      'to_name' => 'u_vyst_redaktora_4',
      'name' => '1_korektura-u_vyst_redaktora4',
    ),
    '2_korekt_ra:u_vyst_redaktora_4' => array(
      'from_name' => '2_korekt_ra',
      'to_name' => 'u_vyst_redaktora_4',
      'name' => '2_korektura-u_vyst_redaktora4',
    ),
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
      'name' => 'il_na_webe-il_u_vr5',
    ),
    'ilustracia_na_zverejnenie:ilustracia_u_vyst_redaktora_5' => array(
      'from_name' => 'ilustracia_na_zverejnenie',
      'to_name' => 'ilustracia_u_vyst_redaktora_5',
      'name' => 'il_na_zverejnenie-il_u_vr_5',
    ),
    'ilustracia_u_grafika:ilustracia_u_redaktora' => array(
      'from_name' => 'ilustracia_u_grafika',
      'to_name' => 'ilustracia_u_redaktora',
      'name' => 'il_u_grafika_u_redaktora',
    ),
    'ilustracia_u_redaktora:_ilustr_cia_u_autora' => array(
      'from_name' => 'ilustracia_u_redaktora',
      'to_name' => '_ilustr_cia_u_autora',
      'name' => 'il_u_redaktora-u_autora',
    ),
    'ilustracia_u_redaktora:ilustracia_u_grafika' => array(
      'from_name' => 'ilustracia_u_redaktora',
      'to_name' => 'ilustracia_u_grafika',
      'name' => 'il_u_redaktora-u_grafika',
    ),
    'ilustracia_u_redaktora:ilustracia_u_vyst_redaktora_5' => array(
      'from_name' => 'ilustracia_u_redaktora',
      'to_name' => 'ilustracia_u_vyst_redaktora_5',
      'name' => 'il_uredaktora-u_vr_5',
    ),
    'ilustracia_u_vyst_redaktora_3:ilustracia_u_vyst_redaktora_5' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_3',
      'to_name' => 'ilustracia_u_vyst_redaktora_5',
      'name' => 'il_u_vr_3-il_u_vr_5',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_na_zverejnenie' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_na_zverejnenie',
      'name' => 'il_u_vr_5-na_zverejnenie',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_u_grafika' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_u_grafika',
      'name' => 'il_u_vr_5-il_u_grafika',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_u_redaktora' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_u_redaktora',
      'name' => 'il_u_vr_5-il_u_redaktora',
    ),
    'ilustracia_u_vyst_redaktora_5:ilustracia_u_vyst_redaktora_3' => array(
      'from_name' => 'ilustracia_u_vyst_redaktora_5',
      'to_name' => 'ilustracia_u_vyst_redaktora_3',
      'name' => 'il_u_vr_5-il_u_vr_3',
    ),
    'len_vyplatit:zaradene' => array(
      'from_name' => 'len_vyplatit',
      'to_name' => 'zaradene',
      'name' => 'len_vyplatit-zaradene',
    ),
    'na_jazykovu_korekturu:1_korektura' => array(
      'from_name' => 'na_jazykovu_korekturu',
      'to_name' => '1_korektura',
      'name' => 'u_jaz_redaktora1-1_korektura',
    ),
    'na_jazykovu_korekturu:u_vyst_redaktora_2' => array(
      'from_name' => 'na_jazykovu_korekturu',
      'to_name' => 'u_vyst_redaktora_2',
      'name' => 'u_jaz_redaktora1-u_vyst_redaktora2',
    ),
    'na_zalomenie:u_v_st_redaktora_5' => array(
      'from_name' => 'na_zalomenie',
      'to_name' => 'u_v_st_redaktora_5',
      'name' => 'na_zalomenie-u_vyst_redaktora5',
    ),
    'na_zalomenie:v_zalamovani' => array(
      'from_name' => 'na_zalomenie',
      'to_name' => 'v_zalamovani',
      'name' => 'na_zalomenie-v_zalamovani',
    ),
    'na_zlucenie:u_vyst_redaktora_2' => array(
      'from_name' => 'na_zlucenie',
      'to_name' => 'u_vyst_redaktora_2',
      'name' => 'na_zlucenie-u_vyst_redaktora2',
    ),
    'na_zverejnenie:needs_review' => array(
      'from_name' => 'na_zverejnenie',
      'to_name' => 'needs_review',
      'name' => 'u_vyst_redaktora1-u_redaktora',
    ),
    'na_zverejnenie:u_vyst_redaktora_2' => array(
      'from_name' => 'na_zverejnenie',
      'to_name' => 'u_vyst_redaktora_2',
      'name' => 'u_vyst_redaktora1-u_vyst_redaktora2',
    ),
    'na_zverejnenie:u_vyst_redaktora_2x' => array(
      'from_name' => 'na_zverejnenie',
      'to_name' => 'u_vyst_redaktora_2x',
      'name' => 'u_vyst_redaktora1-u_vyst_redaktora2x',
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
    'needs_review:objednane' => array(
      'from_name' => 'needs_review',
      'to_name' => 'objednane',
      'name' => 'u_redaktora-objednane',
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
      'name' => 'il_nova-il_u_autora',
    ),
    'nova_ilustracia:ilustracia_u_grafika' => array(
      'from_name' => 'nova_ilustracia',
      'to_name' => 'ilustracia_u_grafika',
      'name' => 'il_nova_u_grafika',
    ),
    'nova_ilustracia:ilustracia_u_redaktora' => array(
      'from_name' => 'nova_ilustracia',
      'to_name' => 'ilustracia_u_redaktora',
      'name' => 'il_nova_u_redaktora',
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
    'u_jaz_redaktora_2:na_zalomenie' => array(
      'from_name' => 'u_jaz_redaktora_2',
      'to_name' => 'na_zalomenie',
      'name' => 'u_jaz_redaktora2-na_zverejnenie',
    ),
    'u_jaz_redaktora_2:u_v_st_redaktora_5' => array(
      'from_name' => 'u_jaz_redaktora_2',
      'to_name' => 'u_v_st_redaktora_5',
      'name' => 'u_jaz_redaktora2-u_vyst_readaktora5',
    ),
    'u_jaz_redaktora_2:u_vyst_redaktora_4' => array(
      'from_name' => 'u_jaz_redaktora_2',
      'to_name' => 'u_vyst_redaktora_4',
      'name' => 'u_jaz_redaktora2-u_vyst_redaktora4',
    ),
    'u_konzultanta:needs_review' => array(
      'from_name' => 'u_konzultanta',
      'to_name' => 'needs_review',
      'name' => 'u_konzultanta-u_redaktora',
    ),
    'u_v_st_redaktora_5:na_zalomenie' => array(
      'from_name' => 'u_v_st_redaktora_5',
      'to_name' => 'na_zalomenie',
      'name' => 'u_vyst_redaktora5-na_zalomenie',
    ),
    'u_v_st_redaktora_5:u_vyst_redaktora_4' => array(
      'from_name' => 'u_v_st_redaktora_5',
      'to_name' => 'u_vyst_redaktora_4',
      'name' => 'u_vyst_redaktora5-u_vyst_redaktora4',
    ),
    'u_v_st_redaktora_5:vyradene' => array(
      'from_name' => 'u_v_st_redaktora_5',
      'to_name' => 'vyradene',
      'name' => 'u_vyst_redaktora5-vyradene',
    ),
    'u_vyst_redaktora_2:na_jazykovu_korekturu' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'na_jazykovu_korekturu',
      'name' => 'u_vyst_redaktora2-u_jaz_redaktora1',
    ),
    'u_vyst_redaktora_2:na_zlucenie' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'na_zlucenie',
      'name' => 'u_vyst_redaktora2-na_zlucenie',
    ),
    'u_vyst_redaktora_2:na_zverejnenie' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'na_zverejnenie',
      'name' => 'u_vyst_redaktora2-u_vyst_redaktora1',
    ),
    'u_vyst_redaktora_2:needs_review' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'needs_review',
      'name' => 'u_vyst_redaktora2-u_redaktora',
    ),
    'u_vyst_redaktora_2:u_vyst_redaktora_2x' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'u_vyst_redaktora_2x',
      'name' => 'u_vyst_redaktora2-u_vyst_redaktora2x',
    ),
    'u_vyst_redaktora_2:ukoncenezluene' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'ukoncenezluene',
      'name' => 'u_vyst_redaktora2-ukoncene_zlucene',
    ),
    'u_vyst_redaktora_2:vyradene' => array(
      'from_name' => 'u_vyst_redaktora_2',
      'to_name' => 'vyradene',
      'name' => 'u_vyst_redaktora2-na_vyradenie',
    ),
    'u_vyst_redaktora_2x:na_zverejnenie' => array(
      'from_name' => 'u_vyst_redaktora_2x',
      'to_name' => 'na_zverejnenie',
      'name' => 'u_vyst_redaktora2x-u_vyst_redaktora1',
    ),
    'u_vyst_redaktora_2x:u_vyst_redaktora_2' => array(
      'from_name' => 'u_vyst_redaktora_2x',
      'to_name' => 'u_vyst_redaktora_2',
      'name' => 'u_vyst_redaktora2x-u_vyst_redaktora2',
    ),
    'u_vyst_redaktora_4:u_jaz_redaktora_2' => array(
      'from_name' => 'u_vyst_redaktora_4',
      'to_name' => 'u_jaz_redaktora_2',
      'name' => 'u_vyst_redaktora4-u_jaz_redaktora2',
    ),
    'u_vyst_redaktora_4:vyradene' => array(
      'from_name' => 'u_vyst_redaktora_4',
      'to_name' => 'vyradene',
      'name' => 'u_vyst_redaktora4-vyradene',
    ),
    'ukoncenezluene:u_vyst_redaktora_2' => array(
      'from_name' => 'ukoncenezluene',
      'to_name' => 'u_vyst_redaktora_2',
      'name' => 'ukoncene_zlucene-u_vyst_redaktora2',
    ),
    'v_zalamovani:publikovane_na_webe' => array(
      'from_name' => 'v_zalamovani',
      'to_name' => 'publikovane_na_webe',
      'name' => 'v_zalamovani-zverejnene_na_webe',
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
    'zlucene:na_jazykovu_korekturu' => array(
      'from_name' => 'zlucene',
      'to_name' => 'na_jazykovu_korekturu',
      'name' => 'zlucene-u_jaz_redaktora1',
    ),
    'zlucene:zlucene_odkazy' => array(
      'from_name' => 'zlucene',
      'to_name' => 'zlucene_odkazy',
      'name' => 'zlucene_zlucene-odkazy',
    ),
    'zlucene_odkazy:na_jazykovu_korekturu' => array(
      'from_name' => 'zlucene_odkazy',
      'to_name' => 'na_jazykovu_korekturu',
      'name' => 'zlucene_odkazy-u_jaz_redaktora1',
    ),
    'zverejnene_oprava:zverejnene_vratene' => array(
      'from_name' => 'zverejnene_oprava',
      'to_name' => 'zverejnene_vratene',
      'name' => 'zverejnene_oprava-zverejnene_vratene',
    ),
    'zverejnene_vratene:zverejnene_oprava' => array(
      'from_name' => 'zverejnene_vratene',
      'to_name' => 'zverejnene_oprava',
      'name' => 'zverejnene_vratene-zverejnene_oprava',
    ),
  );
  return $items;
}
