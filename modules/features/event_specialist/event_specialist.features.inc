<?php
/**
 * @file
 * event_specialist.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function event_specialist_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function event_specialist_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function event_specialist_image_default_styles() {
  $styles = array();

  // Exported image style: event_normal.
  $styles['event_normal'] = array(
    'name' => 'event_normal',
    'effects' => array(
      4 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_small.
  $styles['event_small'] = array(
    'name' => 'event_small',
    'effects' => array(
      3 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function event_specialist_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evenement'),
      'base' => 'node_content',
      'description' => t('Evenementen en activiteiten door De Specialisten voor specialisten.'),
      'has_title' => '1',
      'title_label' => t('Evenement'),
      'help' => '',
    ),
  );
  return $items;
}
