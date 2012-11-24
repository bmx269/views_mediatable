<?php

// http://drupalcontrib.org/api/drupal/contributions%21views%21views.api.php/function/hook_views_plugins/7

function views_mediatable_views_plugins() {
  $theme_path = drupal_get_path('module', 'views_mediatable') . '/theme';
  return array(
    'module' => 'views_mediatable',
    'style' => array(
      'new_table' => array(
        'path' => drupal_get_path('module', 'views_mediatable') . '/plugins',
        'parent' => 'table',
        'title' => t('Views MediaTable Table'),
        'theme' => 'views_mediatable_table_view',
        'theme path' => $theme_path,
        'help' => t('Adds responsive options to you Views table display.'),
        'handler' => 'views_plugin_style_mediatable_table',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}


