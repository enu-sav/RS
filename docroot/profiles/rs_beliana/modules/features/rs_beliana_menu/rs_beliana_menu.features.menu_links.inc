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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
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
    'hidden' => 1,
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
    'link_title' => 'Heslo',
    'options' => array(
      'attributes' => array(
        'title' => 'Heslo bude vytvorené v stave "Navrhnuté". Po odsúhlasení správcom heslára sa stav zmení na "Zaradené" a redaktor ho môže priradiť autorovi na vypracovanie. ',
      ),
      'identifier' => 'navigation_heslo:node/add/heslo',
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
    'router_path' => 'node/add',
    'link_title' => 'Importované heslo',
    'options' => array(
      'attributes' => array(
        'title' => 'Knižne vydané heslo dielov 1 - 7. Importované z doc súborov, ktoré boli použité ako podklady na tlač',
      ),
      'identifier' => 'navigation_importovan-heslo:node/add/importovane-heslo',
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
  t('Import');
  t('Importované heslo');
  t('Messages');
  t('My Workbench');
  t('Recent posts');
  t('Redakčný systém');
  t('Správy');
  t('Tlačiť');
  t('Vyhľadať ilustrácie');
  t('Vytvoriť');

  return $menu_links;
}
