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
  // Translatables
  // Included for use with string extractors like potx.
  t('Login');
  t('Logout');
  t('Organization Name');
  t('Organizations');
  t('People');
  t('Places');
  t('Title');
  t('Titles');


  return $menu_links;
}
