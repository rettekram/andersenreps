<?php
/**
 * @file
 * andersenreps_slideshow.features.inc
 */

/**
 * Implements hook_node_info().
 */
function andersenreps_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('Creates a collection of photos that can be placed in the sidebar of selected pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
