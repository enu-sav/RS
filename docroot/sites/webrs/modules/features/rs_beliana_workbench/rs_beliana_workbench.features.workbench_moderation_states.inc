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
    '_ilustr_cia_u_autora' => array(
      'name' => '_ilustr_cia_u_autora',
      'label' => 'Ilustrácia u autora',
      'description' => ' Ilustrácia u autora',
      'weight' => 10,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Navrhnuté',
      'description' => 'Heslo navrhnuté na zaradenie do B., musí byť odsúhlasené správcom GH',
      'weight' => 5,
    ),
    'ilustracia_na_webe' => array(
      'name' => 'ilustracia_na_webe',
      'label' => 'Ilustrácia na webe',
      'description' => 'Ilustrácie je publikovaná na webe',
      'weight' => 10,
    ),
    'ilustracia_na_zverejnenie' => array(
      'name' => 'ilustracia_na_zverejnenie',
      'label' => 'Ilustrácia na zverejnenie',
      'description' => 'Ilustrácia na zverejnenie',
      'weight' => 10,
    ),
    'ilustracia_u_grafika' => array(
      'name' => 'ilustracia_u_grafika',
      'label' => 'Ilustrácia u grafika',
      'description' => 'Ilustrácia u grafika',
      'weight' => 10,
    ),
    'ilustracia_u_redaktora' => array(
      'name' => 'ilustracia_u_redaktora',
      'label' => 'Ilustrácia u redaktora',
      'description' => 'Ilustrácia u redaktora',
      'weight' => 10,
    ),
    'ilustracia_u_vyst_redaktora_5' => array(
      'name' => 'ilustracia_u_vyst_redaktora_5',
      'label' => 'Ilustrácia u výst. redaktora',
      'description' => 'Ilustrácia u výstupného redaktora',
      'weight' => 10,
    ),
    'importovan_u_jr_kk' => array(
      'name' => 'importovan_u_jr_kk',
      'label' => 'Importované u JR – KK',
      'description' => 'Vo vetve importovaných hesiel priradené jaz. redaktorke KK',
      'weight' => -5,
    ),
    'importovane' => array(
      'name' => 'importovane',
      'label' => 'Importované',
      'description' => 'Importované heslo (zo súboru)',
      'weight' => -10,
    ),
    'importovane_jaz_kontrola' => array(
      'name' => 'importovane_jaz_kontrola',
      'label' => 'Importované u JR – JS',
      'description' => 'Vo vetve importovaných hesiel priradené jaz. redaktorke JS',
      'weight' => -6,
    ),
    'importovane_na_zverejnenie' => array(
      'name' => 'importovane_na_zverejnenie',
      'label' => 'Importované – na zverejnenie',
      'description' => '',
      'weight' => -4,
    ),
    'importovane_u_jaz_korektora' => array(
      'name' => 'importovane_u_jaz_korektora',
      'label' => 'Importované u JR – DS',
      'description' => 'Vo vetve importovaných hesiel priradené jaz. redaktorke DS',
      'weight' => -7,
    ),
    'importovane_u_jr2' => array(
      'name' => 'importovane_u_jr2',
      'label' => 'Importované u JR (zrušený)',
      'description' => '',
      'weight' => 0,
    ),
    'importovane_u_vr' => array(
      'name' => 'importovane_u_vr',
      'label' => 'Importované u VR',
      'description' => 'Importovane heslo u VR na kontrolu pred zverejnenim',
      'weight' => -9,
    ),
    'importovane_vyradene' => array(
      'name' => 'importovane_vyradene',
      'label' => 'Importované - vyradené',
      'description' => 'Importované heslá, ktoré nebudú zverejneé na webe',
      'weight' => -8,
    ),
    'kontrola_etymologie' => array(
      'name' => 'kontrola_etymologie',
      'label' => 'Kontrola etymológie',
      'description' => 'Kontrola etymológie a prepisov',
      'weight' => 10,
    ),
    'na_jazykovu_korekturu' => array(
      'name' => 'na_jazykovu_korekturu',
      'label' => 'U JR – JS',
      'description' => 'V hlavnej vetve priradené jaz. redaktorke JS',
      'weight' => 10,
    ),
    'na_opakovane_zverejnenie' => array(
      'name' => 'na_opakovane_zverejnenie',
      'label' => 'Na opakované zverejnenie',
      'description' => 'Na opakované odoslanie zverejneného hesla po úprave na web',
      'weight' => 2,
    ),
    'na_zalomenie' => array(
      'name' => 'na_zalomenie',
      'label' => 'Na zverejnenie',
      'description' => 'Heslo je pripravené pre web alebo tlač',
      'weight' => -3,
    ),
    'na_zverejnenie' => array(
      'name' => 'na_zverejnenie',
      'label' => 'U výst. redaktora',
      'description' => 'Heslo odoslané na posúdenie výstupnému redaktorovi',
      'weight' => 10,
    ),
    'navrhnute_na_vyradenie' => array(
      'name' => 'navrhnute_na_vyradenie',
      'label' => 'Navrhnuté na zmenu',
      'description' => 'Heslo navrhnuté na vyradenie alebo zmenu názvu al LS',
      'weight' => 8,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'U redaktora',
      'description' => 'Heslo odoslané na posúdenie redaktorovi, pracuje s ním redaktor',
      'weight' => 10,
    ),
    'nova_ilustracia' => array(
      'name' => 'nova_ilustracia',
      'label' => 'Nová ilustrácia',
      'description' => 'Nová ilustrácia - nik nemôže upravovať',
      'weight' => 10,
    ),
    'objednane' => array(
      'name' => 'objednane',
      'label' => 'Objednané',
      'description' => 'Objednané',
      'weight' => 6,
    ),
    'pozdr_an_' => array(
      'name' => 'pozdr_an_',
      'label' => 'Pozdržané',
      'description' => 'Heslo na ceste k zverejnieniu, ale dočasne pozdržané ',
      'weight' => 3,
    ),
    'prevzate_z_rs' => array(
      'name' => 'prevzate_z_rs',
      'label' => 'Prevzaté z RS',
      'description' => 'Prevzaté z knižného RS, podľa obsahu ho treba zverejniť, vyradiť alebo poslať na úpravu',
      'weight' => 7,
    ),
    'publikovane_na_webe' => array(
      'name' => 'publikovane_na_webe',
      'label' => 'Zverejnené na webe',
      'description' => 'Finálny stav hesla po akcii "Zverejniť na webe"',
      'weight' => -2,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'published',
      'description' => 'nepoužívané',
      'weight' => 10,
    ),
    'u_autora' => array(
      'name' => 'u_autora',
      'label' => 'U autora',
      'description' => 'Na vypracovanie autorom,  pred odoslaním redaktorovi',
      'weight' => 10,
    ),
    'u_jaz_korektora' => array(
      'name' => 'u_jaz_korektora',
      'label' => 'U JR – DS',
      'description' => 'V hlavnej vetve priradené jaz. redaktorke DS',
      'weight' => 10,
    ),
    'u_jr_kk' => array(
      'name' => 'u_jr_kk',
      'label' => 'U JR – KK',
      'description' => 'V hlavnej vetve priradené jaz. redaktorke KK',
      'weight' => 10,
    ),
    'u_konzultanta' => array(
      'name' => 'u_konzultanta',
      'label' => 'U konzultanta',
      'description' => 'heslo u konzultanta',
      'weight' => 10,
    ),
    'ukoncenezluene' => array(
      'name' => 'ukoncenezluene',
      'label' => 'Ukončené/zlúčené',
      'description' => 'Heslo bolo v knižnom RS zlúčené s inými heslami, v pôvodnej forme ďalej nepokračuje ',
      'weight' => 10,
    ),
    'vyradene' => array(
      'name' => 'vyradene',
      'label' => 'Vyradené',
      'description' => 'Heslo ďalej neexistuje, z Beliany bolo vyradené',
      'weight' => 10,
    ),
    'wiki' => array(
      'name' => 'wiki',
      'label' => 'Wiki',
      'description' => 'Základný stav wiki stránky',
      'weight' => 4,
    ),
    'zaradene' => array(
      'name' => 'zaradene',
      'label' => 'Zaradené',
      'description' => 'Zaradené do B., môže byť priradené autorovi na vypracovanie',
      'weight' => 10,
    ),
    'zlucene' => array(
      'name' => 'zlucene',
      'label' => 'Zlúčené',
      'description' => 'Heslo bolo v knižnom RS vytvorené zlúčením (pomocný stav)',
      'weight' => 9,
    ),
    'zverejnene_jaz_kontrola' => array(
      'name' => 'zverejnene_jaz_kontrola',
      'label' => 'Zverejnené – jaz. kontrola',
      'description' => '',
      'weight' => 1,
    ),
    'zverejnene_oprava' => array(
      'name' => 'zverejnene_oprava',
      'label' => 'Zverejnené – oprava',
      'description' => 'Oprava zverejneneho hesla rolou zRedaktor',
      'weight' => -1,
    ),
    'zverejnene_vratene' => array(
      'name' => 'zverejnene_vratene',
      'label' => 'Zverejnené – vrátené',
      'description' => 'Zverejnené heslo vrátené redaktorovi na úpravu',
      'weight' => 0,
    ),
  );
  return $items;
}
