<?php
/**
 * @file
 * andersenreps_artist.features.inc
 */

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
