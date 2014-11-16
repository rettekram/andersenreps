<?php
/**
 * @file
 * andersenreps_artist.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function andersenreps_artist_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function andersenreps_artist_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function andersenreps_artist_image_default_styles() {
  $styles = array();

  // Exported image style: artist_thumbnail.
  $styles['artist_thumbnail'] = array(
    'name' => 'artist_thumbnail',
    'label' => 'Artist thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 150,
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
function andersenreps_artist_node_info() {
  $items = array(
    'artist' => array(
      'name' => t('Artist'),
      'base' => 'node_content',
      'description' => t('Adds an <em>artist</em> page to the site that automatically appears on the roster list.'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
