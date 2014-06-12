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