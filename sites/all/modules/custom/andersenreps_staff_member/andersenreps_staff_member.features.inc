<?php
/**
 * @file
 * andersenreps_staff_member.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function andersenreps_staff_member_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function andersenreps_staff_member_node_info() {
  $items = array(
    'staff_member' => array(
      'name' => t('Staff member'),
      'base' => 'node_content',
      'description' => t('Includes a biography entry for <em>staff members</em> on team page.'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
