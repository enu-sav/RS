<?php

/**
 * Style plugin to render each item as a row in a table.
 *
 * @ingroup views_style_plugins
 */
class views_summarize_plugin_style_tablesummarized extends views_plugin_style_table {
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['#theme'] = 'views_summarize_plugin_style_tablesummarized';
    $columns = $this->sanitize_columns($this->options['columns']);
    foreach ($columns as $field => $column) {
      $safe = str_replace(array('][', '_', ' '), '-', $field);
      $id = 'edit-style-options-columns-' . $safe;
      $form['info'][$field]['summarize'] = array(
        '#type' => 'select',
        '#options' => views_summarize_get_handlers(),
        '#default_value' => !empty($this->options['info'][$field]['summarize']) ? $this->options['info'][$field]['summarize'] : 'none',
        '#dependency' => array($id => array($field)),
      );
    }
    $form['summary_only'] = array(
      '#title' => t('Display the summary row only'),
      '#description' => t('If checked only the summary row will be displayed,'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['summary_only']),
    );    
  }
}
