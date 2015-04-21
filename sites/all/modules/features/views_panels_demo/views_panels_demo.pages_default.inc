<?php
/**
 * @file
 * views_panels_demo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function views_panels_demo_default_page_manager_handlers() {
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
    'title' => 'Basic Article',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Category Term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_category-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Author',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Term from node',
        'keyword' => 'term',
        'name' => 'term_from_node',
        'vid' => '2',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      4 => array(
        'identifier' => 'Tags from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'tags' => 'tags',
          'category' => 0,
        ),
        'concatenator' => '+',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '44a08bf9-5dbf-4def-9099-7621a3baf5d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d4e27f4c-276b-42aa-82e9-ea580b103176';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4e27f4c-276b-42aa-82e9-ea580b103176';
    $display->content['new-d4e27f4c-276b-42aa-82e9-ea580b103176'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-d4e27f4c-276b-42aa-82e9-ea580b103176';
    $pane = new stdClass();
    $pane->pid = 'new-f4396587-9c17-4430-b1d3-7c939b0b02cb';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f4396587-9c17-4430-b1d3-7c939b0b02cb';
    $display->content['new-f4396587-9c17-4430-b1d3-7c939b0b02cb'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-f4396587-9c17-4430-b1d3-7c939b0b02cb';
    $pane = new stdClass();
    $pane->pid = 'new-ed169769-6494-44f8-b3cf-c3d11af1416e';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ed169769-6494-44f8-b3cf-c3d11af1416e';
    $display->content['new-ed169769-6494-44f8-b3cf-c3d11af1416e'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-ed169769-6494-44f8-b3cf-c3d11af1416e';
    $pane = new stdClass();
    $pane->pid = 'new-33d1a679-ed6c-4a05-8775-89ed8a909984';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_articles-author_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_schema:uid-node-user_1',
        1 => 'relationship_entity_from_field:field_category-node-taxonomy_term_1',
        2 => 'argument_entity_id:node_1',
        3 => 'relationship_terms_from_node_1',
      ),
      'arguments' => array(
        'null' => '%node:field_tags',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '33d1a679-ed6c-4a05-8775-89ed8a909984';
    $display->content['new-33d1a679-ed6c-4a05-8775-89ed8a909984'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-33d1a679-ed6c-4a05-8775-89ed8a909984';
    $pane = new stdClass();
    $pane->pid = 'new-4e72efd8-0b16-46fe-ba51-b9a7c9ac4428';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_terms_from_node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4e72efd8-0b16-46fe-ba51-b9a7c9ac4428';
    $display->content['new-4e72efd8-0b16-46fe-ba51-b9a7c9ac4428'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-4e72efd8-0b16-46fe-ba51-b9a7c9ac4428';
    $pane = new stdClass();
    $pane->pid = 'new-12fb1e9c-eff0-4fbb-b73c-0363b6b146c4';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
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
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'h1',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12fb1e9c-eff0-4fbb-b73c-0363b6b146c4';
    $display->content['new-12fb1e9c-eff0-4fbb-b73c-0363b6b146c4'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-12fb1e9c-eff0-4fbb-b73c-0363b6b146c4';
    $pane = new stdClass();
    $pane->pid = 'new-b2c6c621-be62-4130-9a9e-d8e67ee01a5d';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_articles-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_schema:uid-node-user_1',
        1 => 'relationship_entity_from_field:field_category-node-taxonomy_term_1',
        2 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b2c6c621-be62-4130-9a9e-d8e67ee01a5d';
    $display->content['new-b2c6c621-be62-4130-9a9e-d8e67ee01a5d'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-b2c6c621-be62-4130-9a9e-d8e67ee01a5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Show Page',
    'no_blocks' => 1,
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
              'show' => 'show',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '57e57f0b-21d6-40c6-9893-05eaf375e1f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89230c9f-5980-4b28-84d8-5c39d3e61c05';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '89230c9f-5980-4b28-84d8-5c39d3e61c05';
    $display->content['new-89230c9f-5980-4b28-84d8-5c39d3e61c05'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-89230c9f-5980-4b28-84d8-5c39d3e61c05';
    $pane = new stdClass();
    $pane->pid = 'new-5140053f-0aab-4cc5-81e4-d5acb918c0c8';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_reporters-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => 'Reporters',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5140053f-0aab-4cc5-81e4-d5acb918c0c8';
    $display->content['new-5140053f-0aab-4cc5-81e4-d5acb918c0c8'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-5140053f-0aab-4cc5-81e4-d5acb918c0c8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Category',
    'no_blocks' => 1,
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              2 => '2',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9466b869-e3ac-43ae-9428-f4a44e959020';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef6f7723-2eee-49df-8b31-ce2522a7c82d';
    $pane->panel = 'two_50_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_term_and_or_author-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'offset' => '0',
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef6f7723-2eee-49df-8b31-ce2522a7c82d';
    $display->content['new-ef6f7723-2eee-49df-8b31-ce2522a7c82d'] = $pane;
    $display->panels['two_50_first'][0] = 'new-ef6f7723-2eee-49df-8b31-ce2522a7c82d';
    $pane = new stdClass();
    $pane->pid = 'new-acd67211-92e5-4735-8192-0bc32eec1029';
    $pane->panel = 'two_50_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_term_and_or_author-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'offset' => '1',
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acd67211-92e5-4735-8192-0bc32eec1029';
    $display->content['new-acd67211-92e5-4735-8192-0bc32eec1029'] = $pane;
    $display->panels['two_50_first'][1] = 'new-acd67211-92e5-4735-8192-0bc32eec1029';
    $pane = new stdClass();
    $pane->pid = 'new-bec4d91a-72ff-4160-93ec-08da74c80261';
    $pane->panel = 'two_50_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'count_author_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h1',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bec4d91a-72ff-4160-93ec-08da74c80261';
    $display->content['new-bec4d91a-72ff-4160-93ec-08da74c80261'] = $pane;
    $display->panels['two_50_second'][0] = 'new-bec4d91a-72ff-4160-93ec-08da74c80261';
    $pane = new stdClass();
    $pane->pid = 'new-236e1cc4-be64-4dfb-83aa-fa494e22d8a9';
    $pane->panel = 'two_50_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'flexslider_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '236e1cc4-be64-4dfb-83aa-fa494e22d8a9';
    $display->content['new-236e1cc4-be64-4dfb-83aa-fa494e22d8a9'] = $pane;
    $display->panels['two_50_top'][0] = 'new-236e1cc4-be64-4dfb-83aa-fa494e22d8a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Writer Profile',
    'no_blocks' => 1,
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
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 5,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c766bc0b-41a3-4f50-9eb7-3d28de2690d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06786637-9945-425d-9800-695e7c11ed91';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'writer_profile-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06786637-9945-425d-9800-695e7c11ed91';
    $display->content['new-06786637-9945-425d-9800-695e7c11ed91'] = $pane;
    $display->panels['one_main'][0] = 'new-06786637-9945-425d-9800-695e7c11ed91';
    $pane = new stdClass();
    $pane->pid = 'new-a9f84bcd-4653-46c8-83fb-f8e0351e43d3';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'articles_by_term_and_or_author-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'offset' => '0',
      'context' => array(
        0 => 'argument_entity_id:user_1',
        1 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => 'Latest',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a9f84bcd-4653-46c8-83fb-f8e0351e43d3';
    $display->content['new-a9f84bcd-4653-46c8-83fb-f8e0351e43d3'] = $pane;
    $display->panels['one_main'][1] = 'new-a9f84bcd-4653-46c8-83fb-f8e0351e43d3';
    $pane = new stdClass();
    $pane->pid = 'new-33566424-54f8-41b1-93df-8cf61acfeddd';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'author_watching-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '33566424-54f8-41b1-93df-8cf61acfeddd';
    $display->content['new-33566424-54f8-41b1-93df-8cf61acfeddd'] = $pane;
    $display->panels['one_main'][2] = 'new-33566424-54f8-41b1-93df-8cf61acfeddd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function views_panels_demo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles_for_show_and_author';
  $page->task = 'page';
  $page->admin_title = 'Articles for Show and Author';
  $page->admin_description = '';
  $page->path = 'show/%node/by/%user';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Show NID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_for_show_and_author_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'articles_for_show_and_author';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
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
              'show' => 'show',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'be17ba52-1209-4016-b257-99ecc55c5b60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2e53d1b-32bc-4ab1-aadb-571cea9df0a7';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2e53d1b-32bc-4ab1-aadb-571cea9df0a7';
    $display->content['new-c2e53d1b-32bc-4ab1-aadb-571cea9df0a7'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-c2e53d1b-32bc-4ab1-aadb-571cea9df0a7';
    $pane = new stdClass();
    $pane->pid = 'new-f6659d48-6c13-4060-b068-6bf8fe39f69b';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h1',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => '[user:url]',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6659d48-6c13-4060-b068-6bf8fe39f69b';
    $display->content['new-f6659d48-6c13-4060-b068-6bf8fe39f69b'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-f6659d48-6c13-4060-b068-6bf8fe39f69b';
    $pane = new stdClass();
    $pane->pid = 'new-b52be7f8-63fe-4310-9952-73b4f20aa3aa';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_reporters-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b52be7f8-63fe-4310-9952-73b4f20aa3aa';
    $display->content['new-b52be7f8-63fe-4310-9952-73b4f20aa3aa'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-b52be7f8-63fe-4310-9952-73b4f20aa3aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles_for_show_and_author'] = $page;

  return $pages;

}
