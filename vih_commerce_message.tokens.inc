<?php

/**
 * @file
 * Token integration for the VIH. Taken from Commerce order backoffice module.
 */
/**
 * Implements hook_token_info().
 */
function vih_commerce_message_token_info() {
  $info['tokens']['commerce-order']['site-logo'] = array(
    'name' => t('Site logo'),
    'description' => t('The logo of the site.'),
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function vih_commerce_message_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  foreach ($tokens as $name => $original) {
    if ($name == 'site-logo') {
      $replacements[$original] = theme('image', array('path' => theme_get_setting('logo')));
    }
  }

  return $replacements;
}
