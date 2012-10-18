<?php
/**
 * @file
 * hr_cluster_objectives.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_cluster_objectives_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_cluster_objectives_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hr_cluster_objectives_node_info() {
  $items = array(
    'cluster_objectives' => array(
      'name' => t('Cluster Objectives'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cluster Objective'),
      'help' => '',
    ),
  );
  return $items;
}
