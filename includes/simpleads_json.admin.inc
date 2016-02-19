<?php

/**
 * @file
 * Administration SimpleAds JSON.
 */

/**
 * Provides a form for admin configuration page.
 * @return type array mixed
 */
function simpleads_json_admin_config() { 
  return system_settings_form(array(
    'simpleads_json_key' => array(
      '#type' => 'textfield',
      '#title' => t('SimpleAds JSON access key'),
      '#description' => t('Access key for accessing SimpelAds JSON information'),
      '#default_value' => variable_get('simpleads_json_key', ''),
      '#required' => TRUE,
    ),
  ));
}