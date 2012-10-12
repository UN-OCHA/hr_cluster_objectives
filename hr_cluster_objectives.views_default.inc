<?php
/**
 * @file
 * hr_cluster_objectives.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_cluster_objectives_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'cluster_objectives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cluster Objectives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cluster Objectives';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_obj_desc']['id'] = 'field_obj_desc';
  $handler->display->display_options['fields']['field_obj_desc']['table'] = 'field_data_field_obj_desc';
  $handler->display->display_options['fields']['field_obj_desc']['field'] = 'field_obj_desc';
  $handler->display->display_options['fields']['field_obj_desc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_obj_desc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_obj_desc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_obj_desc']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cluster_objectives' => 'cluster_objectives',
  );
  /* Filter criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['filters']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator_id'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['identifier'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cluster_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cluster_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cluster_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_cluster_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'crf/cluster-objectives';
  $export['cluster_objectives'] = $view;

  return $export;
}

