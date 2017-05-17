<?php
/**
 * @file
 * e3demo_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function e3demo_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function e3demo_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function e3demo_events_image_default_styles() {
  $styles = array();

  // Exported image style: event_listings.
  $styles['event_listings'] = array(
    'label' => 'Event Listings',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_event.
  $styles['featured_event'] = array(
    'label' => 'Featured Event',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
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
function e3demo_events_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
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
