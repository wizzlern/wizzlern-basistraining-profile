<?php
/**
 * @file
 * event_specialist.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function event_specialist_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hoofdmenu',
    'description' => 'Het <em>Hoofdmenu</em> wordt vaak gebruikt om de hoofdonderdelen van de website aan te geven bijvoorbeeld in een menu bovenaan de pagina.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Het <em>Hoofdmenu</em> wordt vaak gebruikt om de hoofdonderdelen van de website aan te geven bijvoorbeeld in een menu bovenaan de pagina.');
  t('Hoofdmenu');


  return $menus;
}
