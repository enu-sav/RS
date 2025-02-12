<?php

/**
 * @file
 * Taxonomy Manager Admin.
 *
 * Contains all forms and saving function for the Taxonomy Manager.
 */

include_once DRUPAL_ROOT . "/modules/taxonomy/taxonomy.admin.inc";

/**
 * List of vocabularies, which link to Taxonomy Manager interface.
 */
function taxonomy_manager_voc_list() {
  $output = l(t('Add new vocabulary'), 'admin/structure/taxonomy/add/vocabulary') . ' | ';
  $output .= l(t('Edit vocabulary settings'), 'admin/structure/taxonomy') . '<br /><br />';

  $vocabularies = taxonomy_get_vocabularies();
  $voc_list = [];

  foreach ($vocabularies as $vocabulary) {
    $voc_list[] = l($vocabulary->name,
      'admin/structure/taxonomy_manager/voc/' . $vocabulary->machine_name,
      [
        'attributes' => [
          'title' => $vocabulary->description,
          'alt' => $vocabulary->description,
        ],
      ]
    );
  }
  if (!count($voc_list)) {
    $voc_list[] = t('No Vocabularies available');
  }
  $output .= theme('item_list', [
    'items' => $voc_list,
    'title' => t('Vocabularies'),
  ]);
  return $output;
}

/**
 * Defines forms for taxonomy manager interface.
 *
 * @param vocabulary $voc
 * @param $tid
 *   a term id, if not 0, displays term editing from for given tid on right side
 * @param $search_string
 *   a string to filter root level terms
 */
function taxonomy_manager_form($form, &$form_state, $voc, $tid = 0, $filter = NULL) {
  // Check for confirmation forms.
  if (isset($form_state['confirm_delete'])) {
    return taxonomy_manager_term_confirm_delete($form, $form_state, $voc->vid);
  }
  // By default use tid from term data form, except it is submitted from the load-tid helper and the tree needs to be refreshed.
  if (isset($form_state['values']['tid']) && !(isset($form_state['triggering_element']['#value']) && $form_state['triggering_element']['#value'] == "load term" && $form_state['values']['load-tid-refresh-tree'])) {
    $tid = $form_state['values']['tid'];
  }
  elseif (isset($form_state['triggering_element']['#value']) && $form_state['triggering_element']['#value'] == "load term" && $form_state['values']['load-tid-refresh-tree']) {
    $tid = $form_state['values']['load-tid'];
  }

  $module_path = drupal_get_path('module', 'taxonomy_manager') . '/';

  $form['#attached']['css'][] = $module_path . 'css/taxonomy_manager.css';
  $form['#attached']['js'][] = $module_path . 'js/hideForm.js';
  $form['#attached']['js'][] = $module_path . 'js/updateWeight.js';
  $form['#attached']['js'][] = $module_path . 'js/termData.js';

  $form['#attached']['js'][] = [
    'data' => ['termData' => ['url' => url("admin/structure/taxonomy_manager/termdata/edit/" . $voc->vid)]],
    'type' => 'setting',
  ];
  $form['#attached']['js'][] = [
    'data' => [
      'updateWeight' => [
        'up' => 'edit-weight-up',
        'down' => 'edit-weight-down',
        'url' => url('admin/structure/taxonomy_manager/weight/'),
        'disable_mouseover' => variable_get('taxonomy_manager_disable_mouseover', 0),
      ],
    ],
    'type' => 'setting',
  ];
  $form['#attached']['js'][] = [
    'data' => ['TMAjaxThrobber' => ['add' => TRUE]],
    'type' => 'setting',
  ];
  $form['#attached']['js'][] = [
    'data' => ['taxonomy_manager' => ['modulePath' => (url($module_path) == $module_path) ? $module_path : (base_path() . $module_path)]],
    'type' => 'setting',
  ];

  drupal_set_title(t("Taxonomy Manager - %voc_name", ["%voc_name" => $voc->name]), PASS_THROUGH);

  $form['voc'] = ['#type' => 'value', "#value" => $voc];

  // Helper forms for loading the term data form.
  // When a term link in the tree view gets clicked, the term id is written into the
  // load-tid textfield and aftwards the load-tid-submit button gets clicked, which
  // triggers the ajax system.
  $form['load-tid'] = [
    '#type' => 'textfield',
    '#prefix' => '<div class="taxonomy-manager-term-load-helper">',
  ];
  $form['load-tid-refresh-tree'] = [
    '#type' => 'checkbox',
  ];
  $form['load-tid-submit'] = [
    '#type' => 'submit',
    '#value' => 'load term',
    '#submit' => ['taxonomy_manager_load_tid_submit'],
    '#ajax' => [
      'callback' => 'taxonomy_manager_term_data_form_ajax_callback',
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => 'taxonomy-term-data-replace',
    ],
    '#suffix' => '</div>',
  ];

  taxonomy_manager_form_voc_jumper($form, $form_state);
  if (_taxonomy_manager_voc_is_empty($voc->vid)) {
    $text = t('No terms available');
    $form['text'] = [
      '#markup' => $text,
    ];
    taxonomy_manager_add_form($form, $voc, FALSE);
    return $form;
  }
  $form_state['cache'] = TRUE;

  $form['taxonomy']['#tree'] = TRUE;

  $form['taxonomy']['manager'] = [
    '#type' => 'fieldset',
    '#title' => check_plain($voc->name) . _taxonomy_manager_select_all_helpers_markup(),
    '#weight' => 10,
    '#tree' => TRUE,
  ];

  $form['taxonomy']['manager']['top'] = [
    '#markup' => '',
    '#prefix' => '<div class="taxonomy-manager-tree-top">',
    '#suffix' => '</div>',
  ];

  if (module_exists('i18n_taxonomy')) {
    if (i18n_taxonomy_vocabulary_mode($voc->vid, I18N_MODE_TRANSLATE)) {
      if ($tid) {
        $language = _taxonomy_manager_term_get_lang($tid);
      }
      else {
        $language = language_default()->language;
      }
      $form['taxonomy']['manager']['top']['language'] = [
        '#type' => 'select',
        '#title' => t('Language'),
        '#default_value' => $language,
        '#options' => [
          '' => t('All'),
          'no language' => t('no language'),
        ] + locale_language_list('name'),
        '#attributes' => ['class' => ['language-selector']],
      ];
    }
  }

  $form['taxonomy']['manager']['top']['size'] = [
    '#markup' => '<div class="taxonomy-manager-tree-size">' . theme("image", [
      'path' => $module_path . "images/grippie.png",
      'alt' => t("Resize tree"),
      'title' => t("Resize tree"),
      'attributes' => ['class' => "div-grippie"],
    ]) . '</div>',
  ];

  if (isset($form_state['values']['double_tree_values']['left_tree_expand_terms']) && count($form_state['values']['double_tree_values']['left_tree_expand_terms'])) {
    $tids_to_expand = $form_state['values']['double_tree_values']['left_tree_expand_terms'];
  }
  elseif (isset($form_state['values']['searched_terms']) && count($form_state['values']['searched_terms'])) {
    $tids_to_expand = $form_state['values']['searched_terms'];
  }
  else {
    $tids_to_expand = $tid ? [$tid] : [];
  }

  $form['taxonomy']['manager']['tree'] = [
    '#type' => 'taxonomy_manager_tree',
    '#vid' => $voc->vid,
    '#pager' => TRUE,
    '#search_string' => ($tid) ? NULL : $filter,
    '#language' => $language ?? '',
    '#terms_to_expand' => $tids_to_expand,
    '#terms_to_highlight' => $tids_to_expand,
  ];

  $form['toolbar'] = [
    '#type' => 'fieldset',
    '#title' => t('Toolbar'),
  ];

  $form['toolbar']['weight_up'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons']],
    '#value' => t('Up'),
    '#theme' => 'no_submit_button',
    '#prefix' => '<div id="taxonomy-manager-toolbar-buttons">',
  ];

  $form['toolbar']['weight-down'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons']],
    '#value' => t('Down'),
    '#theme' => 'no_submit_button',
  ];

  $form['toolbar']['wrapper'] = [
    '#type' => 'markup',
    '#markup' => '<div id="taxonomy-manager-toolbar-throbber"></div><div class="clear"></div>',
    '#weight' => 20,
    '#prefix' => '</div>',
  ];

  taxonomy_manager_add_form($form, $voc);

  taxonomy_manager_confirm_delete($form, $voc);

  taxonomy_manager_term_merge_form($form, $voc);

  taxonomy_manager_move_form($form, $voc);

  taxonomy_manager_export_form($form, $form_state, $voc);

  taxonomy_manager_double_tree_settings_form($form, $voc);

  taxonomy_manager_search_form($form, $voc);

  // A term clicked in tree-view and submitted through load-tid helper,
  // generate term data form.
  // Moved this code snippet to the bottom here to prevent needless
  // expanding of the tree for this tid.
  if (isset($form_state['values']['load-tid'])) {
    $tid = $form_state['values']['load-tid'];
  }
  // Something on the term data has been submitted, e.g. the 'add another item'
  // button.
  elseif (isset($form_state['term']) && is_object($form_state['term'])) {
    $tid = $form_state['term']->tid;
  }
  taxonomy_manager_term_data_form($form, $form_state, $tid, $voc->vid);

  return $form;
}

/**
 *
 */
function taxonomy_manager_double_tree_form($form, &$form_state, $voc1, $voc2, $tid = 0, $filter = NULL) {
  // Check for confirmation forms.
  if (isset($form_state['confirm_delete'])) {
    return taxonomy_manager_term_confirm_delete($form, $form_state, $voc1->vid, $voc2->vid);
  }
  $module_path = drupal_get_path('module', 'taxonomy_manager') . '/';

  $form = taxonomy_manager_form($form, $form_state, $voc1, $tid, $filter);

  $form['disable'] = [
    '#markup' => l(t('Disable Double Tree'), 'admin/structure/taxonomy_manager/voc/' . $voc1->machine_name),
    '#weight' => -100,
  ];

  $form['voc2'] = ['#type' => 'value', "#value" => $voc2];

  $form['taxonomy2'] = [
    '#tree' => TRUE,
  ];

  $form['taxonomy2']['manager'] = [
    '#type' => 'fieldset',
    '#title' => check_plain($voc2->name) . _taxonomy_manager_select_all_helpers_markup(),
    '#weight' => 10,
    '#tree' => TRUE,
  ];

  $form['taxonomy2']['manager']['top'] = [
    '#value' => '',
    '#prefix' => '<div class="taxonomy-manager-tree-top">',
    '#suffix' => '</div>',
  ];

  if (module_exists('i18n_taxonomy')) {
    if (i18n_taxonomy_vocabulary_mode($voc2->vid, I18N_MODE_TRANSLATE)) {
      if ($tid) {
        $language = _taxonomy_manager_term_get_lang($tid);
      }
      else {
        $language = language_default()->language;
      }
      $form['taxonomy2']['manager']['top']['language'] = [
        '#type' => 'select',
        '#title' => t('Language'),
        '#default_value' => $language,
        '#options' => [
          '' => t('All'),
          'no language' => t('no language'),
        ] + locale_language_list('name'),
        '#attributes' => ['class' => ['language-selector']],
      ];
    }
  }

  $form['taxonomy2']['manager']['top']['size'] = [
    '#markup' => '<div class="taxonomy-manager-tree-size">' . theme("image", [
      'path' => $module_path . "images/grippie.png",
      'alt' => t("Resize tree"),
      'title' => t("Resize tree"),
      'attributes' => ['class' => "div-grippie"],
    ]) . '</div>',
  ];

  if (isset($form_state['values']['double_tree_values']['right_tree_expand_terms']) && count($form_state['values']['double_tree_values']['right_tree_expand_terms'])) {
    $tids_to_expand = $form_state['values']['double_tree_values']['right_tree_expand_terms'];
  }
  else {
    $tids_to_expand = $tid ? [$tid] : [];
  }

  $form['taxonomy2']['manager']['tree'] = [
    '#type' => 'taxonomy_manager_tree',
    '#vid' => $voc2->vid,
    '#pager' => TRUE,
    '#search_string' => ($tid) ? NULL : $filter,
    '#language' => $language ?? '',
    // @todo check if term coming through ajax
    '#terms_to_expand' => $tids_to_expand,
    '#terms_to_highlight' => $tids_to_expand,
  ];

  $form['double-tree']['operations'] = [
    '#tree' => TRUE,
  ];

  $form['double-tree']['operations']['move_right'] = [
    '#type' => 'image_button',
    '#attributes' => ['title' => t('Move right')],
    '#src' => $module_path . "images/go-next.png",
    '#submit' => ['taxonomy_manager_double_tree_move_submit'],
    '#validate' => ['taxonomy_manager_double_tree_move_validate'],
    '#ajax' => [
      'callback' => 'taxonomy_manager_double_tree_ajax_callback',
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => 'taxonomy-manager',
      'progress' => ['type' => ''],
    ],
    '#weight' => 20,
    '#prefix' => '<div class="taxonomy-manager-double-tree-operations-buttons">',
    '#suffix' => '</div>',
  ];
  $form['double-tree']['operations']['move_left'] = [
    '#type' => 'image_button',
    '#attributes' => ['title' => t('Move left')],
    '#src' => $module_path . "images/go-previous.png",
    '#submit' => ['taxonomy_manager_double_tree_move_submit'],
    '#validate' => ['taxonomy_manager_double_tree_move_validate'],
    '#ajax' => [
      'callback' => 'taxonomy_manager_double_tree_ajax_callback',
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => 'taxonomy-manager',
      'progress' => ['type' => ''],
    ],
    '#weight' => 20,
    '#prefix' => '<div class="taxonomy-manager-double-tree-operations-buttons">',
    '#suffix' => '</div>',
  ];

  // Switch operations.
  if ($voc1->vid != $voc2->vid) {
    $form['double-tree']['operations']['move_right']['#attributes']['title'] = t('Switch selected terms and its children to the right voc');
    $form['double-tree']['operations']['move_right']['#submit'] = ['taxonomy_manager_double_tree_switch_submit'];
    $form['double-tree']['operations']['move_right']['#validate'] = ['taxonomy_manager_double_tree_switch_validate'];

    $form['double-tree']['operations']['move_left']['#attributes']['title'] = t('Switch selected terms and its children to the left voc');
    $form['double-tree']['operations']['move_left']['#submit'] = ['taxonomy_manager_double_tree_switch_submit'];
    $form['double-tree']['operations']['move_left']['#validate'] = ['taxonomy_manager_double_tree_switch_validate'];

    // Copy buttons.
    $form['double-tree']['operations']['copy_right'] = $form['double-tree']['operations']['move_right'];
    $form['double-tree']['operations']['copy_left'] = $form['double-tree']['operations']['move_left'];

    $form['double-tree']['operations']['copy_right']['#attributes']['title'] = t('Copy selected term names to the right voc.');
    $form['double-tree']['operations']['copy_right']['#src'] = $module_path . "images/copy-right.png";
    $form['double-tree']['operations']['copy_right']['#submit'] = ['taxonomy_manager_double_tree_copy_submit'];
    $form['double-tree']['operations']['copy_right']['#validate'] = ['taxonomy_manager_double_tree_copy_validate'];
    $form['double-tree']['operations']['copy_right']['#weight'] = 22;

    $form['double-tree']['operations']['copy_left']['#attributes']['title'] = t('Copy selected term names to the left voc.');
    $form['double-tree']['operations']['copy_left']['#src'] = $module_path . "images/copy-left.png";
    $form['double-tree']['operations']['copy_left']['#submit'] = ['taxonomy_manager_double_tree_copy_submit'];
    $form['double-tree']['operations']['copy_left']['#validate'] = ['taxonomy_manager_double_tree_copy_validate'];
    $form['double-tree']['operations']['copy_left']['#weight'] = 23;

  }
  elseif (module_exists('i18n_taxonomy') && i18n_taxonomy_vocabulary_mode($voc2->vid, I18N_MODE_TRANSLATE)) {
    $form['double-tree']['operations']['add_translation'] = $form['double-tree']['operations']['move_right'];
    $form['double-tree']['operations']['add_translation']['#attributes']['title'] = t('Add Translation.');
    $form['double-tree']['operations']['add_translation']['#src'] = $module_path . "images/connect.png";
    $form['double-tree']['operations']['add_translation']['#submit'] = ['taxonomy_manager_double_tree_add_translation_submit'];
    $form['double-tree']['operations']['add_translation']['#validate'] = ['taxonomy_manager_double_tree_add_translation_validate'];
  }

  return $form;
}

