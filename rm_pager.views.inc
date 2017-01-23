<?php
/**
 * @file
 * Views Pager plugin definition
 */

/**
 * Implements hook_views_plugins().
 */
/*
function views_litepager_views_plugins() {
  $plugins = array(
    'pager' => array(
      'lite' => array(
        'title' => t('Paged output, lite pager'),
        'help' => t('Use the lite pager output.'),
        'handler' => 'views_litepager_plugin_pager_lite',
        'help topic' => 'pager-lite',
        'uses options' => TRUE,
        'parent' => 'full',
      ),
    ),
  );

  return $plugins;
}*/

/**
 * Implements hook_views_plugins().
 */
function rm_pager_views_plugins(){
$path = drupal_get_path('module', 'views_rmpager.views');
  $plugins = array(
    'pager' => array(
      'rmpager_test' => array(
        'title' => t('Views pager Reese Test'),
        'handler' => 'views_rmpager_plugin_pager',

        'parent' => 'full',
        'uses options' => TRUE,
        'help' => t('help test.'),

//        'path' => "$path/includes/views/plugins",
//        'help topic' => 'pager-lite',

      ),
    ),
  );

  return $plugins;
}
