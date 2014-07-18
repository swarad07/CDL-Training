<?php
/**
 * @file
 * cdl_slideshow.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cdl_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A slide in a slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
