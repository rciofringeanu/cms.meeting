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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $export['cop_meetings'] = $view;

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
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
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
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
  /* Relationship: Content: Status (field_meeting_status) */
  $handler->display->display_options['relationships']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['id'] = 'field_meeting_country_target_id';
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['table'] = 'field_data_field_meeting_country';
  $handler->display->display_options['relationships']['field_meeting_country_target_id']['field'] = 'field_meeting_country_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_meeting_start']['id'] = 'field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['table'] = 'field_data_field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['field'] = 'field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['label'] = 'Start';
  $handler->display->display_options['fields']['field_meeting_start']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Instrument */
  $handler->display->display_options['fields']['field_meeting_instrument']['id'] = 'field_meeting_instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['table'] = 'field_data_field_meeting_instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['field'] = 'field_meeting_instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['label'] = 'CMS Instrument';
  $handler->display->display_options['fields']['field_meeting_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_meeting_country']['id'] = 'field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['table'] = 'field_data_field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['field'] = 'field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_meeting_city']['id'] = 'field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['table'] = 'field_data_field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['field'] = 'field_meeting_city';
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
  /* Filter criterion: Content: Status (field_meeting_status) */
  $handler->display->display_options['filters']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator_id'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['identifier'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_status_tid']['vocabulary'] = 'meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage/meeting/listing';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'meeting_export');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'meeting/export';
  $export['meetings'] = $view;

  return $export;
}
