<?php
/**
 * @file
 * humanitarianresponse_cluster_obj.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_cluster_obj_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_cluster_obj_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_cluster_obj_node_info() {
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

