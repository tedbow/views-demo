<?php
/**
 * @file
 * npr_feed_importers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function npr_feed_importers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function npr_feed_importers_node_info() {
  $items = array(
    'npr_feed' => array(
      'name' => t('NPR Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'npr_show_feed' => array(
      'name' => t('NPR Show Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'npr_user_importer' => array(
      'name' => t('NPR User Importer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
