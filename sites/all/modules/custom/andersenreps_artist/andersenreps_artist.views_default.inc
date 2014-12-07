<?php
/**
 * @file
 * andersenreps_artist.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function andersenreps_artist_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'artist_roster';
  $view->description = 'Listing and sorting displays for artists and staff members.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile Rosters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Artist Roster';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_artist_photo']['id'] = 'field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['table'] = 'field_data_field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['field'] = 'field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['label'] = '';
  $handler->display->display_options['fields']['field_artist_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artist_photo']['settings'] = array(
    'image_style' => 'artist_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_artist_subtitle']['id'] = 'field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['table'] = 'field_data_field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['field'] = 'field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_artist_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Website link */
  $handler->display->display_options['fields']['field_artist_website_link']['id'] = 'field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['table'] = 'field_data_field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['field'] = 'field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['label'] = '';
  $handler->display->display_options['fields']['field_artist_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_website_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read Bio';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'artist' => 'artist',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_artist_photo']['id'] = 'field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['table'] = 'field_data_field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['field'] = 'field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['label'] = '';
  $handler->display->display_options['fields']['field_artist_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artist_photo']['settings'] = array(
    'image_style' => 'artist_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_artist_subtitle']['id'] = 'field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['table'] = 'field_data_field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['field'] = 'field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_artist_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Website link */
  $handler->display->display_options['fields']['field_artist_website_link']['id'] = 'field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['table'] = 'field_data_field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['field'] = 'field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['label'] = '';
  $handler->display->display_options['fields']['field_artist_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_website_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read Bio';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'artist_roster:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Artist pane */
  $handler = $view->new_display('panel_pane', 'Artist pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_artist_photo']['id'] = 'field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['table'] = 'field_data_field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['field'] = 'field_artist_photo';
  $handler->display->display_options['fields']['field_artist_photo']['label'] = '';
  $handler->display->display_options['fields']['field_artist_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artist_photo']['settings'] = array(
    'image_style' => 'artist_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_artist_subtitle']['id'] = 'field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['table'] = 'field_data_field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['field'] = 'field_artist_subtitle';
  $handler->display->display_options['fields']['field_artist_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_artist_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Website link */
  $handler->display->display_options['fields']['field_artist_website_link']['id'] = 'field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['table'] = 'field_data_field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['field'] = 'field_artist_website_link';
  $handler->display->display_options['fields']['field_artist_website_link']['label'] = '';
  $handler->display->display_options['fields']['field_artist_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_website_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read Bio';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'artist_roster:panel_pane_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Sorting pane for Artists */
  $handler = $view->new_display('panel_pane', 'Sorting pane for Artists', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder Artists';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_artist_photo' => 'field_artist_photo',
    'title' => 'title',
    'field_artist_subtitle' => 'field_artist_subtitle',
    'field_artist_website_link' => 'field_artist_website_link',
    'view_node' => 'view_node',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_artist_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artist_subtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artist_website_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Drag each artist up or down to reorder artist roster.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Staff pane */
  $handler = $view->new_display('panel_pane', 'Staff pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Our team of dedicated professionals will strive to make your event an unconditional success.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_staff_photo']['id'] = 'field_staff_photo';
  $handler->display->display_options['fields']['field_staff_photo']['table'] = 'field_data_field_staff_photo';
  $handler->display->display_options['fields']['field_staff_photo']['field'] = 'field_staff_photo';
  $handler->display->display_options['fields']['field_staff_photo']['label'] = '';
  $handler->display->display_options['fields']['field_staff_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_photo']['settings'] = array(
    'image_style' => 'artist_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Job titles */
  $handler->display->display_options['fields']['field_staff_job_titles']['id'] = 'field_staff_job_titles';
  $handler->display->display_options['fields']['field_staff_job_titles']['table'] = 'field_data_field_staff_job_titles';
  $handler->display->display_options['fields']['field_staff_job_titles']['field'] = 'field_staff_job_titles';
  $handler->display->display_options['fields']['field_staff_job_titles']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_job_titles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_staff_job_titles']['multi_type'] = 'ul';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read Bio';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'artist_roster:panel_pane_4';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'staff_member' => 'staff_member',
  );

  /* Display: Sorting pane for Staff */
  $handler = $view->new_display('panel_pane', 'Sorting pane for Staff', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder Staff Members';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_artist_photo' => 'field_artist_photo',
    'title' => 'title',
    'field_artist_subtitle' => 'field_artist_subtitle',
    'field_artist_website_link' => 'field_artist_website_link',
    'view_node' => 'view_node',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_artist_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artist_subtitle' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artist_website_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Drag each staff member up or down to reorder list.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'staff_member' => 'staff_member',
  );
  $export['artist_roster'] = $view;

  $view = new view();
  $view->name = 'slideshow';
  $view->description = 'Displays a slideshow node in a block with the jquery.cycle plugin.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_sideshow_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_sideshow_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slideshow images */
  $handler->display->display_options['fields']['field_sideshow_image']['id'] = 'field_sideshow_image';
  $handler->display->display_options['fields']['field_sideshow_image']['table'] = 'field_data_field_sideshow_image';
  $handler->display->display_options['fields']['field_sideshow_image']['field'] = 'field_sideshow_image';
  $handler->display->display_options['fields']['field_sideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_sideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sideshow_image']['settings'] = array(
    'image_style' => 'slideshow_block',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sideshow_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sideshow_image']['delta_offset'] = '0';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'artist' => 'artist',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slideshow'] = $view;

  return $export;
}
