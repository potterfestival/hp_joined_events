<?php
/**
 * @file
 * oc_joined_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function oc_joined_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p2bsettings|node|inline_hold_tider|form';
  $field_group->group_name = 'group_p2bsettings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inline_hold_tider';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Place2book ',
    'weight' => '7',
    'children' => array(
      0 => 'field_sale_date',
      1 => 'field_place2book_tickets',
      2 => 'field_standard_billet_navn',
      3 => 'field_location',
      4 => 'field_event_category',
      5 => 'field_title_image_1200_px_',
      6 => 'field_target',
      7 => 'field_lead',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Place2book ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-p2bsettings field-group-fieldset js-hide',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_p2bsettings|node|inline_hold_tider|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place2book ');

  return $field_groups;
}
