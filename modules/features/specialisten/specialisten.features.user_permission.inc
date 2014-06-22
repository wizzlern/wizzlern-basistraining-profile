<?php
/**
 * @file
 * specialisten.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function specialisten_user_default_permissions() {
  $permissions = array();

  // Exported permission: create bio content.
  $permissions['create bio content'] = array(
    'name' => 'create bio content',
    'roles' => array(
      'specialist' => 'specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any bio content.
  $permissions['delete any bio content'] = array(
    'name' => 'delete any bio content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own bio content.
  $permissions['delete own bio content'] = array(
    'name' => 'delete own bio content',
    'roles' => array(
      'specialist' => 'specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any bio content.
  $permissions['edit any bio content'] = array(
    'name' => 'edit any bio content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own bio content.
  $permissions['edit own bio content'] = array(
    'name' => 'edit own bio content',
    'roles' => array(
      'specialist' => 'specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
