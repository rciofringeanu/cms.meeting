<?php
/**
 * @file
 * meeting.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function meeting_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'cop_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'COP Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['cop_meetings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Entity Reference'),
  );
  $export['cop_meetings'] = $view;

  $view = new view;
  $view->name = 'meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meetings';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_instrument' => 'field_meeting_instrument',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_type' => 'field_meeting_type',
    'field_meeting_status' => 'field_meeting_status',
    'field_meeting_country' => 'field_meeting_country',
    'field_meeting_city' => 'field_meeting_city',
  );
  $handler->display->display_options['style_options']['default'] = 'field_meeting_start';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = 1;
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, All',
  );
  /* Relationship: Content: Type (field_meeting_type) */
  $handler->display->display_options['relationships']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['relationships']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['relationships']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['relationships']['field_meeting_type_tid']['required'] = 0;
  /* Relationship: Content: Status (field_meeting_status) */
  $handler->display->display_options['relationships']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['required'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['id'] = 'field_meeting_country_target_id';
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['table'] = 'field_data_field_meeting_country';
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['field'] = 'field_meeting_country_target_id';
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_meeting_start']['id'] = 'field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['table'] = 'field_data_field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['field'] = 'field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['label'] = 'Start';
  $handler->display->display_options['fields']['field_meeting_start']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meeting_start']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_start']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_start']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_start']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_meeting_start']['field_api_classes'] = 0;
  /* Field: Content: Instrument */
  $handler->display->display_options['fields']['field_meeting_instrument']['id'] = 'field_meeting_instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['table'] = 'field_data_field_meeting_instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['field'] = 'field_meeting_instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['label'] = 'CMS Instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meeting_instrument']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_instrument']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_instrument']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_meeting_instrument']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meeting_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meeting_type']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meeting_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_meeting_status']['field_api_classes'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_meeting_country']['id'] = 'field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['table'] = 'field_data_field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['field'] = 'field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_meeting_country']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_meeting_city']['id'] = 'field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['table'] = 'field_data_field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['field'] = 'field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meeting_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_city']['field_api_classes'] = 0;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_meeting_type_tid';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Type';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'field_meeting_status_tid';
  $handler->display->display_options['sorts']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name_1']['expose']['label'] = 'Status';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_meeting_country_target_id';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Country';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Instrument (field_meeting_instrument) */
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['id'] = 'field_meeting_instrument_target_id';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['table'] = 'field_data_field_meeting_instrument';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['field'] = 'field_meeting_instrument_target_id';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['expose']['operator_id'] = 'field_meeting_instrument_target_id_op';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['expose']['operator'] = 'field_meeting_instrument_target_id_op';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['expose']['identifier'] = 'field_meeting_instrument_target_id';
  $handler->display->display_options['filters']['field_meeting_instrument_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Status (field_meeting_status) */
  $handler->display->display_options['filters']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator_id'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['identifier'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_meeting_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_meeting_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_status_tid']['vocabulary'] = 'meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_meeting_status_tid']['error_message'] = 1;
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_meeting_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_meeting_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'meeting/listing';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'meeting_export');
  $translatables['meetings'] = array(
    t('Master'),
    t('Meetings'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term from field_meeting_type'),
    t('term from field_meeting_status'),
    t('Content entity referenced from field_meeting_country'),
    t('Title'),
    t('Start'),
    t('CMS Instrument'),
    t('Type'),
    t('Status'),
    t('Country'),
    t('City'),
    t('Page'),
    t('Data export'),
  );
  $export['meetings'] = $view;

  return $export;
}
