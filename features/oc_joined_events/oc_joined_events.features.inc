<?php
/**
 * @file
 * oc_joined_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oc_joined_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function oc_joined_events_node_info() {
  $items = array(
    'inline_hold_tider' => array(
      'name' => t('Inline hold tider'),
      'base' => 'node_content',
      'description' => t('Håndtere hold og andre tider til events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
