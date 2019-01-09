<?php
/**
 * @file
 * oc_joined_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function oc_joined_events_taxonomy_default_vocabularies() {
  return array(
    'm_lgruppe' => array(
      'name' => 'Målgruppe',
      'machine_name' => 'm_lgruppe',
      'description' => 'Events målgruppe',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