/**
 * Adds a voc jumper menu, if ctools is enabled.
 */
function taxonomy_manager_form_voc_jumper(&$form, $form_state) {
  if (module_exists('ctools')) {
    $options = [];
    foreach (taxonomy_vocabulary_get_names() as $voc) {
      $options[url('admin/structure/taxonomy_manager/voc/' . $voc->machine_name)] = $voc->name;
    }
    ctools_include('jump-menu');
    $settings = [
      'choose' => t('-- Switch vocabulary --'),
    ];
    $form = ctools_jump_menu($form, $form_state, $options, $settings);

    // Attach the JS in case we rebuild the form.
    $form['#attached']['js'][] = drupal_get_path('module', 'ctools') . '/js/jump-menu.js';
  }
}

/**
 * Form for searching terms.
 */
function taxonomy_manager_search_form(&$form, $voc) {
  $form['#attached']['js'][] = [
    'data' => [
      'hideForm' => [
        [
          'show_button' => 'edit-search-show',
          'hide_button' => 'edit-search-cancel',
          'div' => 'edit-search',
        ],
      ],
    ],
    'type' => 'setting',
  ];

  $form['toolbar']['search_show'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'search']],
    '#value' => t('Search'),
    '#theme' => 'no_submit_button',
  ];

  $search_description = t("You can search directly for existing terms.
      If your input doesn't match an existing term, it will be used for filtering root level terms (useful for non-hierarchical vocabularies).");

  $form['search'] = [
    '#type' => 'fieldset',
    '#title' => t('Search'),
    '#attributes' => ['style' => 'display:none;', 'id' => 'edit-search'],
    '#description' => $search_description,
    '#collapsed' => TRUE,
    '#tree' => TRUE,
  ];

  $form['search']['field'] = [
    '#type' => 'textfield',
    '#title' => t('Search String'),
    '#autocomplete_path' => 'taxonomy_manager/autocomplete/' . $voc->vid,
    // '#prefix' => '<div id="edit-find-field">',
    // '#suffix' => '</div>',
  ];

  $search_options = [
    // 'synonyms' => t('Include synonyms'), // @todo implement synonyms feature
    'subtrees' => t('Search under selected terms'),
  ];
  if (module_exists('i18n_taxonomy')) {
    if (i18n_taxonomy_vocabulary_mode($voc->vid, I18N_MODE_TRANSLATE)) {
      $search_options['language'] = t('Search within selected language');
    }
  }
  $form['search']['options'] = [
    '#type' => 'checkboxes',
    '#title' => t('Search options'),
    '#options' => $search_options,
  ];

  $form['search']['button'] = [
    '#type' => 'submit',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'search']],
    '#value' => t('Search'),
    // '#suffix' => '<div class="clear"></div>',
  ];

  $form['search']['cancel'] = [
    // '#type' => 'button',
    '#value' => t('Cancel'),
    '#theme' => 'no_submit_button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
  ];
}

/**
 * Confirmation form for deleting selected terms.
 */
function taxonomy_manager_confirm_delete(&$form, $voc) {
  $form['#attached']['js'][] = [
    'data' => [
      'hideForm' => [
        [
          'show_button' => 'edit-delete-confirm',
          'hide_button' => 'edit-delete-cancel',
          'div' => 'edit-delete',
        ],
      ],
    ],
    'type' => 'setting',
  ];

  $form['toolbar']['delete_confirm'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons delete']],
    '#value' => t('Delete'),
    '#theme' => 'no_submit_button',
  ];

  $form['delete'] = [
    '#type' => 'fieldset',
    '#attributes' => ['style' => 'display:none;', 'id' => 'edit-delete'],
    '#tree' => TRUE,
    '#title' => t('Confirmation'),
  ];

  $question = t('Are you sure you want to delete all selected terms?');
  $info = t('Remember all term specific data will be lost. This action cannot be undone.');

  $form['delete']['text'] = ['#value' => "<b>" . $question . "</b><br/>" . $info];

  $options = [
    'delete_orphans' => t('Delete children of selected terms, if there are any'),
  ];

  $form['delete']['options'] = [
    '#type' => 'checkboxes',
    '#title' => t('Options'),
    '#options' => $options,
  ];

  $form['delete']['delete'] = [
    '#type' => 'submit',
    '#value' => t('Delete'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'delete']],
    '#submit' => ['taxonomy_manager_form_delete_submit'],
    '#validate' => ['taxonomy_manager_form_delete_validate'],
  ];

  $form['delete']['cancel'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
    '#value' => t('Cancel'),
    '#theme' => 'no_submit_button',
  ];
}

/**
 * Form for adding terms.
 */
function taxonomy_manager_add_form(&$form, $voc, $hide_form = TRUE) {
  $attributes = [];
  if ($hide_form) {
    $form['#attached']['js'][] = [
      'data' => [
        'hideForm' => [
          [
            'show_button' => 'edit-add-show',
            'hide_button' => 'edit-add-cancel',
            'div' => 'edit-add',
          ],
        ],
      ],
      'type' => 'setting',
    ];
    $attributes = ['style' => 'display:none;', 'id' => 'edit-add'];
    $form['toolbar']['add_show'] = [
      // '#type' => 'button',
      '#attributes' => ['class' => 'taxonomy-manager-buttons add'],
      '#value' => t('Add'),
      '#theme' => 'no_submit_button',
    ];
  }

  $description = "";
  $description = t("If you have selected one or more terms in the tree view, the new terms are automatically children of those.");

  $form['add'] = [
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#attributes' => $attributes,
    '#title' => t('Add new terms'),
    '#description' => $description,
  ];

  $form['add']['mass_add'] = [
    '#type' => 'textarea',
    '#title' => t('Terms'),
    '#description' => t("One term per line. Child terms can be prefixed with a
        dash '-' (one dash per hierarchy level). Terms that should not become
        child terms and start with a dash need to be wrapped in double quotes.
        <br />Example:<br />
        animals<br />
        -canine<br />
        --dog<br />
        --wolf<br />
        -feline<br />
        --cat"),
    '#rows' => 10,
  ];

  // UUID import integrtion.
  if (module_exists('uuid')) {
    $form['add']['add_with_uuid'] = [
      '#type' => 'checkbox',
      '#title' => t('Import terms with uuid'),
      '#description' => t("You can add terms with uuid. Just add '|' separator after term name and uuid after separator.
        <br />Example:<br />
        animals|@uuid_1<br />
        -canine|@uuid_2<br />
        --dog|@uuid_3<br />
        --wolf|@uuid_4<br />
        -feline|@uuid_5<br />
        --cat|@uuid_6", [
          '@uuid_1' => '36b3caa9-6575-4276-6575-1cc14217b3d5',
          '@uuid_2' => '23c5cdc9-4276-87df-87df-1cc14217b3d6',
          '@uuid_3' => '09c5aba9-6575-4276-6575-1cc14217b3d7',
          '@uuid_4' => '45c5caa9-4276-87df-87df-1cc14217b3d8',
          '@uuid_5' => '39c5caa9-6575-4276-6575-1cc14217b3d9',
          '@uuid_6' => '30c5caa9-4276-87df-87df-1cc14217b3d0',
        ]),
    ];
  }

  $form['add']['add'] = [
    '#type' => 'submit',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'add']],
    '#value' => t('Add'),
    '#submit' => ['taxonomy_manager_form_add_submit'],
  ];
  $form['add']['cancel'] = [
    // '#type' => 'button',
    '#value' => t('Cancel'),
    '#theme' => 'no_submit_button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
  ];
}

/**
 * Form for the Term merge module.
 */
function taxonomy_manager_term_merge_form(&$form, $voc) {
  if (!module_exists('term_merge') || !user_access('merge terms')) {
    return;
  }
  $form['#attached']['js'][] = [
    'data' => [
      'hideForm' => [
        [
          'show_button' => 'edit-term-merge-show',
          'hide_button' => 'edit-term-merge-cancel',
          'div' => 'edit-term-merge',
        ],
      ],
    ],
    'type' => 'setting',
  ];

  $description = t("This operation is based on the Term merge module. Selected terms get merged into the given one. Optionally the selected terms can be retained, otherwise they will be deleted.");

  $form['toolbar']['term_merge_show'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons merge']],
    '#value' => t('Term merge'),
    '#theme' => 'no_submit_button',
  ];

  $form['term_merge'] = [
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#attributes' => ['style' => 'display:none;', 'id' => 'edit-term-merge'],
    '#title' => t('Merging of terms'),
    '#description' => $description,
  ];

  $form['term_merge']['dest_term'] = [
    '#type' => 'textfield',
    '#title' => t('Destination term'),
    '#description' => t("Enter a unique term name or a term id with 'term-id:[tid]'"),
    '#required' => FALSE,
    '#autocomplete_path' => 'taxonomy_manager/autocomplete/' . $voc->vid,
  ];

  $form['term_merge']['options'] = [
    '#type' => 'checkboxes',
    '#title' => t('Options'),
    '#options' => [
      'keep_merged' => t('Keep merged terms'),
    ],
  ];

  $form['term_merge']['submit'] = [
    '#type' => 'submit',
    '#value' => t('Merge'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'merge']],
    '#validate' => ['taxonomy_manager_form_term_merge_validate'],
    '#submit' => ['taxonomy_manager_form_term_merge_submit'],
  ];

  $form['term_merge']['cancel'] = [
    // '#type' => 'button',
    '#value' => t('Cancel'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
    '#theme' => 'no_submit_button',
  ];
}

/**
 * Form for moving terms in hierarchies.
 */
function taxonomy_manager_move_form(&$form, $voc) {
  $form['#attached']['js'][] = [
    'data' => [
      'hideForm' => [
        [
          'show_button' => 'edit-move-show',
          'hide_button' => 'edit-move-cancel',
          'div' => 'edit-move',
        ],
      ],
    ],
    'type' => 'setting',
  ];

  $description = t("You can change the parent of one or more selected terms.
      If you leave the autocomplete field empty, the term will be a root term.");

  $form['toolbar']['move_show'] = [
    // '#type' => 'button',
    '#value' => t('Move'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons move']],
    '#theme' => 'no_submit_button',
  ];
  $form['move'] = [
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#attributes' => ['style' => 'display:none;', 'id' => 'edit-move'],
    '#title' => t('Moving of terms'),
    '#description' => $description,
  ];

  $form['move']['parents'] = [
    '#type' => 'textfield',
    '#title' => t('Parent term(s)'),
    '#description' => t("Enter a unique term name or a term id with 'term-id:[tid]'. Separate multiple parent terms with commas."),
    '#required' => FALSE,
    '#autocomplete_path' => 'taxonomy_manager/autocomplete/' . $voc->vid,
  ];

  $options = [];
  $options['keep_old_parents'] = t('Keep old parents and add new ones (multi-parent). Otherwise old parents get replaced.');
  $form['move']['options'] = [
    '#type' => 'checkboxes',
    '#title' => t('Options'),
    '#options' => $options,
  ];

  $form['move']['submit'] = [
    '#type' => 'submit',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'move']],
    '#value' => t('Move'),
    '#validate' => ['taxonomy_manager_form_move_validate'],
    '#submit' => ['taxonomy_manager_form_move_submit'],
  ];

  $form['move']['cancel'] = [
    // '#type' => 'button',
    '#value' => t('Cancel'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
    '#theme' => 'no_submit_button',
  ];
}

/**
 * Form for exporting terms.
 */
function taxonomy_manager_export_form(&$form, &$form_state, $voc) {
  $form['#attached']['js'][] = [
    'data' => [
      'hideForm' => [
        [
          'show_button' => 'edit-export-show',
          'hide_button' => 'edit-export-cancel',
          'div' => 'edit-export',
        ],
      ],
    ],
    'type' => 'setting',
  ];

  $form['toolbar']['export_show'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons export']],
    '#value' => t('Export'),
    '#theme' => 'no_submit_button',
  ];
  $form['export'] = [
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#attributes' => ['style' => 'display:none;', 'id' => 'edit-export'],
    '#title' => t('Export'),
  ];

  $scope_options = [
    'whole_voc' => t('Whole Vocabulary'),
    'children' => t('Child terms of a selected term'),
    'root_terms' => t('Root level terms only'),
  ];
  $form['export']['scope'] = [
    '#type' => 'radios',
    '#title' => t('Terms to export'),
    '#options' => $scope_options,
    '#default_value' => 'whole_voc',
    '#prefix' => '<div id="taxonomy_manager_export_options">',
    '#suffix' => '</div>',
  ];
  $form['export']['depth'] = [
    '#type' => 'textfield',
    '#title' => t('Depth of tree'),
    '#description' => t('The number of levels of the tree to export. Leave empty to return all levels.'),
    '#size' => 10,
  ];

  // UUID export integration.
  if (module_exists('uuid')) {
    $form['export']['export_with_uuid'] = [
      '#type' => 'checkbox',
      '#title' => t('Export terms with uuid'),
    ];
  }

  $format_options = [
    'term_tree' => t('Term names with hierarchy'),
    'csv' => t('CSV'),
  ];
  $help_items[] = t('Term names with hierarchy: Only term names are exported (or term names with uuid separated by "|" if "Export terms with uuid" is checked). Child terms are prefixed with dashes. Uses the same format as for mass-import (Add button).');
  $help_items[] = t('CSV: The comma-separated-values export has following columns: voc id | term id | [term uuid] | term name | description | parent id 1 | ... | parent id n');
  $form['export']['format'] = [
    '#type' => 'radios',
    '#title' => t('Format'),
    '#options' => $format_options,
    '#default_value' => 'term_tree',
    '#description' => theme('item_list', [
      'items' => $help_items,
      'title' => t('Description of formats'),
    ]),
  ];

  // CSV options.
  $form['export']['csv']['delimiter'] = [
    '#type' => 'textfield',
    '#title' => t('Delimiter for CSV'),
    '#required' => FALSE,
    '#default_value' => ";",
    '#size' => 10,
    '#states' => [
      'visible' => [
        ':input[name="export[format]"]' => ['value' => 'csv'],
      ],
    ],
  ];

  $wrapper_id = 'taxonomy-manager-export-textarea';
  if (isset($form_state['values']['export']['data'])) {
    $form['export']['data'] = [
      '#type' => 'textarea',
      '#title' => t('Exported data'),
      '#value' => $form_state['values']['export']['data'],
      '#rows' => 8,
      '#prefix' => '<div id="' . $wrapper_id . '">',
      '#suffix' => '</div>',
    ];
  }

  $form['export']['submit'] = [
    '#prefix' => '<div id="' . $wrapper_id . '"></div>',
    '#type' => 'submit',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'export']],
    '#value' => t('Export now'),
    '#submit' => ['taxonomy_manager_export_form_submit'],
    '#ajax' => [
      'callback' => 'taxonomy_manager_export_ajax_callback',
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => $wrapper_id,
      'progress' => ['type' => ''],
    ],
  ];

  $form['export']['cancel'] = [
    // '#type' => 'button',
    '#value' => t('Cancel'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
    '#theme' => 'no_submit_button',
  ];
}

