<?php
/**
 * @file
 * roc_main_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function roc_main_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-explor-by.
  $menus['menu-explor-by'] = array(
    'menu_name' => 'menu-explor-by',
    'title' => 'Explore By',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Explore By');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
