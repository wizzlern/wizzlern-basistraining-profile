<?php
/**
 * @file
 * event_specialist.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_specialist_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_archief';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evenementenarchief';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evenementenarchief';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'reset';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Evenement';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Specialisme */
  $handler->display->display_options['fields']['field__specialisme_term']['id'] = 'field__specialisme_term';
  $handler->display->display_options['fields']['field__specialisme_term']['table'] = 'field_data_field__specialisme_term';
  $handler->display->display_options['fields']['field__specialisme_term']['field'] = 'field__specialisme_term';
  $handler->display->display_options['fields']['field__specialisme_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field__specialisme_term']['delta_offset'] = '0';
  /* Veld: Inhoud: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filtercriterium: Inhoud: Archief (field_event_archief) */
  $handler->display->display_options['filters']['field_event_archief_value']['id'] = 'field_event_archief_value';
  $handler->display->display_options['filters']['field_event_archief_value']['table'] = 'field_data_field_event_archief';
  $handler->display->display_options['filters']['field_event_archief_value']['field'] = 'field_event_archief_value';
  $handler->display->display_options['filters']['field_event_archief_value']['value'] = array(
    1 => '1',
  );
  /* Filtercriterium: Inhoud: Specialisme (field__specialisme_term) */
  $handler->display->display_options['filters']['field__specialisme_term_tid']['id'] = 'field__specialisme_term_tid';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['table'] = 'field_data_field__specialisme_term';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['field'] = 'field__specialisme_term_tid';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field__specialisme_term_tid']['expose']['operator_id'] = 'field__specialisme_term_tid_op';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['expose']['label'] = 'Specialisme';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['expose']['operator'] = 'field__specialisme_term_tid_op';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['expose']['identifier'] = 'field__specialisme_term_tid';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field__specialisme_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field__specialisme_term_tid']['vocabulary'] = 'specialisme';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'evenement/archief';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Archief';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['event_archief'] = array(
    t('Master'),
    t('Evenementenarchief'),
    t('meer'),
    t('zoek'),
    t('reset'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Evenement'),
    t('Specialisme'),
    t('Datum'),
    t('Page'),
  );
  $export['event_archief'] = $view;

  $view = new view();
  $view->name = 'event_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evenement-blok';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evenementen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Voet: Custom: Lees meer */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['ui_name'] = 'Custom: Lees meer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/evenement" class=read-more">Meer informatie</a>';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['event_overview'] = array(
    t('Master'),
    t('Evenementen'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('<a href="/evenement" class=read-more">Meer informatie</a>'),
    t('Block'),
  );
  $export['event_overview'] = $view;

  $view = new view();
  $view->name = 'event_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evenementen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evenementen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Hidden: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Hidden: Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Hidden: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Hidden: Titel';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Hidden: Specialisme */
  $handler->display->display_options['fields']['field__specialisme_term']['id'] = 'field__specialisme_term';
  $handler->display->display_options['fields']['field__specialisme_term']['table'] = 'field_data_field__specialisme_term';
  $handler->display->display_options['fields']['field__specialisme_term']['field'] = 'field__specialisme_term';
  $handler->display->display_options['fields']['field__specialisme_term']['ui_name'] = 'Hidden: Specialisme';
  $handler->display->display_options['fields']['field__specialisme_term']['label'] = '';
  $handler->display->display_options['fields']['field__specialisme_term']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field__specialisme_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__specialisme_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field__specialisme_term']['delta_offset'] = '0';
  /* Veld: Inhoud: Afbeelding */
  $handler->display->display_options['fields']['field_event_img']['id'] = 'field_event_img';
  $handler->display->display_options['fields']['field_event_img']['table'] = 'field_data_field_event_img';
  $handler->display->display_options['fields']['field_event_img']['field'] = 'field_event_img';
  $handler->display->display_options['fields']['field_event_img']['label'] = '';
  $handler->display->display_options['fields']['field_event_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_img']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Veld: Custom: Titel */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Titel';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] ([field__specialisme_term])';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Datum */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Wanneer?';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Teaser */
  $handler->display->display_options['fields']['field__teaser']['id'] = 'field__teaser';
  $handler->display->display_options['fields']['field__teaser']['table'] = 'field_data_field__teaser';
  $handler->display->display_options['fields']['field__teaser']['field'] = 'field__teaser';
  $handler->display->display_options['fields']['field__teaser']['label'] = '';
  $handler->display->display_options['fields']['field__teaser']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field__teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field__teaser']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lees meer';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filtercriterium: Inhoud: Archief (field_event_archief) */
  $handler->display->display_options['filters']['field_event_archief_value']['id'] = 'field_event_archief_value';
  $handler->display->display_options['filters']['field_event_archief_value']['table'] = 'field_data_field_event_archief';
  $handler->display->display_options['filters']['field_event_archief_value']['field'] = 'field_event_archief_value';
  $handler->display->display_options['filters']['field_event_archief_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'evenement';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Evenementen';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['event_page'] = array(
    t('Master'),
    t('Evenementen'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('[title] ([field__specialisme_term])'),
    t('Wanneer?'),
    t('Lees meer'),
    t('Page'),
  );
  $export['event_page'] = $view;

  return $export;
}
