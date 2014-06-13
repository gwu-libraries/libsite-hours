<?php

/**
 * @file
 * Provide the admin related functions for the Library Hours module
 */

 /**
 * Defines the Hours admin settings form // doesn't actually do anything yet
 */
function library_hours_admin_settings_form() {
  $form['library_org'] = array(
    '#type' => 'textfield',
    '#title' => t('Library Group or Org (e.g. SCRC, GRC, STG)'),
    '#default_value' => variable_get('library_org', t('SCRC')),
  );
  return system_settings_form($form);
}

/* more... */

function library_hours_menu() {
  $items = array();

  $items['admin/config/content/library_hours'] = array(
    'title' => 'Library Hours Configuration',
    'description' => 'Configuration for Library Hours module',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('library_hours_form'),
    'access arguments' => array('access administration pages'),
    'type' => MENU_NORMAL_ITEM,
  );

  return $items;
}


function library_hours_form($form, &$form_state) {
  $form['library_hours_orgs'] = array(
    '#type' => 'textfield',
    '#title' => t('Library orgs'),
    '#default_value' => variable_get('library_hours_orgs', 7),
    '#size' => 3,
    '#maxlength' => 3,
    '#description' => t('The number of orgs that need hours blocks.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}