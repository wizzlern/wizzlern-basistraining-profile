<?php
/**
 * @file
 * event_specialist.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function event_specialist_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:evenement
  $menu_links['main-menu:evenement'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'evenement',
    'router_path' => 'evenement',
    'link_title' => 'Evenementen',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 4,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Evenementen');


  return $menu_links;
}
