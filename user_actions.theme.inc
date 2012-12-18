<?php

function theme_user_actions($vars) {
  $html = '<div class="action-list action-list-no-js">';
  $html .= '<ul class="all-actions">';
  foreach ($vars['links'] as $link) {
    $link += array(
      'is_primary' => FALSE,
      'options' => array()
    );
    $html .= '<li';
    if ($link['is_primary']) {
      $html .= ' class="primary-action"';
    }
    $html .= '>';
    $html .= l(str_replace(' ', '&nbsp;', $link['title']), $link['path'], $link['options']);
    $html .= '</li>';
  }
  $html .= '</ul>';
  $html .= '</div>';
  drupal_add_js(drupal_get_path('module', 'user_actions') . '/user_actions.js');
  drupal_add_css(drupal_get_path('module', 'user_actions') . '/user_actions.css');
  return $html;
}