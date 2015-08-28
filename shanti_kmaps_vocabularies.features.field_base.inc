<?php
/**
 * @file
 * shanti_kmaps_vocabularies.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function shanti_kmaps_vocabularies_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sameas_kmapid'
  $field_bases['field_sameas_kmapid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sameas_kmapid',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
