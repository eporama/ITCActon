<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function gala_sponsors_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:sponsors
  $menu_links['primary-links:sponsors'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'sponsors',
    'router_path' => 'Sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => 'Event Sponsors',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sponsors');


  return $menu_links;
}
