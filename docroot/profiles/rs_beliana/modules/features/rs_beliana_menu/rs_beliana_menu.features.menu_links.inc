<?php
/**
 * @file
 * rs_beliana_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rs_beliana_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_ilustrcie-r:admin/beliana/Ilustracie-r.
  $menu_links['management_ilustrcie-r:admin/beliana/Ilustracie-r'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/Ilustracie-r',
    'router_path' => 'admin/beliana/Ilustracie-r',
    'link_title' => 'Ilustrácie (R)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_ilustrcie-r:admin/beliana/Ilustracie-r',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_jazykov-redakcia-1:admin/beliana/jaz-redakcia-1.
  $menu_links['management_jazykov-redakcia-1:admin/beliana/jaz-redakcia-1'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/jaz-redakcia-1',
    'router_path' => 'admin/beliana/jaz-redakcia-1',
    'link_title' => 'Jazyková redakcia 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_jazykov-redakcia-1:admin/beliana/jaz-redakcia-1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_jazykov-redakcia-2:admin/beliana/jaz-redakcia-2.
  $menu_links['management_jazykov-redakcia-2:admin/beliana/jaz-redakcia-2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/jaz-redakcia-2',
    'router_path' => 'admin/beliana/jaz-redakcia-2',
    'link_title' => 'Jazyková redakcia 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_jazykov-redakcia-2:admin/beliana/jaz-redakcia-2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_korektra-1:admin/beliana/korektura1.
  $menu_links['management_korektra-1:admin/beliana/korektura1'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/korektura1',
    'router_path' => 'admin/beliana/korektura1',
    'link_title' => 'Korektúra 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_korektra-1:admin/beliana/korektura1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_korektra-2:admin/beliana/korektura2.
  $menu_links['management_korektra-2:admin/beliana/korektura2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/korektura2',
    'router_path' => 'admin/beliana/korektura2',
    'link_title' => 'Korektúra 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_korektra-2:admin/beliana/korektura2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_my-workbench:admin/workbench.
  $menu_links['management_my-workbench:admin/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My Workbench area',
      ),
      'identifier' => 'management_my-workbench:admin/workbench',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: management_na-posdenie-r:admin/beliana/na-posudenie-r.
  $menu_links['management_na-posdenie-r:admin/beliana/na-posudenie-r'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-r',
    'router_path' => 'admin/beliana/na-posudenie-r',
    'link_title' => 'Na posúdenie (R)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-r:admin/beliana/na-posudenie-r',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr1:admin/beliana/na-posudenie-vr1.
  $menu_links['management_na-posdenie-vr1:admin/beliana/na-posudenie-vr1'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr1',
    'router_path' => 'admin/beliana/na-posudenie-vr1',
    'link_title' => 'Na posúdenie (VR1)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr1:admin/beliana/na-posudenie-vr1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr2:admin/beliana/na-posudenie-vr2.
  $menu_links['management_na-posdenie-vr2:admin/beliana/na-posudenie-vr2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr2',
    'router_path' => 'admin/beliana/na-posudenie-vr2',
    'link_title' => 'Na posúdenie (VR2)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr2:admin/beliana/na-posudenie-vr2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr3:admin/beliana/na-posudenie-vr3.
  $menu_links['management_na-posdenie-vr3:admin/beliana/na-posudenie-vr3'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr3',
    'router_path' => 'admin/beliana/na-posudenie-vr3',
    'link_title' => 'Na posúdenie (VR3)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr3:admin/beliana/na-posudenie-vr3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr4:admin/beliana/na-posudenie-vr4.
  $menu_links['management_na-posdenie-vr4:admin/beliana/na-posudenie-vr4'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr4',
    'router_path' => 'admin/beliana/na-posudenie-vr4',
    'link_title' => 'Na posúdenie (VR4)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr4:admin/beliana/na-posudenie-vr4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr5:admin/beliana/na-posudenie-vr5.
  $menu_links['management_na-posdenie-vr5:admin/beliana/na-posudenie-vr5'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr5',
    'router_path' => 'admin/beliana/na-posudenie-vr5',
    'link_title' => 'Na posúdenie (VR5)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr5:admin/beliana/na-posudenie-vr5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_navrhnut:admin/beliana/navrhnute.
  $menu_links['management_navrhnut:admin/beliana/navrhnute'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/navrhnute',
    'router_path' => 'admin/beliana/navrhnute',
    'link_title' => 'Navrhnuté',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_navrhnut:admin/beliana/navrhnute',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_nepriraden-hesl:admin/beliana/nepriradene.
  $menu_links['management_nepriraden-hesl:admin/beliana/nepriradene'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/nepriradene',
    'router_path' => 'admin/beliana/nepriradene',
    'link_title' => 'Nepriradené heslá',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_nepriraden-hesl:admin/beliana/nepriradene',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_odovzdan-hesl:admin/beliana/odovzdane.
  $menu_links['management_odovzdan-hesl:admin/beliana/odovzdane'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/odovzdane',
    'router_path' => 'admin/beliana/odovzdane',
    'link_title' => 'Odovzdané heslá',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_odovzdan-hesl:admin/beliana/odovzdane',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_priradi-autora:admin/beliana/priradit-autora.
  $menu_links['management_priradi-autora:admin/beliana/priradit-autora'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/priradit-autora',
    'router_path' => 'admin/beliana/priradit-autora',
    'link_title' => 'Priradiť autora',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_priradi-autora:admin/beliana/priradit-autora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_redakn-systm:admin/beliana.
  $menu_links['management_redakn-systm:admin/beliana'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana',
    'router_path' => 'admin/beliana',
    'link_title' => 'Redakčný systém',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_redakn-systm:admin/beliana',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: management_rozpracovan-hesl:admin/beliana/drafts.
  $menu_links['management_rozpracovan-hesl:admin/beliana/drafts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/drafts',
    'router_path' => 'admin/beliana/drafts',
    'link_title' => 'Rozpracované heslá',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_rozpracovan-hesl:admin/beliana/drafts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_sprvy:messages.
  $menu_links['management_sprvy:messages'] = array(
    'menu_name' => 'management',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Správy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_sprvy:messages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: management_vetky-moje-hesl:admin/beliana/all.
  $menu_links['management_vetky-moje-hesl:admin/beliana/all'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/all',
    'router_path' => 'admin/beliana/all',
    'link_title' => 'Všetky moje heslá',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_vetky-moje-hesl:admin/beliana/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_vyraden:admin/beliana/vyradene.
  $menu_links['management_vyraden:admin/beliana/vyradene'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/vyradene',
    'router_path' => 'admin/beliana/vyradene',
    'link_title' => 'Vyradené',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_vyraden:admin/beliana/vyradene',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_vytvori:node/add.
  $menu_links['management_vytvori:node/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Vytvoriť',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_vytvori:node/add',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_zlen:admin/beliana/zlucene.
  $menu_links['management_zlen:admin/beliana/zlucene'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/zlucene',
    'router_path' => 'admin/beliana/zlucene',
    'link_title' => 'Zlúčené',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_zlen:admin/beliana/zlucene',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_zli:admin/beliana/zlucovanie.
  $menu_links['management_zli:admin/beliana/zlucovanie'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/zlucovanie',
    'router_path' => 'admin/beliana/zlucovanie',
    'link_title' => 'Zlúčiť',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_zli:admin/beliana/zlucovanie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: user-menu_messages:messages.
  $menu_links['user-menu_messages:messages'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'identifier' => 'user-menu_messages:messages',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ilustrácie (R)');
  t('Jazyková redakcia 1');
  t('Jazyková redakcia 2');
  t('Korektúra 1');
  t('Korektúra 2');
  t('Messages');
  t('My Workbench');
  t('Na posúdenie (R)');
  t('Na posúdenie (VR1)');
  t('Na posúdenie (VR2)');
  t('Na posúdenie (VR3)');
  t('Na posúdenie (VR4)');
  t('Na posúdenie (VR5)');
  t('Navrhnuté');
  t('Nepriradené heslá');
  t('Odovzdané heslá');
  t('Priradiť autora');
  t('Redakčný systém');
  t('Rozpracované heslá');
  t('Správy');
  t('Vyradené');
  t('Vytvoriť');
  t('Všetky moje heslá');
  t('Zlúčené');
  t('Zlúčiť');

  return $menu_links;
}
