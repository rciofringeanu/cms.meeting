<?php
/**
 * @file
 * cms_meeting.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cms_meeting_views_default_views() {
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
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['cop_meetings'] = $view;

  $view = new view();
  $view->name = 'meeting_documents_list_reorder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting Documents List Reorder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Documents Reorder';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_document_type' => 'field_document_type',
    'field_document_publish_date' => 'field_document_publish_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['id'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['field'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['required'] = TRUE;
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'meeting_documents_list_reorder:m_d_reorder';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type (field_document_type) */
  $handler->display->display_options['arguments']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['arguments']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['arguments']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['arguments']['field_document_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_document_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_document_type_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_document_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_document_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_document_type_tid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );

  /* Display: Reorder */
  $handler = $view->new_display('page', 'Reorder', 'm_d_reorder');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'meeting-documents-reorder/%/%/%';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'm_d_list');
  $handler->display->display_options['path'] = 'meeting-documents-list/%/%';
  $translatables['meeting_documents_list_reorder'] = array(
    t('Master'),
    t('Meeting Documents Reorder'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content referencing Content from field_meeting_document'),
    t('term from field_document_type'),
    t('Title'),
    t('Nid'),
    t('Publish date'),
    t('All'),
    t('%1'),
    t('Reorder'),
    t('Content'),
    t('List'),
  );
  $export['meeting_documents_list_reorder'] = $view;

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
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
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
