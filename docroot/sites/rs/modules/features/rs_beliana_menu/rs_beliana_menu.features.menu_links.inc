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

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_redakn-systm:admin/beliana.
  $menu_links['main-menu_redakn-systm:admin/beliana'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/beliana',
    'router_path' => 'admin',
    'link_title' => 'Redakčný systém',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_redakn-systm:admin/beliana',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_vyhada-hesl:vyhladat.
  $menu_links['main-menu_vyhada-hesl:vyhladat'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vyhladat',
    'router_path' => 'vyhladat',
    'link_title' => 'Vyhľadať heslá',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_vyhada-hesl:vyhladat',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_vyhada-ilustrcie:vyhladat-ilustracie.
  $menu_links['main-menu_vyhada-ilustrcie:vyhladat-ilustracie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vyhladat-ilustracie',
    'router_path' => 'vyhladat-ilustracie',
    'link_title' => 'Vyhľadať ilustrácie',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_vyhada-ilustrcie:vyhladat-ilustracie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: management_ilustrcie-g:admin/beliana/Ilustracie-g.
  $menu_links['management_ilustrcie-g:admin/beliana/Ilustracie-g'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/Ilustracie-g',
    'router_path' => 'admin/beliana/Ilustracie-g',
    'link_title' => 'Ilustrácie (G)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_ilustrcie-g:admin/beliana/Ilustracie-g',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -26,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
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
    'weight' => -31,
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
    'weight' => -47,
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
    'weight' => -46,
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
    'weight' => -36,
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
    'weight' => -35,
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
    'weight' => -45,
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
    'weight' => -44,
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
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr2x:admin/beliana/na-posudenie-vr2x.
  $menu_links['management_na-posdenie-vr2x:admin/beliana/na-posudenie-vr2x'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr2x',
    'router_path' => 'admin/beliana',
    'link_title' => 'Na posúdenie (VR2X)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr2x:admin/beliana/na-posudenie-vr2x',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_na-posdenie-vr3:admin/beliana/na-posudenie-vr3.
  $menu_links['management_na-posdenie-vr3:admin/beliana/na-posudenie-vr3'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/na-posudenie-vr3',
    'router_path' => 'admin/beliana',
    'link_title' => 'Na posúdenie (VR3)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_na-posdenie-vr3:admin/beliana/na-posudenie-vr3',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
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
    'weight' => -40,
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
    'weight' => -39,
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
    'weight' => -29,
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
    'weight' => -30,
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
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_oznam:node/add/odkaz.
  $menu_links['management_oznam:node/add/odkaz'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/odkaz',
    'router_path' => 'node/add',
    'link_title' => 'Oznam',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_oznam:node/add/odkaz',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_vytvori:node/add',
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
    'weight' => -49,
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
    'weight' => -38,
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
    'router_path' => 'admin/beliana',
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
    'weight' => -32,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_vetky-moje-ilustrcie:admin/beliana/Ilustracie-vr.
  $menu_links['management_vetky-moje-ilustrcie:admin/beliana/Ilustracie-vr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/Ilustracie-vr',
    'router_path' => 'admin/beliana/Ilustracie-vr',
    'link_title' => 'Všetky moje ilustrácie',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_vetky-moje-ilustrcie:admin/beliana/Ilustracie-vr',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -25,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_vyhada-hesl:vyhľadať.
  $menu_links['management_vyhada-hesl:vyhľadať'] = array(
    'menu_name' => 'management',
    'link_path' => 'vyhľadať',
    'router_path' => 'vyhladat',
    'link_title' => 'Vyhľadať heslá',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_vyhada-hesl:vyhľadať',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: management_vyhada-ilustrcie:vyhľadať-ilustrácie.
  $menu_links['management_vyhada-ilustrcie:vyhľadať-ilustrácie'] = array(
    'menu_name' => 'management',
    'link_path' => 'vyhľadať-ilustrácie',
    'router_path' => 'vyhladat-ilustracie',
    'link_title' => 'Vyhľadať ilustrácie',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_vyhada-ilustrcie:vyhľadať-ilustrácie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
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
    'weight' => -28,
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
    'weight' => -48,
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
    'weight' => -33,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_zli:admin/beliana/zlucovanie.
  $menu_links['management_zli:admin/beliana/zlucovanie'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/beliana/zlucovanie',
    'router_path' => 'admin/beliana',
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
    'weight' => -34,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: navigation_article:node/add/article.
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );
  // Exported menu link: navigation_basic-page:node/add/page.
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );
  // Exported menu link: navigation_beliana:admin/beliana.
  $menu_links['navigation_beliana:admin/beliana'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/beliana',
    'router_path' => 'admin',
    'link_title' => 'Beliana',
    'options' => array(
      'identifier' => 'navigation_beliana:admin/beliana',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_diskusn-tma:node/add/forum.
  $menu_links['navigation_diskusn-tma:node/add/forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Diskusná téma',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Téma fóra</em> začíná nové diskusné vlákno v rámci fóra.',
      ),
      'identifier' => 'navigation_diskusn-tma:node/add/forum',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );
  // Exported menu link: navigation_glossary:glossary.
  $menu_links['navigation_glossary:glossary'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'glossary',
    'router_path' => 'glossary',
    'link_title' => 'Glossary',
    'options' => array(
      'identifier' => 'navigation_glossary:glossary',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_heslo:node/add/heslo.
  $menu_links['navigation_heslo:node/add/heslo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/heslo',
    'router_path' => 'node/add/heslo',
    'link_title' => 'Heslo',
    'options' => array(
      'attributes' => array(
        'title' => 'Heslo bude vytvorené v stave "Navrhnuté". Po odsúhlasení správcom heslára sa stav zmení na "Zaradené" a redaktor ho môže priradiť autorovi na vypracovanie. ',
      ),
      'identifier' => 'navigation_heslo:node/add/heslo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );
  // Exported menu link: navigation_ilustrcia:node/add/ilustracia.
  $menu_links['navigation_ilustrcia:node/add/ilustracia'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ilustracia',
    'router_path' => 'node/add/ilustracia',
    'link_title' => 'Ilustrácia',
    'options' => array(
      'attributes' => array(
        'title' => 'Ilustrácia k heslu. Zvoľte rovnaký názov ako je názov súvisiaceho hesla (prípadne pridajte "Il.1" alebo podobne)  a rovnakú lexikálnu skupinu. Po vytvorení treba ilustráciu heslu priradiť (otvoriť heslo na úpravu a nastaviť pole Ilustrácia).',
      ),
      'identifier' => 'navigation_ilustrcia:node/add/ilustracia',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );
  // Exported menu link: navigation_import:import.
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_importovan-heslo:node/add/importovane-heslo.
  $menu_links['navigation_importovan-heslo:node/add/importovane-heslo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/importovane-heslo',
    'router_path' => 'node/add/importovane-heslo',
    'link_title' => 'Importované heslo',
    'options' => array(
      'attributes' => array(
        'title' => 'Knižne vydané heslo dielov 1 - 7. Importované z doc súborov, ktoré boli použité ako podklady na tlač',
      ),
      'identifier' => 'navigation_importovan-heslo:node/add/importovane-heslo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_vytvori:node/add',
  );
  // Exported menu link: navigation_recent-posts:tracker.
  $menu_links['navigation_recent-posts:tracker'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'tracker',
    'router_path' => 'tracker',
    'link_title' => 'Recent posts',
    'options' => array(
      'identifier' => 'navigation_recent-posts:tracker',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_tlai:admin/beliana/print.
  $menu_links['navigation_tlai:admin/beliana/print'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/beliana/print',
    'router_path' => 'admin',
    'link_title' => 'Tlačiť',
    'options' => array(
      'identifier' => 'navigation_tlai:admin/beliana/print',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_beliana:admin/beliana',
  );
  // Exported menu link: navigation_vytvori:node/add.
  $menu_links['navigation_vytvori:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Vytvoriť',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_vytvori:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
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
  t('Article');
  t('Basic page');
  t('Beliana');
  t('Diskusná téma');
  t('Glossary');
  t('Heslo');
  t('Home');
  t('Ilustrácia');
  t('Ilustrácie (G)');
  t('Ilustrácie (R)');
  t('Import');
  t('Importované heslo');
  t('Jazyková redakcia 1');
  t('Jazyková redakcia 2');
  t('Korektúra 1');
  t('Korektúra 2');
  t('Messages');
  t('My Workbench');
  t('Na posúdenie (R)');
  t('Na posúdenie (VR1)');
  t('Na posúdenie (VR2)');
  t('Na posúdenie (VR2X)');
  t('Na posúdenie (VR3)');
  t('Na posúdenie (VR4)');
  t('Na posúdenie (VR5)');
  t('Navrhnuté');
  t('Nepriradené heslá');
  t('Odovzdané heslá');
  t('Oznam');
  t('Priradiť autora');
  t('Recent posts');
  t('Redakčný systém');
  t('Rozpracované heslá');
  t('Správy');
  t('Tlačiť');
  t('Vyhľadať heslá');
  t('Vyhľadať ilustrácie');
  t('Vyradené');
  t('Vytvoriť');
  t('Všetky moje heslá');
  t('Všetky moje ilustrácie');
  t('Zlúčené');
  t('Zlúčiť');

  return $menu_links;
}
