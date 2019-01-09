<?php
/**
 * @file
 * oc_joined_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oc_joined_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__inline_hold_tider';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_inline_hold_tider';
  $strongarm->value = '0';
  $export['language_content_type_inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_inline_hold_tider';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_inline_hold_tider';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_inline_hold_tider';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_inline_hold_tider';
  $strongarm->value = '1';
  $export['node_preview_inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_inline_hold_tider';
  $strongarm->value = 1;
  $export['node_submitted_inline_hold_tider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_hp_lokationer_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_hp_lokationer_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_m_lgruppe_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_m_lgruppe_pattern'] = $strongarm;

  return $export;
}
