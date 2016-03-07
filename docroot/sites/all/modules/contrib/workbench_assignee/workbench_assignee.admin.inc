<?php
/**
 * @file
 * Administrative forms for Workbench assignee Module.
 */

/**
 * Form for administering the assignee.
 *
 * Administrators can use this form to add, update, delete emails.
 *
 * @param array $form
 *   The form array
 *
 * @param array $form_state
 *   The form_state array
 *
 * @return form
 *   Returns the form array
 */
function workbench_assignee_admin_form() {
  $taxonomies = taxonomy_get_vocabularies();
  $options = array(0 => '- None -');
  foreach($taxonomies as $key => $value){
    $options[$value->machine_name] = $value->name;
  }

  $form['workbench_assignee_taxonomy'] = array(
    '#type' => 'select',
    '#title' => t('Departments taxonomy'),
    '#options' => $options,
    '#description' => t('Select which taxonomy should be responsable for the assignee departments, users should have a term from this taxonomy to determine their department'),
    '#multiple' => FALSE,
    '#default_value' => variable_get('workbench_assignee_taxonomy',0)
  );
  
  if(!module_exists('workbench_email')){
    $form['workbench_assignee_hide_email'] = array(
      '#type' => 'checkbox',
      '#title' => t('Override workbench email field ?'),
      '#description' => t('Hide the workbench email feild, and overide it by the assignee field'),
      "#default_value" => variable_get('workbench_assignee_hide_email',0)
    );
  }

  return  system_settings_form($form);
}


