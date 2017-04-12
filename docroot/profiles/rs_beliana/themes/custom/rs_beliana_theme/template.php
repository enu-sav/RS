<?php

/**
 * @file
 * Template file for RS Beliana theme.
 */

/**
 * Implements hook_preprocess_node().
 *
 * @inheritdoc
 */
function rs_beliana_theme_preprocess_node(&$args) {
  if ($args['view_mode'] === 'export') {
    $node = &$args['node'];
    if ($node->type === 'ilustracia') {
      $no_render = FALSE;
      if (empty($node->field_obrazok_na_zverejnenie_)) {
        $no_render = TRUE;
      }
      $args['no_render'] = $no_render;
    }
  }
}

/**
* Add line breaks to field
*/
function rs_beliana_theme_preprocess_field(&$vars) {
  if ($vars['element']['#field_type'] == 'text_long') {
    $field_name = $vars['element']['#field_name'];
    foreach ($vars['items'] as $key => &$item) {
      if ($vars['element']['#object']->{$field_name}[LANGUAGE_NONE][$key]['format'] == NULL) {
        $item['#markup'] = nl2br($item['#markup']);
      }
    }
  }
}

function rs_beliana_theme_preprocess_views_view_fields(&$vars) {
  $view = $vars['view'];
  if ($view->name == 'export') {
    // Loop through the fields for this view.
    $previous_inline = FALSE;
    // Ensure it's at least an empty array.
    $vars['fields'] = array();
    foreach ($view->field as $id => $field) {
      // Render this even if set to exclude so it can be used elsewhere.
      $field_output = $view->style_plugin->get_field($view->row_index, $id);
      $field_output = preg_replace('/a/', 'a', $field_output);
      $empty = $field->is_value_empty($field_output, $field->options['empty_zero']);
      if (empty($field->options['exclude']) && (!$empty || (empty($field->options['hide_empty']) && empty($vars['options']['hide_empty'])))) {
        $object = new stdClass();
        $object->handler = &$view->field[$id];
        $object->inline = !empty($vars['options']['inline'][$id]);

        $object->element_type = $object->handler->element_type(TRUE, !$vars['options']['default_field_elements'], $object->inline);
        if ($object->element_type) {
          $class = '';
          if ($object->handler->options['element_default_classes']) {
            $class = 'field-content';
          }

          if ($classes = $object->handler->element_classes($view->row_index)) {
            if ($class) {
              $class .= ' ';
            }
            $class .= $classes;
          }

          $pre = '<' . $object->element_type;
          if ($class) {
            $pre .= ' class="' . $class . '"';
          }
          $field_output = $pre . '>' . $field_output . '</' . $object->element_type . '>';
        }

        // Protect ourselves somewhat for backward compatibility. This will
        // prevent old templates from producing invalid HTML when no element
        // type is selected.
        if (empty($object->element_type)) {
          $object->element_type = 'span';
        }

        $object->content = $field_output;
        if (isset($view->field[$id]->field_alias) && isset($vars['row']->{$view->field[$id]->field_alias})) {
          $object->raw = $vars['row']->{$view->field[$id]->field_alias};
        }
        else {
          // Make sure it exists to reduce NOTICE.
          $object->raw = NULL;
        }

        if (!empty($vars['options']['separator']) && $previous_inline && $object->inline && $object->content) {
          $object->separator = filter_xss_admin($vars['options']['separator']);
        }

        $object->class = drupal_clean_css_identifier($id);

        $previous_inline = $object->inline;
        $object->inline_html = $object->handler->element_wrapper_type(TRUE, TRUE);
        if ($object->inline_html === '' && $vars['options']['default_field_elements']) {
          $object->inline_html = $object->inline ? 'span' : 'div';
        }

        // Set up the wrapper HTML.
        $object->wrapper_prefix = '';
        $object->wrapper_suffix = '';

        if ($object->inline_html) {
          $class = '';
          if ($object->handler->options['element_default_classes']) {
            $class = "views-field views-field-" . $object->class;
          }

          if ($classes = $object->handler->element_wrapper_classes($view->row_index)) {
            if ($class) {
              $class .= ' ';
            }
            $class .= $classes;
          }

          $object->wrapper_prefix = '<' . $object->inline_html;
          if ($class) {
            $object->wrapper_prefix .= ' class="' . $class . '"';
          }
          $object->wrapper_prefix .= '>';
          $object->wrapper_suffix = '</' . $object->inline_html . '>';
        }

        // Set up the label for the value and the HTML to make it easier
        // on the template.
        $object->label = check_plain($view->field[$id]->label());
        $object->label_html = '';
        if ($object->label) {
          $object->label_html .= $object->label;
          if ($object->handler->options['element_label_colon']) {
            $object->label_html .= ': ';
          }

          $object->element_label_type = $object->handler->element_label_type(TRUE, !$vars['options']['default_field_elements']);
          if ($object->element_label_type) {
            $class = '';
            if ($object->handler->options['element_default_classes']) {
              $class = 'views-label views-label-' . $object->class;
            }

            $element_label_class = $object->handler->element_label_classes($view->row_index);
            if ($element_label_class) {
              if ($class) {
                $class .= ' ';
              }

              $class .= $element_label_class;
            }

            $pre = '<' . $object->element_label_type;
            if ($class) {
              $pre .= ' class="' . $class . '"';
            }
            $pre .= '>';

            $object->label_html = $pre . $object->label_html . '</' . $object->element_label_type . '>';
          }
        }

        $vars['fields'][$id] = $object;
      }
    }
  }
}
