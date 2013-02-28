<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function gala_sponsors_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sponsor content
  $permissions['create sponsor content'] = array(
    'name' => 'create sponsor content',
    'roles' => array(
      '0' => 'auction manager',
    ),
  );

  // Exported permission: delete any sponsor content
  $permissions['delete any sponsor content'] = array(
    'name' => 'delete any sponsor content',
    'roles' => array(
      '0' => 'auction manager',
    ),
  );

  // Exported permission: delete own sponsor content
  $permissions['delete own sponsor content'] = array(
    'name' => 'delete own sponsor content',
    'roles' => array(),
  );

  // Exported permission: edit any sponsor content
  $permissions['edit any sponsor content'] = array(
    'name' => 'edit any sponsor content',
    'roles' => array(
      '0' => 'auction manager',
    ),
  );

  // Exported permission: edit field_adsize
  $permissions['edit field_adsize'] = array(
    'name' => 'edit field_adsize',
    'roles' => array(),
  );

  // Exported permission: edit field_logo_300
  $permissions['edit field_logo_300'] = array(
    'name' => 'edit field_logo_300',
    'roles' => array(),
  );

  // Exported permission: edit field_logo_500
  $permissions['edit field_logo_500'] = array(
    'name' => 'edit field_logo_500',
    'roles' => array(),
  );

  // Exported permission: edit field_url
  $permissions['edit field_url'] = array(
    'name' => 'edit field_url',
    'roles' => array(),
  );

  // Exported permission: edit own sponsor content
  $permissions['edit own sponsor content'] = array(
    'name' => 'edit own sponsor content',
    'roles' => array(),
  );

  // Exported permission: view field_adsize
  $permissions['view field_adsize'] = array(
    'name' => 'view field_adsize',
    'roles' => array(),
  );

  // Exported permission: view field_logo_300
  $permissions['view field_logo_300'] = array(
    'name' => 'view field_logo_300',
    'roles' => array(),
  );

  // Exported permission: view field_logo_500
  $permissions['view field_logo_500'] = array(
    'name' => 'view field_logo_500',
    'roles' => array(),
  );

  // Exported permission: view field_url
  $permissions['view field_url'] = array(
    'name' => 'view field_url',
    'roles' => array(),
  );

  // Exported permission: view imagecache sponsor_300
  $permissions['view imagecache sponsor_300'] = array(
    'name' => 'view imagecache sponsor_300',
    'roles' => array(),
  );

  // Exported permission: view imagecache sponsor_500
  $permissions['view imagecache sponsor_500'] = array(
    'name' => 'view imagecache sponsor_500',
    'roles' => array(),
  );

  return $permissions;
}