/**
 *
 */
function taxonomy_manager_double_tree_settings_form(&$form, $voc) {
  $form['#attached']['js'][] = [
    'data' => [
      'hideForm' => [
        [
          'show_button' => 'edit-double-tree-show',
          'hide_button' => 'edit-double-tree-settings-cancel',
          'div' => 'edit-double-tree-settings',
        ],
      ],
    ],
    'type' => 'setting',
  ];

  $form['toolbar']['double_tree_show'] = [
    // '#type' => 'button',
    '#attributes' => ['class' => ['taxonomy-manager-buttons double-tree']],
    '#value' => t('Double Tree'),
    '#theme' => 'no_submit_button',
  ];
  $form['double-tree-settings'] = [
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#attributes' => [
      'style' => 'display:none;',
      'id' => 'edit-double-tree-settings',
    ],
    '#title' => t('Double Tree Settings'),
    '#description' => t('Specify settings for second tree. Choose the same vocabulary if you want to move terms in the hierarchy or if you want to add new translations within a multilingual vocabulary. Choose a different vocabulary if you want to switch terms among these vocabularies.'),
  ];

  $options = [];
  $vocs = taxonomy_get_vocabularies();
  foreach ($vocs as $v) {
    $options[$v->machine_name] = $v->name;
  }
  $form['double-tree-settings']['voc2_machine_name'] = [
    '#type' => 'select',
    '#title' => t('Vocabulary for second tree'),
    '#options' => $options,
    '#default_value' => $voc->vid,
  ];

  $form['double-tree-settings']['submit'] = [
    '#type' => 'submit',
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'double-tree']],
    '#value' => t('Enable Double Tree'),
    '#submit' => ['taxonomy_manager_form_double_tree_submit'],
  ];
  if (arg(3) == "double-tree") {
    $form['double-tree-settings']['disable'] = [
      '#type' => 'submit',
      '#attributes' => [
        'class' => [
          'taxonomy-manager-buttons',
          'double-tree-disable',
        ],
      ],
      '#value' => t('Disable Double Tree'),
      '#submit' => ['taxonomy_manager_form_double_tree_disable_submit'],
    ];
  }
  $form['double-tree-settings']['cancel'] = [
    // '#type' => 'button',
    '#value' => t('Cancel'),
    '#attributes' => ['class' => ['taxonomy-manager-buttons', 'cancel']],
    '#theme' => 'no_submit_button',
  ];
}

/**
 *
 */
function taxonomy_manager_term_data_form(&$form, &$form_state, $tid, $vid1, $vid2 = 0) {
  $tid = $tid ?? 0;
  $module_path = drupal_get_path('module', 'taxonomy_manager') . '/';
  if ($tid) {
    $term = taxonomy_term_load($tid);

    // Prevent that title of the fieldset is too long.
    $title = check_plain($term->name);
    if (drupal_strlen($title) >= 33) {
      $title = drupal_substr($title, 0, 33) . "...";
    }
    $form['term_data'] = [
      '#type' => 'fieldset',
      '#title' => $title . " (" . $term->tid . ")",
    ];
    unset($form_state['term']);
    $form['term_data'] = taxonomy_form_term($form['term_data'], $form_state, $term);
    $form['term_data']['description']['#rows'] = 2;
    // Disable wysiwyg editor as long as #356480 (lazy-loading) is not resolved.
    $form['term_data']['description']['#wysiwyg'] = FALSE;

    $form['term_data']['weight'] = $form['term_data']['relations']['weight'];
    unset($form['term_data']['relations']);
    unset($form['term_data']['actions']);

    $form['term_data']['parents'] = _taxonomy_manager_form_term_data_parents($term);
    $form['term_data']['parents']['#weight'] = '52';

    $form['term_data']['close'] = [
      '#markup' => '<div id="term-data-close"><span title="' . t('Close') . '">&nbsp;&nbsp;&nbsp;&nbsp;</span></div>',
      '#weight' => -100,
    ];
    $link_img = theme("image", [
      'path' => $module_path . "images/link-small.png",
      'alt' => t("link to term page"),
    ]);
    $form['term_data']['link'] = [
      '#markup' => '<br />' . l($link_img . '&nbsp;' . t('Go to the term page'), 'taxonomy/term/' . $term->tid, [
        'attributes' => [
          'rel' => 'tag',
          'title' => strip_tags($term->description),
          'target' => '_blank',
        ],
        'html' => TRUE,
      ]),
      '#weight' => 56,
    ];

    $form['term_data']['vid'] = ['#type' => 'hidden', '#value' => $term->vid];
    $form['term_data']['tid'] = ['#type' => 'hidden', '#value' => $tid];

    $form['term_data']['save'] = [
      '#type' => 'submit',
      '#value' => t('Save changes'),
      '#submit' => ['taxonomy_manager_term_data_form_submit'],
      '#validate' => ['taxonomy_form_term_validate'],
      '#attributes' => ['class' => ['taxonomy-manager-buttons', 'save']],
      '#ajax' => [
        'callback' => 'taxonomy_manager_term_data_form_ajax_callback',
        'method' => 'replaceWith',
        'event' => 'click',
        'wrapper' => 'taxonomy-term-data-replace',
        'progress' => ['type' => ''],
      ],
      '#weight' => 20,
    ];
    // i18n integration.
    if (module_exists('i18n_taxonomy')) {
      if (i18n_taxonomy_vocabulary_mode($term->vid, I18N_MODE_TRANSLATE)) {
        $form['term_data']['translations'] = _taxonomy_manager_form_term_data_translations($term);
        $form['term_data']['translations']['#weight'] = '50';

        $form['term_data']['language'] = [
          '#type' => 'select',
          '#title' => t('Language'),
          '#description' => t('This term belongs to a multilingual vocabulary. You can set a language for it.'),
          '#default_value' => $term->language,
          '#options' => locale_language_list('name'),
        ];
      }
    }
    // UUID integration.
    if (module_exists('uuid')) {
      $uuids = entity_get_uuid_by_id('taxonomy_term', [$tid]);
      if (count($uuids)) {
        $form['term_data']['uuid'] = [
          '#markup' => t('UUID: @uuid', ['@uuid' => reset($uuids)]),
          '#weight' => -10,
        ];
      }
    }

    // Entity translation and title field integration.
    taxonomy_manager_term_data_form_entity_translation($form, $term);

    _taxonomy_manager_term_data_form_filter_file_fields($form);
  }

  $form['term_data']['#prefix'] = '<div id="taxonomy-term-data-replace">';
  $form['term_data']['#suffix'] = '</div>';
}

/**
 * Removes file fields from the term data form, as they do not work on the
 * nested form structure and link to the original term edit form instead.
 *
 * See #1195940, hack necessary until #1329856/#1468686 get fixed.
 */
function _taxonomy_manager_term_data_form_filter_file_fields(&$form) {
  foreach (element_children($form['term_data']) as $key) {
    $field = &$form['term_data'][$key];
    if (isset($field['#type']) && $field['#type'] == 'container' && isset($field['#language']) && isset($field[$field['#language']])) {
      foreach (element_children($field[$field['#language']]) as $delta) {
        $element = &$field[$field['#language']][$delta];
        if (isset($element['#type']) && $element['#type'] == "managed_file") {
          $form['term_data']['file_field_info'] = [
            '#markup' => '<div class="term-data-form-file-field-info">' . t('Edit file fields <a href="!url" target="_blank">here</a>.', ['!url' => url('taxonomy/term/' . $form['term_data']['#term']['tid'] . '/edit')]) . '</div>',
          ];
          unset($form['term_data'][$key]);
          break;
        }
      }
    }
  }
}

/**
 * Helper function for generating tables with values and delete op and field
 * for adding.
 *
 * @param $term
 *   term object which is going to be displayed
 *
 * @return an form array
 */
function _taxonomy_manager_form_term_data_parents($term) {
  $module_path = drupal_get_path('module', 'taxonomy_manager') . '/';

  $form['#tree'] = TRUE;
  $form['#theme'] = 'taxonomy_manager_term_data_extra';
  $form['headers'][] = ['#markup' => t('Parents')];
  $form['headers'][] = ['#markup' => ''];
  $form['data'] = [];

  foreach (taxonomy_get_parents($term->tid) as $tid => $parent) {
    $extra_info = taxonomy_manager_tree_term_extra_info($parent);
    $form['data'][$tid][] = [
      '#markup' => l($parent->name, 'admin/structure/taxonomy_manager/termdata/' . $parent->tid, [
        'attributes' => [
          'title' => $extra_info,
          'class' => 'taxonomy-term-data-name-link',
        ],
      ]),
      '#row-class' => 'taxonomy-term-data-name',
      '#row-id' => 'term-' . $tid,
      '#tree' => TRUE,
    ];
    $form['data'][$tid][0]['tid'] = [
      '#type' => 'hidden',
      '#value' => $tid,
    ];
    $form['data'][$tid]['remove'] = [
      '#type' => 'image_button',
      '#attributes' => ['title' => t('Remove')],
      '#submit' => ['taxonomy_manager_term_data_form_submit_parents_remove'],
      '#validate' => ['taxonomy_manager_term_data_form_validate_parents_remove'],
      '#src' => $module_path . "images/list-remove.png",
      '#row-class' => 'taxonomy-term-data-operations',
    ];
    $form['data'][$tid]['remove']['#ajax'] = [
      'callback' => 'taxonomy_manager_term_data_form_ajax_callback',
      'progress' => ['type' => ''],
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => 'taxonomy-term-data-replace',
    ];
  }

  $form['op'] = [];
  $form['op']['add'] = [
    '#type' => 'textfield',
    '#prefix' => '<div class="term-data-autocomplete">',
    '#autocomplete_path' => 'taxonomy_manager/autocomplete/' . $term->vid,
    '#suffix' => '</div>',
    '#size' => 35,
  ];
  $form['op']['add_button'] = [
    '#type' => 'image_button',
    '#attributes' => ['title' => t('Add')],
    '#submit' => ['taxonomy_manager_term_data_form_submit_parents_add'],
    '#validate' => ['taxonomy_manager_term_data_form_validate_parents_add'],
    '#src' => $module_path . "images/list-add.png",
    '#row-class' => 'term-data-autocomplete-add',
    '#ajax' => [
      'callback' => 'taxonomy_manager_term_data_form_ajax_callback',
      'progress' => ['type' => ''],
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => 'taxonomy-term-data-replace',
    ],
  ];

  return $form;
}

/**
 * Helper function for generating a table listing the translations.
 */
function _taxonomy_manager_form_term_data_translations($term) {
  $module_path = drupal_get_path('module', 'taxonomy_manager') . '/';
  $languages = locale_language_list('name');

  $form['#tree'] = TRUE;
  $form['#theme'] = 'taxonomy_manager_term_data_extra';
  $form['headers'][] = ['#markup' => t('Translations')];
  $form['headers'][] = ['#markup' => t('Language')];
  $form['headers'][] = ['#markup' => ''];

  if (!empty($term->i18n_tsid)) {
    $translation_set = i18n_taxonomy_translation_set_load($term->i18n_tsid);
    $translations = $translation_set->get_translations();
    // If the number of translations equals 1, there's only a source translation.
    if (count($translations) > 1) {
      foreach ($translations as $langcode => $translation) {
        if ($translation->tid !== $term->tid) {
          $form['data'][$translation->tid][] = [
            '#markup' => l($translation->name, 'admin/structure/taxonomy_manager/termdata/' . $translation->tid, ['attributes' => ['class' => 'taxonomy-term-data-name-link']]),
            '#row-class' => 'taxonomy-term-data-name',
            '#row-id' => 'term-' . $translation->tid,
            '#tree' => TRUE,
          ];
          $form['data'][$translation->tid][] = [
            '#markup' => check_plain($languages[$translation->language]),
            '#row-class' => 'taxonomy-term-data-language',
            '#row-id' => 'term-' . $translation->language,
            '#tree' => TRUE,
          ];
          $form['data'][$translation->tid][0]['tid'] = [
            '#type' => 'hidden',
            '#value' => $translation->tid,
          ];
          $form['data'][$translation->tid]['remove'] = [
            '#type' => 'image_button',
            '#attributes' => ['title' => t('Remove')],
            '#submit' => ['taxonomy_manager_term_data_form_submit_translation_remove'],
            '#validate' => ['taxonomy_manager_term_data_form_validate_translation_remove'],
            '#src' => $module_path . "images/list-remove.png",
            '#row-class' => 'taxonomy-term-data-operations',
          ];
          $form['data'][$translation->tid]['remove']['#ajax'] = [
            'callback' => 'taxonomy_manager_term_data_form_ajax_callback',
            'progress' => ['type' => ''],
            'method' => 'replaceWith',
            'event' => 'click',
            'wrapper' => 'taxonomy-term-data-replace',
          ];
        }
      }
    }
  }

  $form['op'] = [];
  $form['op']['add'] = [
    '#type' => 'textfield',
    '#prefix' => '<div class="term-data-autocomplete">',
    '#autocomplete_path' => 'taxonomy_manager/autocomplete/' . $term->vid,
    '#suffix' => '</div>',
    '#size' => 35,
  ];
  // Translations have a different language than the original term.
  unset($languages[$term->language]);
  $form['op']['language'] = [
    '#type' => 'select',
    '#options' => $languages,
  ];
  $form['op']['add_button'] = [
    '#type' => 'image_button',
    '#attributes' => ['title' => t('Add')],
    '#submit' => ['taxonomy_manager_term_data_form_submit_translation_add'],
    '#validate' => ['taxonomy_manager_term_data_form_validate_translation_add'],
    '#src' => $module_path . "images/list-add.png",
    '#row-class' => 'term-data-autocomplete-add',
    '#ajax' => [
      'callback' => 'taxonomy_manager_term_data_form_ajax_callback',
      'progress' => ['type' => ''],
      'method' => 'replaceWith',
      'event' => 'click',
      'wrapper' => 'taxonomy-term-data-replace',
    ],
  ];

  return $form;
}

