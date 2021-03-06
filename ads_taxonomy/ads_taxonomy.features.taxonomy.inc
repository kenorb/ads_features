<?php
/**
 * @file
 * ads_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ads_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Categories',
      'machine_name' => 'categories',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => '',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'locations' => array(
      'name' => 'Locations',
      'machine_name' => 'locations',
      'description' => NULL,
      'hierarchy' => 1,
      'module' => '',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'places' => array(
      'name' => 'Places',
      'machine_name' => 'places',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => '',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
