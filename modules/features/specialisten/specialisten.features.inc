<?php
/**
 * @file
 * specialisten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function specialisten_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function specialisten_image_default_styles() {
  $styles = array();

  // Exported image style: foto_specialist.
  $styles['foto_specialist'] = array(
    'name' => 'foto_specialist',
    'effects' => array(
      1 => array(
        'label' => 'Schalen en bijsnijden',
        'help' => 'Bij het schalen blijft de breedte-hoogte verhouding van de oorspronkelijke afbeelding behouden. Bij het bijsnijden wordt de langste zijde ingekort. Hiermee kunt u bijvoorbeeld vierkante miniaturen maken.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Verzadiging verminderen',
        'help' => 'De afbeelding wordt omgezet naar grijswaarden',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function specialisten_node_info() {
  $items = array(
    'bio' => array(
      'name' => t('Specialist'),
      'base' => 'node_content',
      'description' => t('De publieke bio van een specialist.'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
  );
  return $items;
}