/**
 * Entity translation and title field integration for terms.
 */
function taxonomy_manager_term_data_form_entity_translation(&$form, $term) {
  if (module_exists('title') &&
    module_exists('entity_translation') &&
    entity_translation_enabled('taxonomy_term', $term) &&
    title_field_replacement_enabled('taxonomy_term', $term->vocabulary_machine_name, 'name') &&
    !empty($term->name_field)) {

    $languages = language_list();
    $source_language = $term->translations->original;

    // Disable the original name_field forms.
    $form['term_data']['name_field']['#access'] = FALSE;
    // Create an own temporary form.
    $name_field_form = [
      '#tree' => TRUE,
      '#weight' => -100,
    ];
    foreach ($languages as $language) {
      $translation = $term->translations->data[$language->language] ?? FALSE;

      // Determine the access for each translation.
      if ($translation) {
        $access = entity_translation_access('taxonomy_term', $translation);
      }
      else {
        $access = (user_access('translate any entity') || user_access('translate taxonomy_term entities'));
      }
      if (entity_translation_workflow_enabled() && $source_language == $language->language) {
        $access = user_access('edit original values');
      }

      $default_value = $term->name_field[$language->language][0]['value'] ?? '';
      $name_field_form['name'][$language->language] = [
        '#type' => 'textfield',
        '#default_value' => !empty($default_value) ? $default_value : '',
        '#title' => t('Name (@language)', ['@language' => $language->name]),
        '#required' => !empty($translation) ? TRUE : FALSE,
        '#access' => $access,
      ];

      if ($source_language == $language->language) {
        $name_field_form['name'][$language->language]['#title'] .= ' - ' . t('Source language');
        $name_field_form['name'][$language->language]['#weight'] = -1;
      }
      if (module_exists('pathauto')) {
        // Option to generate path aliases.
        $name_field_form['pathauto'] = [
          '#type' => 'checkbox',
          '#title' => t('Update path aliases for translations.'),
          '#default_value' => TRUE,
          '#weight' => 10,
        ];
      }
    }
    $form['term_data']['name_field_form'] = $name_field_form;
  }
}

/**
 * Returns html markup for (un)select all checkboxes buttons.
 */
function _taxonomy_manager_select_all_helpers_markup() {
  return '<span class="taxonomy-manager-select-helpers">' .
    '<span class="select-all-children" title="' . t("Select all") . '">&nbsp;&nbsp;&nbsp;&nbsp;</span>' .
    '<span class="deselect-all-children" title="' . t("Remove selection") . '">&nbsp;&nbsp;&nbsp;&nbsp;</span>' .
    '<span class="remove-all-settings" title="' . t("Clear HTM5 storage") . '">&nbsp;&nbsp;&nbsp;&nbsp;</span>' .
    '<span class="expand-all " title="' . t("Expand all") . '">&nbsp;&nbsp;&nbsp;&nbsp;</span>' .
    '<span class="collapse-all " title="' . t("Collapse all") . '">&nbsp;&nbsp;&nbsp;&nbsp;</span>' .
    '</span>';
}

/**
 * Submit handler for loading term data form.
 */
