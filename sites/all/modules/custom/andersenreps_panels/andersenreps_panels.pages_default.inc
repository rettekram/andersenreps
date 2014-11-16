<?php
/**
 * @file
 * andersenreps_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function andersenreps_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Webform',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56afadf3-8325-42d7-8d80-24957919409f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a088b6f-dfd9-499e-95a8-6b970c5daf95';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a088b6f-dfd9-499e-95a8-6b970c5daf95';
    $display->content['new-5a088b6f-dfd9-499e-95a8-6b970c5daf95'] = $pane;
    $display->panels['middle'][0] = 'new-5a088b6f-dfd9-499e-95a8-6b970c5daf95';
    $pane = new stdClass();
    $pane->pid = 'new-41eed7cf-73a2-4d76-8c4e-3c4d75b4fb49';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41eed7cf-73a2-4d76-8c4e-3c4d75b4fb49';
    $display->content['new-41eed7cf-73a2-4d76-8c4e-3c4d75b4fb49'] = $pane;
    $display->panels['middle'][1] = 'new-41eed7cf-73a2-4d76-8c4e-3c4d75b4fb49';
    $pane = new stdClass();
    $pane->pid = 'new-fe056083-0333-4bc6-adb0-c5f38c8fb976';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_webform_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe056083-0333-4bc6-adb0-c5f38c8fb976';
    $display->content['new-fe056083-0333-4bc6-adb0-c5f38c8fb976'] = $pane;
    $display->panels['middle'][2] = 'new-fe056083-0333-4bc6-adb0-c5f38c8fb976';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5a088b6f-dfd9-499e-95a8-6b970c5daf95';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
