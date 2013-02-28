<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function gala_sponsors_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_logos
  $groups['sponsor-group_logos'] = array(
    'group_type' => 'standard',
    'type_name' => 'sponsor',
    'group_name' => 'group_logos',
    'label' => 'Logos',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_logo_300',
      '1' => 'field_logo_500',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Logos');

  return $groups;
}