function taxonomy_manager_load_tid_submit($form, &$form_state) {
  // Unset input, so that the term data form has fresh values.
  unset($form_state['input']);
  $values = $form_state['values'];
  if ($form_state['values']['load-tid-refresh-tree']) {
    form_set_value(['#parents' => ['tree-update']], ['update' => TRUE], $form_state);
  }
  // Hack for fields module  "paragraphs" unset field which was include through hook_field_attach_form.
  if (module_exists('paragraphs')) {
    $entity = taxonomy_term_load($values['load-tid']);
    [, , $bundle] = entity_extract_ids('taxonomy_term', $entity);
    foreach (field_info_instances('taxonomy_term', $bundle) as $instance) {
      $field_name = $instance['field_name'];
      $field_info = field_info_field($field_name);
      if ($field_info['type'] == 'paragraphs') {
        unset($form_state['values'][$field_name]);
        unset($form_state['field'][$field_name]);
      }
    }

  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Validates the form (only search button)
 **/
function taxonomy_manager_form_validate($form, &$form_state) {
  if ($form_state['clicked_button']['#value'] == t('Search') && empty($form_state['values']['search']['field'])) {
    form_set_error('search', t('Search field is empty'));
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Submits the taxonomy manager form (only search button)
 **/
function taxonomy_manager_form_submit($form, &$form_state) {
  if ($form_state['values']['delete'] === TRUE) {
    return taxonomy_manager_term_confirm_delete_submit($form, $form_state);
  }
  $voc = $form_state['values']['voc'];
  if (isset($form_state['values']['voc2'])) {
    $voc2 = $form_state['values']['voc2'];
    $url_prefix = 'admin/structure/taxonomy_manager/double-tree/' . $voc->machine_name . '/' . $voc2->machine_name;
  }
  else {
    $url_prefix = 'admin/structure/taxonomy_manager/voc/' . $voc->machine_name;
  }

  $search_string = $form_state['values']['search']['field'];
  $terms = [];

  $include_synonyms = FALSE;
  $selected_tids = [];
  $language = "";

  // @todo
  /*if ($form_state['values']['search']['options']['synonyms']) {
  $include_synonyms = TRUE;
  }*/
  if ($form_state['values']['search']['options']['subtrees']) {
    $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  }
  if (isset($form_state['values']['search']['options']['language'])) {
    $language = $form_state['values']['taxonomy']['manager']['top']['language'];
  }

  $terms = taxonomy_manager_autocomplete_search_terms($search_string, $voc->vid, $include_synonyms, $selected_tids, $language);
  if (count($terms) == 1) {
    $tid = $terms[0];
    drupal_set_message(t("Your search string matches exactly one term"));
    drupal_goto($url_prefix . '/' . $tid);
  }
  elseif (count($terms) > 1) {
    $matched_text_list = [];
    foreach ($terms as $matched_tid) {
      $matched_term = taxonomy_term_load($matched_tid);
      $parents = [];
      foreach (taxonomy_get_parents($matched_tid) as $parent) {
        $parents[] = check_plain($parent->name);
      }
      $parent_text = count($parents) ? implode(' | ', $parents) . " › " : "";
      $matched_text_list[] = $parent_text . l($matched_term->name, $url_prefix . '/' . $matched_term->tid, ['attributes' => ['title' => taxonomy_manager_tree_term_extra_info($matched_term)]]) . " (" . $matched_term->tid . (!empty($matched_term->language) ? '-' . check_plain($matched_term->language) : '') . ")";
    }
    form_set_value($form, ['searched_terms' => $terms], $form_state);
    drupal_set_message(t("Your search string matches !count terms:", ['!count' => count($terms)]) . theme('item_list', ['items' => $matched_text_list]));
    $form_state['rebuild'] = TRUE;
  }
  else {
    drupal_set_message(t("No match found. Filtering root level terms starting with @search_string.", ['@search_string' => $search_string]));
    drupal_set_message(l(t("Show unfiltered tree"), $url_prefix));
    drupal_goto($url_prefix . '/0/' . $search_string);
  }
}

/**
 * Validates taxonomy manager double tree.
 **/
function taxonomy_manager_double_tree_form_validate($form, &$form_state) {
  taxonomy_manager_form_validate($form, $form_state);
}

/**
 * Submits the taxonomy manager double tree.
 **/
function taxonomy_manager_double_tree_form_submit($form, &$form_state) {
  taxonomy_manager_form_submit($form, $form_state);
}

/**
 * Submit handler for adding terms.
 */
function taxonomy_manager_form_add_submit($form, &$form_state) {
  $parents = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'] ?? [];
  $lang = $form_state['values']['taxonomy']['manager']['top']['language'] ?? "";
  $term_names_too_long = [];
  $arguments = [
    $form_state['values']['add']['mass_add'],
    $form_state['values']['voc']->vid,
    $parents,
    $lang,
    &$term_names_too_long,
  ];
  if (isset($form_state['values']['add']['add_with_uuid'])) {
    $arguments[] = $form_state['values']['add']['add_with_uuid'];
  }
  $new_terms = call_user_func_array('taxonomy_manager_mass_add_terms', $arguments);
  $term_names = [];
  foreach ($new_terms as $term) {
    $term_names[] = $term->name;
  }
  if (module_exists('i18n_taxonomy') && !empty($lang) && i18n_taxonomy_vocabulary_mode($form_state['values']['voc']->vid, I18N_MODE_TRANSLATE)) {
    drupal_set_message(t("Saving terms to language @lang", ['@lang' => locale_language_name($form_state['values']['taxonomy']['manager']['top']['language'])]));
  }
  if (count($term_names_too_long)) {
    drupal_set_message(t("Following term names were too long and truncated to 255 characters: %names.", ['%names' => implode(', ', $term_names_too_long)]), 'warning');
  }
  drupal_set_message(t("Terms added: %terms", ['%terms' => implode(', ', $term_names)]));
}

/**
 * Helper function for mass adding of terms.
 *
 * @param $input
 *   The textual input with terms. Each line contains a single term. Child term
 *   can be prefixed with a dash '-' (one dash for each level). Term names
 *   starting with a dash and should not become a child term need to be wrapped
 *   in quotes.
 * @param $vid
 *   The vocabulary id.
 * @param int $parents
 *   An array of parent term ids for the new inserted terms. Can be 0.
 * @param $lang
 *   The i18n language, if i18n exists.
 * @param $term_names_too_long
 *   Return value that is used to indicate that some term names were too long
 *   and truncated to 255 characters.
 * @param $add_with_uuid
 *   If TRUE then save trems with uuid.
 *
 * @return An array of the newly inserted term objects
 */
function taxonomy_manager_mass_add_terms($input, $vid, $parents, $lang = "", &$term_names_too_long = [], $add_with_uuid = FALSE) {
  $new_terms = [];
  $terms = explode("\n", str_replace("\r", '', $input));
  $parents = count($parents) ? $parents : 0;

  // Stores the current lineage of newly inserted terms.
  $last_parents = [];
  foreach ($terms as $name) {
    if (empty($name)) {
      continue;
    }
    $matches = [];
    // Child term prefixed with one or more dashes.
    if (preg_match('/^(-){1,}/', $name, $matches)) {
      $depth = strlen($matches[0]);
      $name = substr($name, $depth);
      $current_parents = isset($last_parents[$depth - 1]) ? $last_parents[$depth - 1]->tid : 0;
    }
    // Parent term containing dashes at the beginning and is therefore wrapped
    // in double quotes.
    elseif (preg_match('/^\"(-){1,}.*\"/', $name, $matches)) {
      $name = substr($name, 1, -1);
      $depth = 0;
      $current_parents = $parents;
    }
    else {
      $depth = 0;
      $current_parents = $parents;
    }
    // Truncate long string names that will cause database exceptions.
    if (strlen($name) > 255) {
      $term_names_too_long[] = $name;
      $name = substr($name, 0, 255);
    }

    $term = new stdClass();
    if ($add_with_uuid) {
      $term_name_with_uuid = explode('|', $name);
      if (isset($term_name_with_uuid[0])) {
        $name = $term_name_with_uuid[0];
      }
      if (isset($term_name_with_uuid[1])) {
        $term->uuid = $term_name_with_uuid[1];
      }
    }
    $term->name = $name;
    $term->vid = $vid;
    $term->parent = $current_parents;
    if (module_exists('i18n_taxonomy') && !empty($lang) && i18n_taxonomy_vocabulary_mode($vid, I18N_MODE_TRANSLATE)) {
      $term->language = $lang;
    }
    taxonomy_term_save($term);
    $new_terms[] = $term;
    $last_parents[$depth] = $term;
  }
  return $new_terms;
}

/**
 * Validation handler for deleting terms.
 */
function taxonomy_manager_form_delete_validate($form, &$form_state) {
  $selected_tids = [];
  $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  if (count($selected_tids) < 1) {
    form_set_error('delete', t("No terms for deleting selected"));
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Submit handler for deleting terms.
 */
function taxonomy_manager_form_delete_submit($form, &$form_state) {
  $selected_tids = [];
  $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  if ($form_state['values']['delete'] === TRUE) {
    return taxonomy_manager_term_confirm_delete_submit($form, $form_state);
  }
  // Rebuild the form to confirm term deletion.
  $form_state['rebuild'] = TRUE;
  $form_state['confirm_delete'] = TRUE;
}

/**
 * Form builder for the term delete form.
 */
function taxonomy_manager_term_confirm_delete($form, &$form_state, $vid, $vid2 = NULL) {
  $voc = taxonomy_vocabulary_load($vid);
  if (isset($vid2)) {
    $voc2 = taxonomy_vocabulary_load($vid2);
    $form['voc2'] = ['#type' => 'value', '#value' => $voc2];
    $url = 'admin/structure/taxonomy_manager/double-tree/' . $voc->machine_name . '/' . $voc2->machine_name;
  }
  else {
    $url = 'admin/structure/taxonomy_manager/voc/' . $voc->machine_name;
  }

  $selected = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  $form['selected_terms'] = [
    '#prefix' => '<ul>',
    '#suffix' => '</ul>',
    '#tree' => TRUE,
  ];
  foreach ($selected as $tid) {
    $term = taxonomy_term_load($tid);
    $form['selected_terms'][$tid] = [
      '#type' => 'hidden',
      '#value' => $tid,
      '#prefix' => '<li>',
      '#suffix' => check_plain($term->name) . "</li>\n",
    ];
  }

  $form['delete'] = ['#type' => 'value', '#value' => TRUE];
  $form['voc'] = ['#type' => 'value', '#value' => $voc];
  $form['options'] = [
    '#type' => 'value',
    '#value' => $form_state['values']['delete']['options'],
  ];
  $msg = !empty($form_state['values']['delete']['options']['delete_orphans']) ? t('Deleting a term will delete all its children if there are any.') : '';
  $msg .= t('This action cannot be undone.');
  return confirm_form($form,
    t('Are you sure you want to delete the following terms:'),
    $url,
    $msg,
    t('Delete'),
    t('Cancel'));
}

/**
 * Submit handler to delete a term after confirmation.
 */
function taxonomy_manager_term_confirm_delete_submit($form, &$form_state) {
  $info = taxonomy_manager_delete_terms($form_state['values']['selected_terms'], $form_state['values']['options']);
  $deleted_term_names = [];
  $remaining_child_term_names = [];

  foreach ($info['deleted_terms'] as $term) {
    $deleted_term_names[] = $term->name;
  }
  foreach ($info['remaining_child_terms'] as $term) {
    $remaining_child_term_names[] = $term->name;
  }

  if (isset($form_state['values']['voc2'])) {
    $form_state['redirect'] = 'admin/structure/taxonomy_manager/double-tree/' . $form_state['values']['voc']->machine_name . '/' . $form_state['values']['voc2']->machine_name;
  }
  else {
    $form_state['redirect'] = 'admin/structure/taxonomy_manager/voc/' . $form_state['values']['voc']->machine_name;
  }
  drupal_set_message(t("Deleted terms: %deleted_term_names", ['%deleted_term_names' => check_plain(implode(', ', $deleted_term_names))]));
  if (count($remaining_child_term_names)) {
    drupal_set_message(t("Remaining child terms with different parents: %remaining_child_term_names", ['%remaining_child_term_names' => check_plain(implode(', ', $remaining_child_term_names))]));
  }
  return;
}

/**
 * Validation handler for moving terms.
 */
function taxonomy_manager_form_move_validate($form, &$form_state) {
  $selected_tids = [];
  $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  $error_msg = "";
  if (count($selected_tids) < 1) {
    form_set_error('move', t("Please selected terms you want to move in the hierarchy"));
    $form_state['rebuild'] = TRUE;
  }
  elseif (_taxonomy_manager_check_duplicates($form_state['values']['voc']->vid, $form_state['values']['move']['parents'], $error_msg)) {
    form_set_error('move', t("Warning: Your input matches with multiple terms, because of duplicated term names. Please enter a unique term name or the term id with 'term-id:[tid]'") . " (" . $error_msg . ").");
    $form_state['rebuild'] = TRUE;
  }

  $typed_parents = taxonomy_manager_autocomplete_tags_get_tids($form_state['values']['move']['parents'], $form_state['values']['voc']->vid, FALSE);

  $parents = [];
  foreach ($typed_parents as $parent_info) {
    $parents[(int) $parent_info['tid']] = (int) $parent_info['tid'];
  }

  if (!taxonomy_manager_check_circular_hierarchy($selected_tids, $parents)) {
    form_set_error('move', t('Invalid selection. The resulting hierarchy would contain circles, which is not allowed. A term cannot be a parent of itself.'));
    $form_state['rebuild'] = TRUE;
  }
  elseif (!taxonomy_manager_check_language($form_state['values']['voc']->vid, $selected_tids, $typed_parents)) {
    form_set_error('move', t('Terms must be of the same language'));
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Checks for circles in the hierarchy, e.g. 1 -> 2 -> 3 -> 1
 * a term can't contain itself as a parent
 *
 * Returns TRUE if resulting hierarchy is valid, else FALSE.
 */
function taxonomy_manager_check_circular_hierarchy($tids, $new_parents_tids) {
  if (is_array($tids) && is_array($new_parents_tids)) {
    // Directly same term.
    foreach ($tids as $tid) {
      if (in_array($tid, $new_parents_tids)) {
        return FALSE;
      }
    }

    // Same term over more hierarchy levels.
    $all_parents = [];
    foreach ($new_parents_tids as $parent_tid) {
      $parents = taxonomy_get_parents_all($parent_tid);
      foreach ($parents as $parent) {
        $all_parents[$parent->tid] = $parent->tid;
      }
    }
    foreach ($tids as $tid) {
      if (in_array($tid, $all_parents)) {
        return FALSE;
      }
    }
  }
  return TRUE;
}

/**
 * Checks if terms in move or merge operation are of the same language.
 *
 * Returns TRUE if operation allowed, else FALSE (different languages)
 */
function taxonomy_manager_check_language($vid, $selected_tids, $parents) {
  if (module_exists('i18_ntaxonomy')) {
    if (count($parents) && count($selected_tids)) {
      $term = array_pop($parents);
      $lang = $term->language;
      if (i18n_taxonomy_vocabulary_mode($voc->vid, I18N_MODE_TRANSLATE)) {
        foreach ($parents as $parent) {
          if (_taxonomy_manager_term_get_lang($parent['tid']) != $lang) {
            return FALSE;
          }
        }
        foreach ($selected_tids as $tid) {
          if (_taxonomy_manager_term_get_lang($tid) != $lang) {
            return FALSE;
          }
        }
      }
    }
  }
  return TRUE;
}

/**
 * Submit handler for moving terms.
 */
function taxonomy_manager_form_move_submit($form, $form_state) {
  $selected_tids = [];
  $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  $lang = $form_state['values']['taxonomy']['manager']['top']['language'] ?? NULL;
  $typed_parents = taxonomy_manager_autocomplete_tags_get_tids($form_state['values']['move']['parents'], $form_state['values']['voc']->vid, TRUE, $lang);

  $parents = [];
  foreach ($typed_parents as $parent_info) {
    $parents[] = $parent_info['tid'];
  }

  // If empty, delete all parents.
  if (count($parents) == 0) {
    $parents[0] = 0;
  }

  taxonomy_manager_move($parents, $selected_tids, $form_state['values']['move']['options']);

  if ($form_state['values']['move']['options']['keep_old_parents']) {
    // ++ parent count for hierarchy update (-> multi hierarchy)
    $parents[] = 1;
  }
  taxonomy_manager_update_voc($form_state['values']['voc']->vid, $parents);

  $term_names_array = [];
  foreach ($selected_tids as $selected_tid) {
    $term = taxonomy_term_load($selected_tid);
    $term_names_array[] = $term->name;
  }
  $term_names = implode(', ', $term_names_array);
  $parent_names = "";
  if (count($typed_parents) == 0) {
    $parent_names = t("root level");
  }
  else {
    $parent_names = $form_state['values']['move']['parents'];
  }
  drupal_set_message(t("Terms %term_names moved to %parent_names", [
    '%term_names' => $term_names,
    '%parent_names' => $parent_names,
  ]));
}

/**
 * Validation handler for validating terms.
 */
function taxonomy_manager_form_term_merge_validate($form, &$form_state) {
  $selected_tids = [];
  $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  $dest_terms = [];
  $regexp = '%(?:^|,\ *)("(?>[^"]*)(?>""[^"]* )*"|(?: [^",]*))%x';
  preg_match_all($regexp, $form_state['values']['term_merge']['dest_term'], $matches);
  $dest_terms = $matches[1];
  $error_msg = "";
  $typed_terms = taxonomy_manager_autocomplete_tags_get_tids($form_state['values']['term_merge']['dest_term'], $form_state['values']['voc']->vid, FALSE);

  if (!is_array($dest_terms) || count($dest_terms) == 0 || empty($dest_terms[0])) {
    form_set_error('term_merge][dest_term', t('Please enter a name into "Destination term"'));
    $form_state['rebuild'] = TRUE;
  }
  elseif (count($dest_terms) > 1) {
    form_set_error('term_merge][dest_term', t('Please only enter single names into "Destination term"'));
    $form_state['rebuild'] = TRUE;
  }

  if (count($selected_tids) < 1) {
    form_set_error('term_merge', t("Please select terms you want to merge"));
    $form_state['rebuild'] = TRUE;
  }
  elseif (_taxonomy_manager_check_duplicates($form_state['values']['voc']->vid, $form_state['values']['term_merge']['dest_term'], $error_msg)) {
    form_set_error('term_merge', t("Warning: Your input matches with multiple terms, because of duplicated term names. Please enter a unique term name or the term id with 'term-id:[tid]'") . " (" . $error_msg . ").");
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Submit handler for term merge.
 */
function taxonomy_manager_form_term_merge_submit($form, $form_state) {
  $selected_tids = [];
  $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  $dest_term_ids = taxonomy_manager_autocomplete_tags_get_tids($form_state['values']['term_merge']['dest_term'], $form_state['values']['voc']->vid, TRUE);
  $dest_term_id = array_shift($dest_term_ids);
  $dest_term = taxonomy_term_load($dest_term_id['tid']);

  $term_names_array = [];
  foreach ($selected_tids as $selected_tid) {
    $term = taxonomy_term_load($selected_tid);
    $term_names_array[] = $term->name;
  }
  $term_names = implode(', ', $term_names_array);
  if (module_exists('term_merge')) {
    term_merge($selected_tids, $dest_term->tid, $form_state['values']['term_merge']['options']['keep_merged']);
    drupal_set_message(t("Terms %term_names merged into %dest_term", [
      '%term_names' => $term_names,
      '%dest_term' => $dest_term->name,
    ]));
  }
  else {
    drupal_set_message(t('Term merge module not found'));
  }
}

/**
 * Returns TRUE if term with same name exists more often.
 */
function _taxonomy_manager_check_duplicates($vid, $autocomplete_value, &$msg) {
  $regexp = '%(?:^|,\ *)("(?>[^"]*)(?>""[^"]* )*"|(?: [^",]*))%x';
  preg_match_all($regexp, $autocomplete_value, $matches);
  foreach ($matches[1] as $match) {
    $terms = [];
    $terms = taxonomy_manager_autocomplete_tags_get_tids($match, $vid, FALSE);
    if (count($terms) > 1) {
      $tids = [];
      foreach ($terms as $t) {
        $term = taxonomy_term_load($t['tid']);
        $tids[] = $term->tid . (!empty($term->language) ? '-' . check_plain($term->language) : '');
      }
      $msg .= check_plain($match) . ": " . implode(", ", $tids);
      return TRUE;
    }
  }
  return FALSE;
}

/**
 *
 */
function taxonomy_manager_form_double_tree_submit($form, &$form_state) {
  drupal_goto('admin/structure/taxonomy_manager/double-tree/' . $form_state['values']['voc']->machine_name . '/' . $form_state['values']['double-tree-settings']['voc2_machine_name']);
}

/**
 *
 */
function taxonomy_manager_form_double_tree_disable_submit($form, &$form_state) {
  drupal_goto('admin/structure/taxonomy_manager/voc/' . $form_state['values']['voc']->machine_name);
}

/**
 * Defines a settings form.
 */
function taxonomy_manager_settings($form) {
  $form['taxonomy_manager_disable_mouseover'] = [
    '#type' => 'checkbox',
    '#title' => t('Disable mouse-over effect for terms (weights and direct link)'),
    '#default_value' => variable_get('taxonomy_manager_disable_mouseover', 0),
    '#description' => t('Disabeling this feature speeds up the Taxonomy Manager'),
  ];
  $form['taxonomy_manager_pager_tree_page_size'] = [
    '#type' => 'select',
    '#title' => t('Pager count'),
    '#options' => [
      25 => 25,
      50 => 50,
      75 => 75,
      100 => 100,
      150 => 150,
      200 => 200,
      250 => 250,
      300 => 300,
      400 => 400,
      500 => 500,
      1000 => 1000,
      2500 => 2500,
      5000 => 5000,
      10000 => 10000,
    ],
    '#default_value' => variable_get('taxonomy_manager_pager_tree_page_size', TAXONOMY_MANAGER_PAGER_TREE_PAGE_SIZE_DEFAULT),
    '#description' => t('Select how many terms should be listed on one page. Huge page counts can slow down the Taxonomy Manager'),
  ];
  return system_settings_form($form);
}

/**
 *
 */
function taxonomy_manager_term_data_form_ajax_callback($form, $form_state) {
  $commands = [];
  $commands[] = ajax_command_insert(NULL, drupal_render($form['term_data']));
  $commands[] = ajax_command_after('#term-data-close', theme('status_messages'));

  // Update tree if necessary.
  if (isset($form_state['values']['tree-update'])) {
    if (isset($form_state['values']['tree-update']['update']) && $form_state['values']['tree-update']['update']) {
      $commands[] = ajax_command_insert('#taxonomy-manager .form-item-taxonomy-manager-tree', drupal_render($form['taxonomy']['manager']['tree']));
      if (isset($form['taxonomy2'])) {
        $commands[] = ajax_command_insert('#taxonomy-manager .form-item-taxonomy2-manager-tree', drupal_render($form['taxonomy2']['manager']['tree']));
      }
    }
    elseif (isset($form_state['values']['tree-update']['update-name'])) {
      $selector = 'a.term-data-link-id-' . $form_state['values']['tree-update']['update-name']['tid'];
      $commands[] = ajax_command_html($selector, '<span>' . check_plain($form_state['values']['tree-update']['update-name']['name']) . '</span>');
    }
  }

  return ['#type' => 'ajax', '#commands' => $commands];
}

/**
 *
 */
function taxonomy_manager_term_data_form_submit($form, &$form_state) {
  unset($form_state['values']['parents']);
  $old_term = taxonomy_term_load($form_state['values']['tid']);
  $term = taxonomy_form_term_submit_build_taxonomy_term($form, $form_state);

  // Submit handler for entity translations.
  taxonomy_manager_term_data_form_entity_translation_submit($form_state, $term);

  if ($term->weight != $old_term->weight) {
    form_set_value(['#parents' => ['tree-update']], ['update' => TRUE], $form_state);
  }
  elseif ($term->name != $old_term->name) {
    form_set_value(['#parents' => ['tree-update']], [
      'update-name' => [
        'name' => $term->name,
        'tid' => $term->tid,
      ],
    ], $form_state);
  }
  elseif (isset($term->language) && $term->language != $old_term->language) {
    form_set_value(['#parents' => ['tree-update']], ['update' => TRUE], $form_state);
  }

  taxonomy_term_save($term);
  drupal_set_message(t('Updated term data'));
  $form_state['rebuild'] = TRUE;
}

/**
 * Helper function that submit entity translations from the the title field.
 */
function taxonomy_manager_term_data_form_entity_translation_submit(&$form_state, &$term) {
  if (module_exists('entity_translation') && module_exists('title') &&
    title_field_replacement_enabled('taxonomy_term', $term->vocabulary_machine_name, 'name') &&
    !empty($form_state['values']['name_field_form'])) {

    unset($term->name_field_form);
    unset($term->name_field);

    $handler = entity_translation_get_handler('taxonomy_term', $term);
    $source_language = $term->translations->original;

    foreach ($form_state['values']['name_field_form']['name'] as $language => $value) {
      if (!empty($value)) {
        $term->name_field[$language][0] = [
          'value' => $value,
          'format' => NULL,
        ];
        $term->name = $value;

        // Create a new translation if it does not exsist yet.
        if (!isset($term->translations->data[$language])) {
          $translation = [
            'source' => $source_language,
            'language' => $language,
            'status' => 1,
          ];
          $handler->setTranslation($translation);
        }

        // Pathauto handling - update aliases for each language, except the
        // source language - this happens automatically.
        if ($source_language != $language && $form_state['values']['name_field_form']['pathauto']) {
          require_once drupal_get_path('module', 'pathauto') . '/pathauto.inc';

          $source_url = 'taxonomy/term/' . $term->tid;
          $pathauto_options = [
            'alias' => '',
            'pid' => NULL,
            'source' => $source_url,
            'language' => $language,
            'pathauto' => 1,
          ];
          $existing_alias = _pathauto_existing_alias_data($source_url, $language);
          $op = 'insert';
          if ($existing_alias) {
            $op = 'update';
            $pathauto_options['original'] = $existing_alias;
            $pathauto_options['pid'] = $existing_alias['pid'];
            $pathauto_options['alias'] = $existing_alias['alias'];
          }

          $term->path = [
            'pathauto' => $pathauto_options,
          ];
          $options = [
            'language' => $language,
          ];
          pathauto_taxonomy_term_update_alias($term, $op, $options);
        }
      }
    }
    // Reset the name property to the title field value from the currently
    // active language value. Only reset if there is a translation value.
    $active_language = entity_translation_get_existing_language('taxonomy_term', $term);
    if (!empty($form_state['values']['name_field_form']['name'][$active_language])) {
      $term->name = $term->name_original = $form_state['values']['name_field_form']['name'][$active_language];
    }
  }
}

/**
 *
 */
function taxonomy_manager_term_data_form_validate_parents_add($form, &$form_state) {
  $term_data = $form_state['values'];
  $term = taxonomy_term_load($term_data['tid']);

  $parent_names = $term_data['parents']['op']['add'];
  $typed_terms = taxonomy_manager_autocomplete_tags_get_tids($parent_names, $term->vid, FALSE);

  $error_msg = "";

  if ($parent_names == "") {
    form_set_error('parents][op][add', t("Parent field is required."));
  }
  elseif (_taxonomy_manager_check_duplicates($term->vid, $parent_names, $error_msg)) {
    form_set_error('parents][op][add', t("Warning: Your input matches with multiple terms, because of duplicated term names. Please enter a unique term name or the term id with 'term-id:[tid]' (!error_msg)", ['!error_msg' => $error_msg]));
  }
  elseif (!taxonomy_manager_check_language($term->vid, [$term->tid], $typed_terms)) {
    form_set_error('parents][op][add', t("Terms must be of the same language."));
  }
  else {
    // Validation for consistent hierarchy.
    $parents = [];
    foreach ($typed_terms as $parent_info) {
      $parents[$parent_info['tid']] = $parent_info['tid'];
    }
    if (!taxonomy_manager_check_circular_hierarchy([$term->tid => $term->tid], $parents)) {
      form_set_error('parents][op][add', t('Invalid parent. The resulting hierarchy would contain circles, which is not allowed. A term cannot be a parent of itself.'));
    }
  }
}

/**
 * Submit handler for adding parents for a term.
 */
function taxonomy_manager_term_data_form_submit_parents_add($form, &$form_state) {
  $term_data = $form_state['values'];
  $term = taxonomy_term_load($term_data['tid']);

  $parent_names = $term_data['parents']['op']['add'];

  // Insert terms.
  $typed_terms = taxonomy_manager_autocomplete_tags_get_tids($parent_names, $term->vid, TRUE);
  foreach ($typed_terms as $parent_info) {
    $new_tid = $parent_info['tid'];
  }

  if (!isset($term->parent)) {
    $term->parent = [];
  }

  // Get the current parents first.
  $flag = FALSE;
  $current_parents = taxonomy_get_parents($term->tid);
  foreach ($current_parents as $key => $value) {
    $term->parent[] = $key;
    if ($key == $new_tid) {
      $flag = TRUE;
    }
  }

  // Add on the new parent if it did not already exist.
  if (!$flag) {
    // If the current term's parent is only root, delete it.
    $i = 0;
    foreach ($term->parent as $p) {
      if (is_array($p)) {
        if ($p[0] == 0) {
          unset($term->parent[$i]);
        }
      }
      $i++;
    }
    $term->parent[] = $new_tid;
    // Executes hooks and clears caches.
    taxonomy_term_save($term);
    // Update hierarchy settings, if necessary.
    taxonomy_manager_update_voc($term->vid, taxonomy_get_parents($term->tid));
    drupal_set_message(t('Updated hierarchy'));
    $form_state['rebuild'] = TRUE;
    form_set_value(['#parents' => ['tree-update']], ['update' => TRUE], $form_state);
  }
  else {
    form_set_error('parents][op][add', t("Parent already exists."));
  }
}

/**
 * Validation callback when removing parents.
 */
function taxonomy_manager_term_data_form_validate_parents_remove($form, &$form_state) {
  $splits = explode('][', $form_state['triggering_element']['#name']);
  if (count($splits) == 3 && is_numeric($splits[1])) {
    form_set_value(['#parents' => ['remove_parent_tid']], $splits[1], $form_state);
  }
  else {
    form_set_error('parents', t('Invalid term selection.'));
  }
}

/**
 * Submit handler for removing a parent of a term.
 */
function taxonomy_manager_term_data_form_submit_parents_remove($form, &$form_state) {
  $term = taxonomy_term_load($form_state['values']['tid']);

  $parent = $form_state['values']['remove_parent_tid'];
  $parents = taxonomy_get_parents($term->tid);

  if (!isset($term->parent)) {
    $term->parent = [];
  }

  // Ensure that a term has a least parent 0.
  if (count($parents) == 1) {
    $term->parent[] = 0;
  }

  $term->parent = array_diff($term->parent, [$parent]);

  // Executes hooks and clears caches.
  taxonomy_term_save($term);
  drupal_set_message(t("Removed parent"));
  $form_state['rebuild'] = TRUE;
  form_set_value(['#parents' => ['tree-update']], ['update' => TRUE], $form_state);
}

/**
 * Validation handler for adding a single translation on the term data form.
 */
function taxonomy_manager_term_data_form_validate_translation_add($form, &$form_state) {
  $term_data = $form_state['values'];
  $term1 = taxonomy_term_load($term_data['tid']);
  $input = $term_data['translations']['op']['add'];
  $language = $term_data['translations']['op']['language'];

  $typed_terms = taxonomy_manager_autocomplete_tags_get_tids($term_data['translations']['op']['add'], $term1->vid, FALSE, $language);
  if (empty($input) || count($typed_terms) > 1) {
    form_set_error('translations][op][add', t("Please input one term with an appropriate language."));
  }
  elseif ($term1->language == $language) {
    form_set_error('translations][op', t("Added term is of the same language."));
    return;
  }
  elseif (!is_null(i18n_taxonomy_term_get_translation($term1, $language))) {
    form_set_error('translations][op][language', t('A translation for this language already exists.'));
    return;
  }
  elseif (count($typed_terms) == 1) {
    $entry = array_shift($typed_terms);
    $term2 = taxonomy_term_load($entry['tid']);
    if (!is_null(i18n_taxonomy_term_get_translation($term2, $term1->language))) {
      form_set_error('translations][op][add', t('A translation for this term already exists.'));
    }
  }
}

/**
 * Submit handler for adding a single translation on the term data form.
 */
function taxonomy_manager_term_data_form_submit_translation_add($form, &$form_state) {
  $term_data = $form_state['values'];
  $term1 = taxonomy_term_load($term_data['tid']);
  $voc = taxonomy_vocabulary_load($term1->vid);

  $typed_terms = taxonomy_manager_autocomplete_tags_get_tids($term_data['translations']['op']['add'], $term1->vid, TRUE, $term_data['translations']['op']['language']);
  $entry = array_shift($typed_terms);
  $term2 = taxonomy_term_load($entry['tid']);

  taxonomy_manager_add_translation($term1, $term2, $voc);
  drupal_set_message(t('The translation has been added'));
  $form_state['rebuild'] = TRUE;
  form_set_value(['#parents' => []], ['update' => TRUE], $form_state);
}

/**
 * Validation handler for removing a single translation on the term data form.
 */
function taxonomy_manager_term_data_form_validate_translation_remove($form, &$form_state) {
  $splits = explode('][', $form_state['triggering_element']['#name']);
  if (count($splits) == 3 && is_numeric($splits[1])) {
    form_set_value(['#parents' => ['remove_translation_tid']], $splits[1], $form_state);
  }
  else {
    form_set_error('translations', t('Invalid term selection.'));
  }
}

/**
 * Submit handler for removing a single translation on the term data form.
 */
function taxonomy_manager_term_data_form_submit_translation_remove($form, &$form_state) {
  $term = taxonomy_term_load($form_state['values']['tid']);
  $term_to_remove = taxonomy_term_load($form_state['values']['remove_translation_tid']);

  $translation_set = i18n_translation_set_load($term->i18n_tsid);
  $translation_set->remove_language($term_to_remove->language)
    ->update_delete();

  drupal_set_message(t("Removed term from translation."));
  $form_state['rebuild'] = TRUE;
  form_set_value(['#parents' => []], ['update' => TRUE], $form_state);
}

/**
 *
 */
function taxonomy_manager_double_tree_ajax_callback($form, $form_state) {
  $commands = [];
  $commands[] = ajax_command_prepend(NULL, theme('status_messages'));
  if ($form_state['values']['double_tree_values']['update_tree_left']) {
    $commands[] = ajax_command_insert('#taxonomy-manager .form-item-taxonomy-manager-tree', drupal_render($form['taxonomy']['manager']['tree']));
  }
  if ($form_state['values']['double_tree_values']['update_tree_right']) {
    $commands[] = ajax_command_insert('#taxonomy-manager .form-item-taxonomy2-manager-tree', drupal_render($form['taxonomy2']['manager']['tree']));
  }
  return ['#type' => 'ajax', '#commands' => $commands];
}

/**
 *
 */
function taxonomy_manager_double_tree_move_validate($form, &$form_state) {
  $values = [];

  if (strpos($form_state['input']['_triggering_element_name'], 'right') !== FALSE) {
    // Move right.
    $values = [
      'selected_parents' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms'],
      'selected_terms' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms'],
      'selected_terms_direct_parents' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms_direct_parents'],
      'left_tree_expand_terms' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms_direct_parents'],
      'right_tree_expand_terms' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms'],
    ];
  }
  else {
    // Move left.
    $values = [
      'selected_parents' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms'],
      'selected_terms' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms'],
      'selected_terms_direct_parents' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms_direct_parents'],
      'left_tree_expand_terms' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms'],
      'right_tree_expand_terms' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms_direct_parents'],
    ];
  }

  $values['update_tree_right'] = TRUE;
  $values['update_tree_left'] = TRUE;

  if (!count($values['selected_terms'])) {
    form_set_error('', t("No terms selected."));
  }
  elseif (is_array($values['selected_parents']) && count($values['selected_parents'])) {
    $p_array = [];
    foreach ($values['selected_parents'] as $parent) {
      $p_array[$parent]['tid'] = $parent;
    }
    if (!taxonomy_manager_check_language($form_state['values']['voc']->vid, $values['selected_terms'], $p_array)) {
      form_set_error('', t("Terms must be of the same language."));
    }
    elseif (!taxonomy_manager_check_circular_hierarchy($values['selected_terms'], $values['selected_parents'])) {
      form_set_error('', t('Invalid parent. The resulting hierarchy would contain circles, which is not allowed. A term cannot be a parent of itself.'));
    }
  }
  form_set_value(['#parents' => ['double_tree_values']], $values, $form_state);
}

/**
 *
 */
function taxonomy_manager_double_tree_move_submit($form, &$form_state) {
  $selected_terms = $form_state['values']['double_tree_values']['selected_terms'];
  $selected_parents = $form_state['values']['double_tree_values']['selected_parents'];
  $selected_terms_direct_parents = $form_state['values']['double_tree_values']['selected_terms_direct_parents'];

  $selected_terms_names = [];

  foreach ($selected_terms as $tid) {
    $selected_term = taxonomy_term_load($tid);
    $selected_terms_names[] = $selected_term->name;

    // Reset all parents, except the direct parent in the tree.
    $term_parents = taxonomy_get_parents($tid);
    $term_parents_array = [];
    $direct_parent = $selected_terms_direct_parents[$tid] ?? 0;
    foreach ($term_parents as $term_parent) {
      if ($direct_parent != $term_parent->tid) {
        $term_parents_array[$term_parent->tid] = $term_parent->tid;
      }
    }
    $selected_parent_names = [];
    if (count($selected_parents)) {
      foreach ($selected_parents as $parent) {
        $term = taxonomy_term_load($parent);
        $selected_parent_names[] = $term->name;
        $term_parents_array[$term->tid] = $term->tid;
      }
    }
    if (count($term_parents_array) == 0) {
      $term_parents_array[0] = 0;
    }
    taxonomy_manager_move($term_parents_array, [$tid], ['keep_old_parents' => FALSE]);
    taxonomy_manager_update_voc($form_state['values']['voc']->vid, $term_parents_array);
  }

  $term_names = implode(', ', $selected_terms_names);

  if (count($selected_parents) == 0) {
    drupal_set_message(t("Removed current parent form terms %terms.", ['%terms' => $term_names]));
  }
  else {
    drupal_set_message(t("Terms %terms moved to parents %parents.", [
      '%terms' => $term_names,
      '%parents' => implode(', ', $selected_parent_names),
    ]));
  }
  $form_state['rebuild'] = TRUE;
}

/**
 *
 */
function taxonomy_manager_double_tree_switch_validate($form, &$form_state) {
  $values = [];

  if (strpos($form_state['input']['_triggering_element_name'], 'right') !== FALSE) {
    // Move right.
    $values = [
      'selected_parents' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms'],
      'selected_terms' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms'],
      'left_tree_expand_terms' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms_direct_parents'],
      'right_tree_expand_terms' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms'],
      'voc1' => $form_state['values']['voc']->vid,
      'voc2' => $form_state['values']['voc2']->vid,
    ];
  }
  else {
    // Move left.
    $values = [
      'selected_parents' => $form_state['values']['taxonomy']['manager']['tree']['selected_terms'],
      'selected_terms' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms'],
      'left_tree_expand_terms' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms'],
      'right_tree_expand_terms' => $form_state['values']['taxonomy2']['manager']['tree']['selected_terms_direct_parents'],
      'voc1' => $form_state['values']['voc2']->vid,
      'voc2' => $form_state['values']['voc']->vid,
    ];
  }
  $values['update_tree_right'] = TRUE;
  $values['update_tree_left'] = TRUE;

  if (!count($values['selected_terms'])) {
    form_set_error('', t("No terms selected."));
  }
  form_set_value(['#parents' => ['double_tree_values']], $values, $form_state);
}

/**
 *
 */
function taxonomy_manager_double_tree_copy_validate($form, &$form_state) {
  taxonomy_manager_double_tree_switch_validate($form, $form_state);
  $values = $form_state['values']['double_tree_values'];
  if (strpos($form_state['input']['_triggering_element_name'], 'right') !== FALSE) {
    $form_state['values']['double_tree_values']['update_tree_left'] = FALSE;
  }
  else {
    $form_state['values']['double_tree_values']['update_tree_right'] = FALSE;
  }
}

/**
 *
 */
function taxonomy_manager_double_tree_copy_submit($form, &$form_state) {
  $selected_terms = $form_state['values']['double_tree_values']['selected_terms'];
  $selected_parents = $form_state['values']['double_tree_values']['selected_parents'];
  $voc1 = $form_state['values']['double_tree_values']['voc1'];
  $voc2 = $form_state['values']['double_tree_values']['voc2'];

  $voc1 = taxonomy_vocabulary_load($voc1);
  $voc2 = taxonomy_vocabulary_load($voc2);

  $new_tids = taxonomy_manager_copy($selected_terms, $voc1->vid, $voc2->vid, $selected_parents);
  if (count($new_tids)) {
    $new_tid = array_pop($new_tids);
    $form_state['values']['double_tree_values']['left_tree_expand_terms'] = [$new_tid];
    $form_state['values']['double_tree_values']['right_tree_expand_terms'] = [$new_tid];
  }

  $selected_terms_names = [];
  foreach ($selected_terms as $tid) {
    $term = taxonomy_term_load($tid);
    $selected_terms_names[] = $term->name;
  }
  $selected_parent_names = [];
  if (count($selected_parents)) {
    foreach ($selected_parents as $parent) {
      $term = taxonomy_term_load($parent);
      $selected_parent_names[] = $term->name;
      $term_parents_array[$term->tid] = $term->tid;
    }
  }
  $term_names = implode(', ', $selected_terms_names);
  if (count($selected_parents) == 0) {
    drupal_set_message(t("Copied %terms to vocabulary %voc.", [
      '%terms' => $term_names,
      '%voc' => $voc2->name,
    ]));
  }
  else {
    drupal_set_message(t("Copied %terms to vocabulary %voc under parents %parents.", [
      '%terms' => $term_names,
      '%voc' => $voc2->name,
      '%parents' => implode(', ', $selected_parent_names),
    ]));
  }

  $form_state['rebuild'] = TRUE;
}

/**
 *
 */
function taxonomy_manager_double_tree_switch_submit($form, &$form_state) {
  $selected_terms = $form_state['values']['double_tree_values']['selected_terms'];
  $selected_parents = $form_state['values']['double_tree_values']['selected_parents'];
  $voc1 = $form_state['values']['double_tree_values']['voc1'];
  $voc2 = $form_state['values']['double_tree_values']['voc2'];

  $voc1 = taxonomy_vocabulary_load($voc1);
  $voc2 = taxonomy_vocabulary_load($voc2);

  taxonomy_manager_switch($selected_terms, $voc1->vid, $voc2->vid, $selected_parents);

  $selected_terms_names = [];
  foreach ($selected_terms as $tid) {
    $term = taxonomy_term_load($tid);
    $selected_terms_names[] = $term->name;
  }
  $selected_parent_names = [];
  if (count($selected_parents)) {
    foreach ($selected_parents as $parent) {
      $term = taxonomy_term_load($parent);
      $selected_parent_names[] = $term->name;
      $term_parents_array[$term->tid] = $term->tid;
    }
  }
  $term_names = implode(', ', $selected_terms_names);
  if (count($selected_parents) == 0) {
    drupal_set_message(t("Terms %terms moved to vocabulary %voc.", [
      '%terms' => $term_names,
      '%voc' => $voc2->name,
    ]));
  }
  else {
    drupal_set_message(t("Terms %terms moved to vocabulary %voc under parents %parents.", [
      '%terms' => $term_names,
      '%voc' => $voc2->name,
      '%parents' => implode(', ', $selected_parent_names),
    ]));
  }

  $form_state['rebuild'] = TRUE;
}

/**
 * Validation handler for adding a translation.
 */
function taxonomy_manager_double_tree_add_translation_validate($form, &$form_state) {
  if (!module_exists('i18n_taxonomy')) {
    form_set_error('', t("i18n taxonomy module is not enabled."));
    return;
  }

  if (!count($form_state['values']['taxonomy']['manager']['tree']['selected_terms']) || !count($form_state['values']['taxonomy2']['manager']['tree']['selected_terms'])) {
    form_set_error('', t("No terms selected."));
    return;
  }

  $term1 = taxonomy_term_load(array_shift($form_state['values']['taxonomy']['manager']['tree']['selected_terms']));
  $term2 = taxonomy_term_load(array_shift($form_state['values']['taxonomy2']['manager']['tree']['selected_terms']));
  $voc = $form_state['values']['voc'];

  if (!i18n_taxonomy_vocabulary_mode($voc->vid, I18N_MODE_TRANSLATE)) {
    form_set_error('', t('This is not a multilingual vocabulary.'));
    return;
  }
  elseif ($term1->language == $term2->language) {
    form_set_error('', t("Selected terms are of the same language."));
    return;
  }
  elseif (!is_null(i18n_taxonomy_term_get_translation($term1, $term2->language)) ||
    !is_null(i18n_taxonomy_term_get_translation($term2, $term1->language))) {
    form_set_error('', t('A translation for this term or language already exists.'));
    return;
  }
  // Set the values for the submit handler.
  $values = [
    'term1' => $term1,
    'term2' => $term2,
    'voc' => $voc,
  ];
  form_set_value(['#parents' => ['double_tree_values']], $values, $form_state);
}

/**
 * Submit handler for adding a translation.
 */
function taxonomy_manager_double_tree_add_translation_submit($form, &$form_state) {
  $term1 = $form_state['values']['double_tree_values']['term1'];
  $term2 = $form_state['values']['double_tree_values']['term2'];
  $voc = $form_state['values']['double_tree_values']['voc'];

  taxonomy_manager_add_translation($term1, $term2, $voc);
  drupal_set_message(t("Translation for %term2 - %term1 added.", [
    '%term2' => $term2->name,
    '%term1' => $term1->name,
  ]));
}

/**
 * Helper function for adding a translation between two terms.
 */
function taxonomy_manager_add_translation($term1, $term2, $voc) {
  if (!module_exists('i18n_taxonomy')) {
    return;
  }
  if (!empty($term1->i18n_tsid)) {
    $translation_set = i18n_taxonomy_translation_set_load($term1->i18n_tsid);
  }
  else {
    // No translation set yet, build a new one with the source term.
    $translation_set = i18n_translation_set_create('taxonomy_term', $voc->machine_name)
      ->add_item($term1);
  }
  $translation_set->add_item($term2)->save();
}

/**
 * Duplicates a term to another voc.
 */
function taxonomy_manager_copy($tids, $from_voc, $to_voc, $selected_parents) {
  $new_tids = [];
  foreach ($tids as $tid) {
    $term = taxonomy_term_load($tid);
    $new_term = clone $term;
    unset($new_term->tid);
    $new_term->parent = count($selected_parents) ? $selected_parents : 0;
    $new_term->vid = $to_voc;

    // UUID integration: unset uuid on copy.
    if (isset($new_term->uuid)) {
      unset($new_term->uuid);
    }
    taxonomy_term_save($new_term);
    $new_tids[] = $new_term->tid;
  }
  taxonomy_manager_update_voc($to_voc, $selected_parents);
  taxonomy_terms_static_reset();
  return $new_tids;
}

/**
 * Changes vocabulary of given terms and its children
 * conflicts might be possible with multi-parent terms!
 */
function taxonomy_manager_switch($tids, $from_voc, $to_voc, $parents = []) {
  foreach ($tids as $tid) {
    // Hook to inform modules about the changes.
    module_invoke_all('taxonomy_manager_term', 'switch', $tid, $from_voc, $to_voc);

    $children = taxonomy_get_tree($from_voc, $tid);
    $terms_to_switch = [];
    foreach ($children as $child) {
      $terms_to_switch[] = $child->tid;
    }
    $terms_to_switch[] = $tid;

    db_update('taxonomy_term_data')
      ->fields(['vid' => $to_voc])
      ->condition('tid', $terms_to_switch, 'IN')
      ->execute();

    taxonomy_terms_static_reset();

    // Delete references to parents from the old voc.
    foreach ($children as $child) {
      $term_parents = taxonomy_get_parents($child->tid);
      foreach ($term_parents as $term_parent) {
        if ($term_parent->vid != $to_voc) {
          db_delete('taxonomy_term_hierarchy')
            ->condition('tid', $child->tid)
            ->condition('parent', $term_parent->tid)
            ->execute();
        }
      }
    }

    // Set parent of the selected term.
    if (!count($parents)) {
      $parents[0] = 0;
    }
    taxonomy_manager_move($parents, [$tid]);
    taxonomy_manager_update_voc($to_voc, $parents);
  }
  // @todo invoke update hook!!
  taxonomy_terms_static_reset();
}

/**
 * Checks if voc has terms.
 *
 * @param $vid
 *   voc id
 *
 * @return true, if terms already exists, else false
 */
function _taxonomy_manager_voc_is_empty($vid) {
  $has_rows = (bool) db_query_range("SELECT 1 FROM {taxonomy_term_data} t INNER JOIN {taxonomy_term_hierarchy} h ON t.tid = h.tid WHERE vid = :vid AND h.parent = 0", 0, 1, [':vid' => $vid])->fetchField();
  return !$has_rows;
}

/**
 * Deletes terms from the database
 * optional orphans (terms where parent get deleted) can be deleted as well
 *
 * (difference to taxonomy_term_delete: deletion of orphans optional)
 *
 * @param $tids
 *   array of term id to delete
 * @param $options
 *   associative array with options
 *   if $options['delete_orphans'] is true, orphans get deleted
 */
function taxonomy_manager_delete_terms($tids, $options = []) {
  $deleted_term = [];
  $remaining_child_terms = [];

  if (!is_array($tids)) {
    [$tids];
  }
  while (count($tids) > 0) {
    $orphans = [];
    foreach ($tids as $tid) {
      if ($children = taxonomy_get_children($tid)) {
        foreach ($children as $child) {
          $parents = taxonomy_get_parents($child->tid);
          if ($options['delete_orphans']) {
            if (count($parents) == 1) {
              $orphans[$child->tid] = $child->tid;
            }
            else {
              $remaining_child_terms[$child->tid] = $child;
            }
          }
          else {
            $remaining_child_terms[$child->tid] = $child;
            db_delete('taxonomy_term_hierarchy')
              ->condition('tid', $child->tid)
              ->condition('parent', $tid)
              ->execute();

            if (count($parents) == 1) {
              $is_root = (bool) db_query_range("SELECT 1 FROM {taxonomy_term_hierarchy} h WHERE h.tid = :tid AND h.parent = 0", 0, 1, [':tid' => $child->tid])->fetchField();
              if (!$is_root) {
                db_insert('taxonomy_term_hierarchy')
                  ->fields(['tid', 'parent'])
                  ->values(['tid' => $child->tid, 'parent' => 0])
                  ->execute();
              }
            }
          }
        }
      }

      $term = taxonomy_term_load($tid);
      if ($term) {
        $deleted_terms[] = $term;

        db_delete('taxonomy_term_data')
          ->condition('tid', $tid)
          ->execute();
        db_delete('taxonomy_term_hierarchy')
          ->condition('tid', $tid)
          ->execute();

        field_attach_delete('taxonomy_term', $term);
        module_invoke_all('taxonomy_term_delete', $term);

        // Reset cache after each deletion as it might affect parents/children information that is used later on.
        taxonomy_terms_static_reset();
      }
    }
    $tids = $orphans;
  }
  return [
    'deleted_terms' => $deleted_terms,
    'remaining_child_terms' => $remaining_child_terms,
  ];
}

/**
 * Moves terms in hierarchies to other parents.
 *
 * @param $parents
 *   Array of parent term ids to where children can be moved.
 *   Array should only contain more parents if multi hierarchy is enabled.
 *   If array contains 0, terms get moved to root level
 * @param $children
 *   Array of term ids to move
 * @param $options
 *   Array of additional options for moving
 *   'keep_old_parents': if true, existing parents does not get deleted (only
 *      possible with multi hierarchies).
 */
function taxonomy_manager_move($parents, $children, $options = []) {
  if (!is_array($parents)) {
    $parents = [$parents];
  }
  // Key parent terms array by tid, so that it is always unique.
  $keyed_array = [];
  foreach ($parents as $parent) {
    $keyed_array[$parent] = $parent;
  }
  $parents = $keyed_array;

  foreach ($children as $child) {
    $term = taxonomy_term_load($child);
    $term_parents = $parents;

    if (isset($options['keep_old_parents']) && $options['keep_old_parents']) {
      // Add existing parents to $term_parents array.
      $results = db_select('taxonomy_term_hierarchy', 'h')
        ->condition('tid', $child)
        ->fields('h')
        ->execute();
      foreach ($results as $p) {
        $term_parents[$p->parent] = $p->parent;
      }
    }
    $term->parent = $term_parents;
    taxonomy_term_save($term);
  }
  taxonomy_terms_static_reset();
}

/**
 * Helper function for getting out of term ids from autocomplete fields
 * non-exsiting terms get inserted autmatically
 * the input gets parsed for term names, optional a term id can be directly
 * passed with prefixing the input with 'term-id:'
 *
 * @param $typed_input
 *   input string of form field
 * @param $vid
 *   vocabulary id
 * @param $insert_new
 *   TRUE if non-existing terms should be inserted
 * @param $lang
 *   define the language (optional)
 *
 * @return array of term ids
 */
function taxonomy_manager_autocomplete_tags_get_tids($typed_input, $vid, $insert_new = TRUE, $lang = NULL) {
  $tids = [];

  $regexp = '%(?:^|,\ *)("(?>[^"]*)(?>""[^"]* )*"|(?: [^",]*))%x';
  preg_match_all($regexp, $typed_input, $matches);
  $typed_terms = array_unique($matches[1]);

  foreach ($typed_terms as $typed_term) {
    $typed_term = str_replace('""', '"', preg_replace('/^"(.*)"$/', '\1', $typed_term));
    $typed_term = trim($typed_term);
    if ($typed_term != "") {
      if (substr($typed_term, 0, 8) == "term-id:") {
        $id = substr($typed_term, 8);
        $term = taxonomy_term_load($id);
        if ($term->vid == $vid) {
          $tids[$term->tid]['tid'] = $term->tid;
        }
      }
      else {
        $possibilities = taxonomy_get_term_by_name($typed_term);
        // Tid match if any.
        $typed_term_tid = NULL;
        foreach ($possibilities as $possibility) {
          if ($possibility->vid == $vid && !($lang && $lang != $possibility->language)) {
            $typed_term_tid = $possibility->tid;
            $tids[$typed_term_tid]['tid'] = $typed_term_tid;
          }
        }

        if (!$typed_term_tid && $insert_new) {
          // Truncate long string names that will cause database exceptions.
          if (strlen($typed_term) > 255) {
            $typed_term = substr($typed_term, 0, 255);
          }
          $edit = new stdClass();
          $edit->name = $typed_term;
          $edit->vid = $vid;

          if (module_exists('i18n_taxonomy') && $lang != "" && i18n_taxonomy_vocabulary_mode($vid, I18N_MODE_TRANSLATE)) {
            $edit->language = $lang;
          }
          $status = taxonomy_term_save($edit);

          $typed_term_tid = $edit->tid;
          $tids[$typed_term_tid]['tid'] = $typed_term_tid;
          $tids[$typed_term_tid]['new'] = TRUE;
        }
      }
    }
  }
  return $tids;
}

/**
 * Similar to taxonomy_manager_autocomplete_tags_get_tids, but used for
 * searching terms takes synonyms and selected subtrees into account
 *
 * @param $typed_input
 *   input string of form field
 * @param $vid
 *   vocabulary id
 *   @param $include_synonyms TRUE if search should include synonyms
 * @param $parents
 *   array of parents
 *
 * @return array of term ids
 */
function taxonomy_manager_autocomplete_search_terms($typed_input, $vid, $include_synonyms = FALSE, $parents = [], $language = NULL) {
  $tids = [];

  if ($language != NULL && $language == "no language") {
    $language = "";
  }

  $regexp = '%(?:^|,\ *)("(?>[^"]*)(?>""[^"]* )*"|(?: [^",]*))%x';
  preg_match_all($regexp, $typed_input, $matches);
  $typed_terms = array_unique($matches[1]);

  foreach ($typed_terms as $typed_term) {
    $typed_term = str_replace('""', '"', preg_replace('/^"(.*)"$/', '\1', $typed_term));
    $typed_term = trim($typed_term);
    if ($typed_term == "") {
      continue;
    }
    // @todo
    /*if ($include_synonyms) {
    if ($language != NULL) {
    $search_sql = db_query("SELECT td.tid FROM {term_data} td LEFT JOIN {term_synonym} ts ON td.tid = ts.tid WHERE td.vid = %d AND (td.name = '%s' OR ts.name = '%s') AND td.language = '%s'", $vid, $typed_term, $typed_term, $language);
    }
    else {
    $search_sql = db_query("SELECT td.tid FROM {term_data} td LEFT JOIN {term_synonym} ts ON td.tid = ts.tid WHERE td.vid = %d AND (td.name = '%s' OR ts.name = '%s')", $vid, $typed_term, $typed_term);
    }

    }
    else {
    if ($language != NULL) {
    $search_sql = db_query("SELECT td.tid FROM {term_data} td WHERE td.vid = %d AND td.name = '%s' AND td.language = '%s'", $vid, $typed_term, $language);
    }
    else {
    $search_sql = db_query("SELECT td.tid FROM {term_data} td WHERE td.vid = %d AND td.name = '%s'", $vid, $typed_term);
    }
    }*/
    $terms = taxonomy_get_term_by_name($typed_term);
    foreach ($terms as $term) {
      if ($term->vid == $vid) {
        $tids[] = $term->tid;
      }
    }

    if (count($parents)) {
      $filtered_tids = [];
      foreach ($tids as $tid) {
        $parents_all = taxonomy_get_parents_all($tid);
        foreach ($parents_all as $key => $parent) {
          if (in_array($parent->tid, $parents)) {
            $filtered_tids[] = $tid;
            break;
          }
        }
      }
      $tids = $filtered_tids;
    }

  }
  return $tids;
}

/**
 * Callback for updating weights
 * data send through AJAX, $_POST
 * $_POST[$tid] => $weight
 */
function taxonomy_manager_update_weights() {
  $submitted_data = $_POST;
  if (isset($submitted_data['form_token']) && isset($submitted_data['form_id']) && !empty($submitted_data['weights']) && is_array($submitted_data['weights'])) {
    if (drupal_valid_token($submitted_data['form_token'], $submitted_data['form_id'])) {
      foreach ($submitted_data['weights'] as $tid => $weight) {
        if (is_numeric($tid) && is_numeric($weight)) {
          $term = taxonomy_term_load($tid);
          $term->weight = $weight;
          taxonomy_term_save($term);
        }
      }
    }
  }
  exit();
}

/**
 * Submit handler for the export form.
 */
function taxonomy_manager_export_form_submit($form, &$form_state) {
  $voc = $form_state['values']['voc'];

  $selected_tids = $selected_tids = $form_state['values']['taxonomy']['manager']['tree']['selected_terms'];
  $selected_tid = count($selected_tids) ? array_pop($selected_tids) : 0;

  $options = $form_state['values']['export'];
  $options['depth'] = !empty($options['depth']) ? $options['depth'] : NULL;

  $tree = taxonomy_manager_export_get_tree($voc->vid, $selected_tid, $options['depth'], $options['scope']);
  $data = '';
  $arguments = [
    $tree,
  ];
  if ($options['format'] == 'csv') {
    $arguments[] = $options['csv']['delimiter'];
    if (isset($options['export_with_uuid'])) {
      $arguments[] = $options['export_with_uuid'];
    }
    $data = call_user_func_array('taxonomy_manager_export_csv', $arguments);
  }
  elseif ($options['format'] == 'term_tree') {
    if (isset($options['export_with_uuid'])) {
      $arguments[] = $options['export_with_uuid'];
    }
    $data = call_user_func_array('taxonomy_manager_export_term_tree', $arguments);
  }

  $form_state['values']['export']['data'] = $data;
  $form_state['rebuild'] = TRUE;
}

/**
 * Ajax handler for the export form.
 */
function taxonomy_manager_export_ajax_callback($form, $form_state) {
  return $form['export']['data'];
}

/**
 * Generates the CVS Ouput.
 */
function taxonomy_manager_export_csv($tree, $delimiter = ";", $export_with_uuid = FALSE) {
  $output = "";
  foreach ($tree as $term) {
    $array = [];
    $array[] = '"' . $term->vid . '"';
    $array[] = '"' . $term->tid . '"';
    if ($export_with_uuid) {
      $array[] = '"' . $term->uuid . '"';
    }
    $array[] = '"' . $term->name . '"';
    $array[] = '"' . $term->description . '"';
    foreach ($term->parents as $parent) {
      $array[] = '"' . $parent . '"';
    }
    $output .= implode($delimiter, $array) . "\n";
  }
  return $output;
}

/**
 * Generates term tree export that prefixes child term with dashes.
 *
 * The same format can be used for importing terms (see Add button).
 */
function taxonomy_manager_export_term_tree($tree, $export_with_uuid = FALSE) {
  $output = "";
  foreach ($tree as $term) {
    // If a term already starts with dashes, we have to escape the name.
    if (substr($term->name, 0, 1) == '-') {
      $name = '"' . $term->name . '"';
    }
    else {
      if ($export_with_uuid) {
        $name = $term->name . '|' . $term->uuid;
      }
      else {
        $name = $term->name;
      }
    }
    $output .= str_repeat('-', $term->depth) . $name . "\n";
  }
  return $output;
}

/**
 * Helper for loading the tree to export.
 */
function taxonomy_manager_export_get_tree($vid, $selected_tid, $depth, $scope) {
  $tree = [];

  if ($scope == 'whole_voc') {
    $tree = taxonomy_get_tree($vid, 0, $depth);
  }
  elseif ($scope == 'children' && $selected_tid) {
    $tree = taxonomy_get_tree($vid, $selected_tid, $depth);
  }
  elseif ($scope == 'root_terms') {
    $tree = taxonomy_get_tree($vid, 0, 1);
  }
  return $tree;
}

/**
 * Helper function that updates the hierarchy settings of a voc.
 */
function taxonomy_manager_update_voc($vid, $parents = []) {
  $voc = taxonomy_vocabulary_load($vid);
  if ($voc->vid == $vid) {
    $current_hierarchy = count($parents);
    if ($current_hierarchy > 2) {
      $current_hierarchy = 2;
    }
    if ($current_hierarchy > $voc->hierarchy) {
      $voc->hierarchy = $current_hierarchy;
      taxonomy_vocabulary_save($voc);
    }
  }
}

/**
 * Retrieve a pipe delimited string of autocomplete suggestions (+synonyms)
 */
function taxonomy_manager_autocomplete_load($vid, $tags_typed = '') {
  // If the request has a '/' in the search text, then the menu system will have
  // split it into multiple arguments, recover the intended $tags_typed.
  $args = func_get_args();
  // Shift off the $field_name argument.
  array_shift($args);
  $tags_typed = implode('/', $args);

  // The user enters a comma-separated list of tags. We only autocomplete the last tag.
  $tags_typed = drupal_explode_tags($tags_typed);
  $last_string = drupal_strtolower(array_pop($tags_typed));

  $matches = [];
  if ($last_string != '') {
    $query = db_select('taxonomy_term_data', 't');
    $query->addTag('translatable');
    $query->addTag('term_access');

    // Do not select already entered terms.
    if (!empty($tags_typed)) {
      $query->condition('t.name', $tags_typed, 'NOT IN');
    }
    // Select rows that match by term name.
    $tags_return = $query
      ->fields('t', ['tid', 'name'])
      ->condition('t.vid', $vid)
      ->condition('t.name', '%' . db_like($last_string) . '%', 'LIKE')
      ->range(0, 30)
      ->execute()
      ->fetchAllKeyed();

    $prefix = count($tags_typed) ? drupal_implode_tags($tags_typed) . ', ' : '';

    $matches = [];
    foreach ($tags_return as $tid => $name) {
      $n = $name;
      // Term names containing commas or quotes must be wrapped in quotes.
      if (strpos($name, ',') !== FALSE || strpos($name, '"') !== FALSE) {
        $n = '"' . str_replace('"', '""', $name) . '"';
      }
      // Add term name to list of matches.
      $matches[$prefix . $n] = check_plain($name);
    }
  }

  drupal_json_output($matches);
}

/**
 * Theme function for taxonomy manager form.
 */
function theme_taxonomy_manager_form($variables) {
  $form = $variables['form'];
  $pager = theme('pager');
  $tree = drupal_render($form['taxonomy']);
  $term_data = drupal_render($form['term_data']);
  $top = drupal_render_children($form);
  $output = $top . $pager;
  $output .= '<div id="taxonomy-manager" class="admin clear-block">';
  $output .= '<div id="taxonomy-manager-tree-outer-div" class="left clear-block">';
  $output .= $tree;
  $output .= '</div>';
  $output .= '<div id="taxonomy-term-data" class="right clear-block">';
  $output .= $term_data;
  $output .= '</div>';
  $output .= '</div>';
  return $output;
}

/**
 * Theme function for taxonomy manager form.
 */
function theme_taxonomy_manager_double_tree_form($variables) {
  $form = $variables['form'];

  $pager = theme('pager');
  $tree1 = drupal_render($form['taxonomy']);
  $tree2 = drupal_render($form['taxonomy2']);
  $operations = drupal_render($form['double-tree']);
  $term_data = drupal_render($form['term_data']);
  $top = drupal_render_children($form);
  $output = $top . $pager;
  $output .= '<div id="taxonomy-manager" class="admin clear-block">';
  $output .= '<div id="taxonomy-manager-tree-outer-div" class="left clear-block">';
  $output .= $tree1;
  $output .= '</div>';

  $output .= '<div id="taxonomy-manager-double-tree-operations">';
  $output .= $operations;
  $output .= '</div>';

  $output .= '<div id="taxonomy2-manager-tree-outer-div" class="left clear-block">';
  $output .= $tree2;
  $output .= '</div>';
  $output .= '<div id="taxonomy-term-data" class="term-data-overlay">';
  $output .= $term_data;
  $output .= '</div>';
  $output .= '</div>';

  return $output;
}

/**
 * Themes a real button form type (no form submit)
 */
function theme_no_submit_button($variables) {
  $element = $variables['element'];
  /* Make sure not to overwrite classes.
  if (isset($element['#attributes']['class'])) {
  $element['#attributes']['class'][] = 'form-'. $element['#button_type'] .' '. $element['#attributes']['class'];
  }
  else {
  $element['#attributes']['class'][] = 'form-'. $element['#button_type'];
  }*/
  return '<input type="button" ' . (empty($element['#name']) ? '' : 'name="' . $element['#name'] . '" ') . 'id="' . $element['#id'] . '" value="' . check_plain($element['#value']) . '" ' . drupal_attributes($element['#attributes']) . " />\n";
}

/**
 * Themes a image type button.
 */
function theme_taxonomy_manager_image_button($element) {

  // @todo still used?
  // Make sure not to overwrite classes
  if (isset($element['#attributes']['class'])) {
    $element['#attributes']['class'] = 'form-' . $element['#button_type'] . ' ' . $element['#attributes']['class'];
  }
  else {
    $element['#attributes']['class'] = 'form-' . $element['#button_type'];
  }

  // Here the novelty begins: check if #button_type is normal submit button or image button.
  $return_string = '<input ';
  if ($element['#button_type'] == 'image') {
    $return_string .= 'type="image" ';
  }
  else {
    $return_string .= 'type="submit" ';
  }
  $return_string .= (empty($element['#id']) ? '' : 'id="' . $element['#id'] . '" ');
  $return_string .= (empty($element['#name']) ? '' : 'name="' . $element['#name'] . '" ');
  $return_string .= 'value="' . check_plain($element['#value']) . '" ';
  $return_string .= drupal_attributes($element['#attributes']) . " />\n";

  return $return_string;

}

/**
 *
 */
function theme_taxonomy_manager_term_data_extra($variables) {
  $element = $variables['element'];

  $rows = [];
  $headers = [];
  foreach (element_children($element['headers']) as $key) {
    if (is_array($element['headers'][$key])) {
      $headers[] = drupal_render($element['headers'][$key]);
    }
  }
  foreach (element_children($element['data']) as $tid) {
    $row = [];
    foreach (element_children($element['data'][$tid]) as $key) {
      if (is_array($element['data'][$tid][$key])) {
        $row[] = [
          'data' => drupal_render($element['data'][$tid][$key]) . drupal_render($element['data'][$tid][$key]['tid']),
          'class' => $element['data'][$tid][$key]['#row-class'] ?? '',
        ];
      }
    }
    $rows[] = $row;
  }
  $row = [];
  foreach (element_children($element['op']) as $key) {
    if (is_array($element['op'][$key])) {
      // $row[] = drupal_render($element['op'][$key]);
      $row[] = [
        'data' => drupal_render($element['op'][$key]),
        'class' => $element['op'][$key]['#row-class'] ?? '',
      ];
    }
  }
  $rows[] = $row;
  return theme('table', ['header' => $headers, 'rows' => $rows]);
}
