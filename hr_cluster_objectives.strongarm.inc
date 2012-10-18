<?php
/**
 * @file
 * hr_cluster_objectives.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_cluster_objectives_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_cluster_objectives';
  $strongarm->value = 1;
  $export['autosave_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cluster_objectives';
  $strongarm->value = 0;
  $export['comment_anonymous_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cluster_objectives';
  $strongarm->value = '2';
  $export['comment_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cluster_objectives';
  $strongarm->value = 1;
  $export['comment_default_mode_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cluster_objectives';
  $strongarm->value = '50';
  $export['comment_default_per_page_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cluster_objectives';
  $strongarm->value = 1;
  $export['comment_form_location_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cluster_objectives';
  $strongarm->value = '1';
  $export['comment_preview_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cluster_objectives';
  $strongarm->value = 1;
  $export['comment_subject_field_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cluster_objectives';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cluster_objectives';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cluster_objectives';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cluster_objectives';
  $strongarm->value = '0';
  $export['node_preview_cluster_objectives'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cluster_objectives';
  $strongarm->value = 1;
  $export['node_submitted_cluster_objectives'] = $strongarm;

  return $export;
}
