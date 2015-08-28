<?php
/**
 * @file
 * shanti_kmaps_vocabularies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function shanti_kmaps_vocabularies_taxonomy_default_vocabularies() {
  return array(
    'kmaps_places' => array(
      'name' => 'KMaps Places',
      'machine_name' => 'kmaps_places',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'kmaps_subjects' => array(
      'name' => 'KMaps Subjects',
      'machine_name' => 'kmaps_subjects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
