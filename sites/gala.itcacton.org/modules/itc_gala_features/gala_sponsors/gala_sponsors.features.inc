<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function gala_sponsors_imagecache_default_presets() {
  $items = array(
    'sponsor_150' => array(
      'presetname' => 'sponsor_150',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '150',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'sponsor_500' => array(
      'presetname' => 'sponsor_500',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '500',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function gala_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'module' => 'features',
      'description' => t('the companies/people who have donated money to the cause and are paying for advertising space'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function gala_sponsors_views_api() {
  return array(
    'api' => '2',
  );
}
