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

  // Exported menu: menu-explor-by.
  $menus['menu-explor-by'] = array(
    'menu_name' => 'menu-explor-by',
    'title' => 'Explore By',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Explore By');

  return $menus;
}
