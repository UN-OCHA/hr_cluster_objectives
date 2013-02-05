<?php
/**
 * @file
 * hr_cluster_objectives.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function hr_cluster_objectives_field_default_fields() {
  $fields = array();

  // Exported field: 'node-cluster_objectives-field_cluster'.
  $fields['node-cluster_objectives-field_cluster'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cluster',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'clusters',
            'parent' => '0',
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => '',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'cluster_objectives',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'diff_custom' => 0,
            'diff_custom_settings' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cluster',
      'label' => 'Cluster',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-cluster_objectives-field_obj_desc'.
  $fields['node-cluster_objectives-field_obj_desc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_obj_desc',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'cluster_objectives',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'diff_custom' => 0,
            'diff_custom_settings' => array(),
          ),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_obj_desc',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cluster');
  t('Description');

  return $fields;
}
