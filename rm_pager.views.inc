<?php
/**
 * @file
 * Views Pager plugin definition
 */

/**
 * Implements hook_views_plugins().
 */
function rm_pager_views_plugins(){
$path = drupal_get_path('module', 'views_rmpager.views');
  $plugins = array(
    'pager' => array(
      'rm_pager_test' => array(
        'title' => t('Views pager Reese Test'),
        'handler' => 'views_rmpager_plugin_pager',
        'parent' => 'full',
        'uses options' => TRUE,
        'help' => t('help test.'),
      ),
    ),
  );

  return $plugins;
}
