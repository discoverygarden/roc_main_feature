<?php
/**
 * @file
 * roc_main_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function roc_main_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-explor-by_organization-name:browse/organization
  $menu_links['menu-explor-by_organization-name:browse/organization'] = array(
    'menu_name' => 'menu-explor-by',
    'link_path' => 'browse/organization',
    'router_path' => 'browse',
    'link_title' => 'Organization Name',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-explor-by_organization-name:browse/organization',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-explor-by_people:browse/people
  $menu_links['menu-explor-by_people:browse/people'] = array(
    'menu_name' => 'menu-explor-by',
    'link_path' => 'browse/people',
    'router_path' => 'browse',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-explor-by_people:browse/people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-explor-by_places:browse/place
  $menu_links['menu-explor-by_places:browse/place'] = array(
    'menu_name' => 'menu-explor-by',
    'link_path' => 'browse/place',
    'router_path' => 'browse',
    'link_title' => 'Places',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-explor-by_places:browse/place',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-explor-by_title:browse/title
  $menu_links['menu-explor-by_title:browse/title'] = array(
    'menu_name' => 'menu-explor-by',
    'link_path' => 'browse/title',
    'router_path' => 'browse',
    'link_title' => 'Title',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-explor-by_title:browse/title',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:node/1
  $menu_links['menu-footer-menu_creative-content-license:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Creative content license',
    'options' => array(
      'identifier' => 'menu-footer-menu_creative-content-license:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_login:user/login
  $menu_links['menu-footer-menu_login:user/login'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_logout:user/logout
  $menu_links['menu-footer-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_make-contact:node/4
  $menu_links['menu-footer-menu_make-contact:node/4'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Make contact',
    'options' => array(
      'identifier' => 'menu-footer-menu_make-contact:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_policies:node/10
  $menu_links['menu-footer-menu_policies:node/10'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(
      'identifier' => 'menu-footer-menu_policies:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_researchers:node/2
  $menu_links['menu-footer-menu_researchers:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Researchers',
    'options' => array(
      'identifier' => 'menu-footer-menu_researchers:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-header-menu_browse:islandora/object/islandora:root
  $menu_links['menu-header-menu_browse:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'display' => 'list',
      ),
      'identifier' => 'menu-header-menu_browse:islandora/object/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_organizations:browse/organization
  $menu_links['menu-header-menu_organizations:browse/organization'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'browse/organization',
    'router_path' => 'browse',
    'link_title' => 'Organizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_organizations:browse/organization',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_people:browse/people
  $menu_links['menu-header-menu_people:browse/people'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'browse/people',
    'router_path' => 'browse',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_people:browse/people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_places:browse/place
  $menu_links['menu-header-menu_places:browse/place'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'browse/place',
    'router_path' => 'browse',
    'link_title' => 'Places',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_places:browse/place',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_titles:browse/title
  $menu_links['menu-header-menu_titles:browse/title'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'browse/title',
    'router_path' => 'browse',
    'link_title' => 'Titles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_titles:browse/title',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_user-guide:node/15
  $menu_links['menu-header-menu_user-guide:node/15'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'User Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_user-guide:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse');
  t('Creative content license');
  t('Login');
  t('Logout');
  t('Make contact');
  t('Organization Name');
  t('Organizations');
  t('People');
  t('Places');
  t('Policies');
  t('Researchers');
  t('Title');
  t('Titles');
  t('User Guide');


  return $menu_links;
}
