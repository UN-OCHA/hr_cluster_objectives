<?php
/**
 * @file
 * hr_cluster_objectives.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_cluster_objectives_user_default_permissions() {
  $permissions = array();

  // Exported permission: create cluster_objectives content.
  $permissions['create cluster_objectives content'] = array(
    'name' => 'create cluster_objectives content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any cluster_objectives content.
  $permissions['delete any cluster_objectives content'] = array(
    'name' => 'delete any cluster_objectives content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own cluster_objectives content.
  $permissions['delete own cluster_objectives content'] = array(
    'name' => 'delete own cluster_objectives content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any cluster_objectives content.
  $permissions['edit any cluster_objectives content'] = array(
    'name' => 'edit any cluster_objectives content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own cluster_objectives content.
  $permissions['edit own cluster_objectives content'] = array(
    'name' => 'edit own cluster_objectives content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished cluster_objectives content.
  $permissions['view any unpublished cluster_objectives content'] = array(
    'name' => 'view any unpublished cluster_objectives content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
