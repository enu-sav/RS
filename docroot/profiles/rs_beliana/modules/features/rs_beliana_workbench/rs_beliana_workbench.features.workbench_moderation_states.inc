<?php
/**
 * @file
 * rs_beliana_workbench.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function rs_beliana_workbench_workbench_moderation_export_states() {
  $items = array(
    '1_korektura' => array(
      'name' => '1_korektura',
      'label' => '1. korektúra',
      'description' => 'U redaktora/redaktorov na 1. korektúru',
      'weight' => 1,
    ),
    '2_korekt_ra' => array(
      'name' => '2_korekt_ra',
      'label' => '2. korektúra',
      'description' => 'U redaktora/redaktorov na 2. korektúru',
      'weight' => 4,
    ),
    '_ilustr_cia_u_autora' => array(
      'name' => '_ilustr_cia_u_autora',
      'label' => ' Ilustrácia u autora',
      'description' => ' Ilustrácia u autora',
      'weight' => 0,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Navrhnuté',
      'description' => 'Heslo navrhnuté na zaradenie do B., musí byť odsúhlasené správcom GH',
      'weight' => -10,
    ),
    'ilustracia_na_zverejnenie' => array(
      'name' => 'ilustracia_na_zverejnenie',
      'label' => 'Ilustrácia na zverejnenie',
      'description' => '',
      'weight' => 0,
    ),
    'ilustracia_u_grafika' => array(
      'name' => 'ilustracia_u_grafika',
      'label' => 'Ilustrácia u grafika',
      'description' => '',
      'weight' => 0,
    ),
    'ilustracia_u_redaktora' => array(
      'name' => 'ilustracia_u_redaktora',
      'label' => 'Ilustrácia u redaktora',
      'description' => '',
      'weight' => 0,
    ),
    'importovane' => array(
      'name' => 'importovane',
      'label' => 'Importované',
      'description' => 'Importované heslo (zo súboru)',
      'weight' => 9,
    ),
    'na_jazykovu_korekturu' => array(
      'name' => 'na_jazykovu_korekturu',
      'label' => 'U jaz. redaktora 1',
      'description' => 'Heslo odoslané na  1. jazykovú korektúru, pracuje s ním jazykový redaktor 1',
      'weight' => 0,
    ),
    'na_trenovanie' => array(
      'name' => 'na_trenovanie',
      'label' => 'Na trénovanie',
      'description' => 'Pre tredaktorov na trénovanie práce s RS',
      'weight' => 0,
    ),
    'na_zalomenie' => array(
      'name' => 'na_zalomenie',
      'label' => 'Na zalomenie',
      'description' => 'Heslo je pripravené na ďalšie spracovanie v Beliane',
      'weight' => 0,
    ),
    'na_zverejnenie' => array(
      'name' => 'na_zverejnenie',
      'label' => 'U výst. redaktora 1',
      'description' => 'Heslo odoslané na posúdenie výstupnému redaktorovi 1',
      'weight' => -4,
    ),
    'navrhnute_na_vyradenie' => array(
      'name' => 'navrhnute_na_vyradenie',
      'label' => 'Navrhnuté na zmenu',
      'description' => 'Heslo navrhnuté na vyradenie alebo zmenu názvu al LS',
      'weight' => 0,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'U redaktora',
      'description' => 'Heslo odoslané na posúdenie redaktorovi, pracuje s ním redaktor',
      'weight' => -5,
    ),
    'nova_ilustracia' => array(
      'name' => 'nova_ilustracia',
      'label' => 'Nová ilustrácia',
      'description' => '',
      'weight' => 0,
    ),
    'publikovane_na_webe' => array(
      'name' => 'publikovane_na_webe',
      'label' => 'Publikované na webe',
      'description' => 'Finálny stav hesla po akcii "Publikovať na webe"',
      'weight' => 0,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'published',
      'description' => 'nepoužívané',
      'weight' => 7,
    ),
    'u_autora' => array(
      'name' => 'u_autora',
      'label' => 'U autora',
      'description' => 'Na vypracovanie autorom,  pred odoslaním redaktorovi',
      'weight' => 0,
    ),
    'u_jaz_redaktora_2' => array(
      'name' => 'u_jaz_redaktora_2',
      'label' => 'U jaz. redaktora 2',
      'description' => 'Heslo odoslané na  2. jazykovú korektúru, pracuje s ním jazykový redaktor 2',
      'weight' => 5,
    ),
    'u_konzultanta' => array(
      'name' => 'u_konzultanta',
      'label' => 'U konzultanta',
      'description' => 'heslo u konzultanta',
      'weight' => 0,
    ),
    'u_v_st_redaktora_2hp' => array(
      'name' => 'u_v_st_redaktora_2hp',
      'label' => 'U výst. redaktora 2AP',
      'description' => 'VR2 - H. Procíková',
      'weight' => 0,
    ),
    'u_v_st_redaktora_5' => array(
      'name' => 'u_v_st_redaktora_5',
      'label' => 'U výst. redaktora 5',
      'description' => 'Na spracovanie u výst. redaktora 5',
      'weight' => 6,
    ),
    'u_vyst_redaktora_2' => array(
      'name' => 'u_vyst_redaktora_2',
      'label' => 'U výst. redaktora 2',
      'description' => 'Na spracovanie u výst. redaktora 2',
      'weight' => -3,
    ),
    'u_vyst_redaktora_3' => array(
      'name' => 'u_vyst_redaktora_3',
      'label' => 'U výst. redaktora 3',
      'description' => 'Na spracovanie u výst. redaktora 3',
      'weight' => 2,
    ),
    'u_vyst_redaktora_4' => array(
      'name' => 'u_vyst_redaktora_4',
      'label' => 'U výst. redaktora 4',
      'description' => 'Na spracovanie u výst. redaktora 4',
      'weight' => 3,
    ),
    'ukoncenezluene' => array(
      'name' => 'ukoncenezluene',
      'label' => 'Ukončené/zlúčené',
      'description' => 'Heslo bolo zlúčené s inými heslami, v pôvodnej forme ďalej nepokračuje ',
      'weight' => -1,
    ),
    'vyradene' => array(
      'name' => 'vyradene',
      'label' => 'Vyradené',
      'description' => 'Heslo ďalej neexistuje, z Beliany bolo vyradené',
      'weight' => -8,
    ),
    'zaradene' => array(
      'name' => 'zaradene',
      'label' => 'Zaradené',
      'description' => 'Zaradené do B., môže byť priradené autorovi na vypracovanie',
      'weight' => -9,
    ),
    'zlucene' => array(
      'name' => 'zlucene',
      'label' => 'Zlúčené',
      'description' => 'Heslo ďalej samostatne neexistuje, bolo zlúčené s iným heslom',
      'weight' => -2,
    ),
    'zlucene_hp' => array(
      'name' => 'zlucene_hp',
      'label' => 'ZlúčenéAP',
      'description' => 'Zlúčené u H. Procíkovej',
      'weight' => 0,
    ),
  );
  return $items;
}
