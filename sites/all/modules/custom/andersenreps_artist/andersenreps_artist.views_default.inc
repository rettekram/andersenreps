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
  $view->description = 'A listing of artists.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Artist Roster';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
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

  /* Display: Sorting pane */
  $handler = $view->new_display('panel_pane', 'Sorting pane', 'panel_pane_2');
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
  $export['artist_roster'] = $view;

  return $export;
}
