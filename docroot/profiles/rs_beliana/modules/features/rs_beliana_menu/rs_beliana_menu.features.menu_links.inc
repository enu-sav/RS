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
  // Exported menu link: management_archivovan:archivovane.
  $menu_links['management_archivovan:archivovane'] = array(
    'menu_name' => 'management',
    'link_path' => 'archivovane',
    'router_path' => 'archivovane',
    'link_title' => 'Archivované',
    'options' => array(
      'identifier' => 'management_archivovan:archivovane',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_export-heslo-gh:export-heslo-gh.
  $menu_links['management_export-heslo-gh:export-heslo-gh'] = array(
    'menu_name' => 'management',
    'link_path' => 'export-heslo-gh',
    'router_path' => 'export-heslo-gh',
    'link_title' => 'Export heslo GH',
    'options' => array(
      'identifier' => 'management_export-heslo-gh:export-heslo-gh',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_export-ilustrcia:export-ilustracia.
  $menu_links['management_export-ilustrcia:export-ilustracia'] = array(
    'menu_name' => 'management',
    'link_path' => 'export-ilustracia',
    'router_path' => 'export-ilustracia',
    'link_title' => 'Export ilustrácia',
    'options' => array(
      'identifier' => 'management_export-ilustrcia:export-ilustracia',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_export-vydan:export-vydane.
  $menu_links['management_export-vydan:export-vydane'] = array(
    'menu_name' => 'management',
    'link_path' => 'export-vydane',
    'router_path' => 'export-vydane',
    'link_title' => 'Export vydané',
    'options' => array(
      'identifier' => 'management_export-vydan:export-vydane',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_exportova-a-tlai-multi:export-multi.
  $menu_links['management_exportova-a-tlai-multi:export-multi'] = array(
    'menu_name' => 'management',
    'link_path' => 'export-multi',
    'router_path' => 'export-multi',
    'link_title' => 'Exportovať a tlačiť-multi',
    'options' => array(
      'identifier' => 'management_exportova-a-tlai-multi:export-multi',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_exportova-a-tlai:export.
  $menu_links['management_exportova-a-tlai:export'] = array(
    'menu_name' => 'management',
    'link_path' => 'export',
    'router_path' => 'export',
    'link_title' => 'Exportovať a tlačiť',
    'options' => array(
      'identifier' => 'management_exportova-a-tlai:export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_exportova-sadzba:export-na-sadzbu.
  $menu_links['management_exportova-sadzba:export-na-sadzbu'] = array(
    'menu_name' => 'management',
    'link_path' => 'export-na-sadzbu',
    'router_path' => 'export-na-sadzbu',
    'link_title' => 'Exportovať (sadzba)',
    'options' => array(
      'identifier' => 'management_exportova-sadzba:export-na-sadzbu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
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
    'weight' => -33,
    'customized' => 1,
    'parent_identifier' => 'management_redakn-systm:admin/beliana',
  );
  // Exported menu link: management_jazykov-redakcia---importovan:jazykova-redakcia-importovane.
  $menu_links['management_jazykov-redakcia---importovan:jazykova-redakcia-importovane'] = array(
    'menu_name' => 'management',
    'link_path' => 'jazykova-redakcia-importovane',
    'router_path' => 'jazykova-redakcia-importovane',
    'link_title' => 'Jazyková redakcia - importované',
    'options' => array(
      'identifier' => 'management_jazykov-redakcia---importovan:jazykova-redakcia-importovane',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: management_odosla-na-zverejnenie-vr:odoslat-na-zverejnenie-vr.
  $menu_links['management_odosla-na-zverejnenie-vr:odoslat-na-zverejnenie-vr'] = array(
    'menu_name' => 'management',
    'link_path' => 'odoslat-na-zverejnenie-vr',
    'router_path' => 'odoslat-na-zverejnenie-vr',
    'link_title' => 'Odoslať na zverejnenie (VR)',
    'options' => array(
      'identifier' => 'management_odosla-na-zverejnenie-vr:odoslat-na-zverejnenie-vr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_odosla-na-zverejnenie:odoslat-na-zverejnenie-r.
  $menu_links['management_odosla-na-zverejnenie:odoslat-na-zverejnenie-r'] = array(
    'menu_name' => 'management',
    'link_path' => 'odoslat-na-zverejnenie-r',
    'router_path' => 'odoslat-na-zverejnenie-r',
    'link_title' => 'Odoslať na zverejnenie',
    'options' => array(
      'identifier' => 'management_odosla-na-zverejnenie:odoslat-na-zverejnenie-r',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: management_opravi-importovan:opravit-importovane.
  $menu_links['management_opravi-importovan:opravit-importovane'] = array(
    'menu_name' => 'management',
    'link_path' => 'opravit-importovane',
    'router_path' => 'opravit-importovane',
    'link_title' => 'Opraviť importované',
    'options' => array(
      'identifier' => 'management_opravi-importovan:opravit-importovane',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_opravi-ls-1-heslo:opravit-ls1.
  $menu_links['management_opravi-ls-1-heslo:opravit-ls1'] = array(
    'menu_name' => 'management',
    'link_path' => 'opravit-ls1',
    'router_path' => 'opravit-ls1',
    'link_title' => 'Opraviť LS 1 heslo',
    'options' => array(
      'identifier' => 'management_opravi-ls-1-heslo:opravit-ls1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_opravi-ls-3-hesla:opravit-ls3.
  $menu_links['management_opravi-ls-3-hesla:opravit-ls3'] = array(
    'menu_name' => 'management',
    'link_path' => 'opravit-ls3',
    'router_path' => 'opravit-ls3',
    'link_title' => 'Opraviť LS 3 hesla',
    'options' => array(
      'identifier' => 'management_opravi-ls-3-hesla:opravit-ls3',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_opravi-text-1-heslo:opravit-text1.
  $menu_links['management_opravi-text-1-heslo:opravit-text1'] = array(
    'menu_name' => 'management',
    'link_path' => 'opravit-text1',
    'router_path' => 'opravit-text1',
    'link_title' => 'Opraviť text 1 heslo',
    'options' => array(
      'identifier' => 'management_opravi-text-1-heslo:opravit-text1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_opravi-text-3-hesla:opravit-text3.
  $menu_links['management_opravi-text-3-hesla:opravit-text3'] = array(
    'menu_name' => 'management',
    'link_path' => 'opravit-text3',
    'router_path' => 'opravit-text3',
    'link_title' => 'Opraviť text 3 hesla',
    'options' => array(
      'identifier' => 'management_opravi-text-3-hesla:opravit-text3',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: management_prehad-g:vsetky-prehlad-g.
  $menu_links['management_prehad-g:vsetky-prehlad-g'] = array(
    'menu_name' => 'management',
    'link_path' => 'vsetky-prehlad-g',
    'router_path' => 'vsetky-prehlad-g',
    'link_title' => 'Prehľad (G)',
    'options' => array(
      'identifier' => 'management_prehad-g:vsetky-prehlad-g',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_prehad-ilustrcie:vsetky-ilustracie-prehlad.
  $menu_links['management_prehad-ilustrcie:vsetky-ilustracie-prehlad'] = array(
    'menu_name' => 'management',
    'link_path' => 'vsetky-ilustracie-prehlad',
    'router_path' => 'vsetky-ilustracie-prehlad',
    'link_title' => 'Prehľad ilustrácie',
    'options' => array(
      'identifier' => 'management_prehad-ilustrcie:vsetky-ilustracie-prehlad',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_prehad:vsetky-prehlad.
  $menu_links['management_prehad:vsetky-prehlad'] = array(
    'menu_name' => 'management',
    'link_path' => 'vsetky-prehlad',
    'router_path' => 'vsetky-prehlad',
    'link_title' => 'Prehľad',
    'options' => array(
      'identifier' => 'management_prehad:vsetky-prehlad',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
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
    'weight' => -50,
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
    'weight' => -49,
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
  // Exported menu link: management_zverejnen:zverejnene-na-webe.
  $menu_links['management_zverejnen:zverejnene-na-webe'] = array(
    'menu_name' => 'management',
    'link_path' => 'zverejnene-na-webe',
    'router_path' => 'zverejnene-na-webe',
    'link_title' => 'Zverejnené',
    'options' => array(
      'identifier' => 'management_zverejnen:zverejnene-na-webe',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_zverejni-na-web:zverejnit-na-web.
  $menu_links['management_zverejni-na-web:zverejnit-na-web'] = array(
    'menu_name' => 'management',
    'link_path' => 'zverejnit-na-web',
    'router_path' => 'zverejnit-na-web',
    'link_title' => 'Zverejniť na web',
    'options' => array(
      'identifier' => 'management_zverejni-na-web:zverejnit-na-web',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_:sync-test.
  $menu_links['navigation_:sync-test'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'sync-test',
    'router_path' => 'sync-test',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:sync-test',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_archivovan-knin:node/add/archivovane-knizne.
  $menu_links['navigation_archivovan-knin:node/add/archivovane-knizne'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/archivovane-knizne',
    'router_path' => 'node/add/archivovane-knizne',
    'link_title' => 'Archivované knižné',
    'options' => array(
      'identifier' => 'navigation_archivovan-knin:node/add/archivovane-knizne',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_vytvori:node/add',
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
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: navigation_forums:forum.
  $menu_links['navigation_forums:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'identifier' => 'navigation_forums:forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: navigation_oznam:node/add/oznam.
  $menu_links['navigation_oznam:node/add/oznam'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/oznam',
    'router_path' => 'node/add/oznam',
    'link_title' => 'Oznam',
    'options' => array(
      'identifier' => 'navigation_oznam:node/add/oznam',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  t('Archivované');
  t('Archivované knižné');
  t('Article');
  t('Basic page');
  t('Beliana');
  t('Compose tips');
  t('Diskusná téma');
  t('Export heslo GH');
  t('Export ilustrácia');
  t('Export vydané');
  t('Exportovať (sadzba)');
  t('Exportovať a tlačiť');
  t('Exportovať a tlačiť-multi');
  t('Forums');
  t('Glossary');
  t('Heslo');
  t('Home');
  t('Ilustrácia');
  t('Ilustrácie (G)');
  t('Ilustrácie (R)');
  t('Import');
  t('Importované heslo');
  t('Jazyková redakcia - importované');
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
  t('Odoslať na zverejnenie');
  t('Odoslať na zverejnenie (VR)');
  t('Odovzdané heslá');
  t('Opraviť LS 1 heslo');
  t('Opraviť LS 3 hesla');
  t('Opraviť importované');
  t('Opraviť text 1 heslo');
  t('Opraviť text 3 hesla');
  t('Oznam');
  t('Prehľad');
  t('Prehľad (G)');
  t('Prehľad ilustrácie');
  t('Priradiť autora');
  t('Recent posts');
  t('Redakčný systém');
  t('Rozpracované heslá');
  t('Search');
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
  t('Zverejnené');
  t('Zverejniť na web');

  return $menu_links;
}
