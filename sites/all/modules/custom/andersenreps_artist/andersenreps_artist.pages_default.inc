<?php
/**
 * @file
 * andersenreps_artist.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function andersenreps_artist_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Roster Page',
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
        1 => array(
          'name' => 'entity_field_value:node:page:field_display_artist_roster',
          'settings' => array(
            'field_display_artist_roster' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_display_artist_roster_value' => '1',
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
  $display->title = '%node:title';
  $display->uuid = 'fa38c9f7-9118-4461-b1a3-566b992d1c4b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6cf2cce8-0b55-4321-9e5c-c550718f970d';
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
    $pane->uuid = '6cf2cce8-0b55-4321-9e5c-c550718f970d';
    $display->content['new-6cf2cce8-0b55-4321-9e5c-c550718f970d'] = $pane;
    $display->panels['middle'][0] = 'new-6cf2cce8-0b55-4321-9e5c-c550718f970d';
    $pane = new stdClass();
    $pane->pid = 'new-a0d65bc4-bcac-4847-93f0-889afff58772';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'artist_roster-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a0d65bc4-bcac-4847-93f0-889afff58772';
    $display->content['new-a0d65bc4-bcac-4847-93f0-889afff58772'] = $pane;
    $display->panels['middle'][1] = 'new-a0d65bc4-bcac-4847-93f0-889afff58772';
    $pane = new stdClass();
    $pane->pid = 'new-226d1eb4-e93e-4199-a042-89e2d052e52d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'artist_roster-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'access draggableviews',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '226d1eb4-e93e-4199-a042-89e2d052e52d';
    $display->content['new-226d1eb4-e93e-4199-a042-89e2d052e52d'] = $pane;
    $display->panels['middle'][2] = 'new-226d1eb4-e93e-4199-a042-89e2d052e52d';
    $pane = new stdClass();
    $pane->pid = 'new-c9f6a1b5-1492-42d1-8582-2a658745f618';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_additional_content';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c9f6a1b5-1492-42d1-8582-2a658745f618';
    $display->content['new-c9f6a1b5-1492-42d1-8582-2a658745f618'] = $pane;
    $display->panels['middle'][3] = 'new-c9f6a1b5-1492-42d1-8582-2a658745f618';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6cf2cce8-0b55-4321-9e5c-c550718f970d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
