<?php
/**
 * @file
 * announcements.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function announcements_taxonomy_default_vocabularies() {
  return array(
    'topic' => array(
      'name' => 'Service Topic',
      'machine_name' => 'topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
