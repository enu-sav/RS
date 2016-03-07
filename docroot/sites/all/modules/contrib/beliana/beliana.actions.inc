<?php

/**
 * Implements hook_action_info().
 *
 * @inheritdoc
 */
function beliana_action_info() {
  return array(
    'beliana_merge' => array(
      'type' => 'entity',
      'label' => t('Merge'),
      'configurable' => FALSE,
      'triggers' => array('any'),
      'behavior' => array('create_property'),
      'vbo_configurable' => FALSE,
      'pass rows' => TRUE,
    ),
    'beliana_assign_author' => array(
      'type' => 'entity',
      'label' => t('Určiť autora a priradiť autorovi'),
      'configurable' => TRUE,
      'triggers' => array('any'),
      'behavior' => array('create_property'),
      'vbo_configurable' => FALSE,
      'pass rows' => TRUE,
    ),
    'beliana_assign_corrector' => array(
      'type' => 'entity',
      'label' => t('Určiť autora a priradiť redaktorovi'),
      'configurable' => TRUE,
      'triggers' => array('any'),
      'behavior' => array('create_property'),
      'vbo_configurable' => FALSE,
      'pass rows' => TRUE,
    ),
  );
}

/**
 * Configuration form for `beliana_assign_author` action.
 *
 * @param $form
 * @param $form_state
 * @return array
 */
function beliana_assign_author_form($form, &$form_state) {
  return _beliana_assign_user_form();
}

/**
 * Validation for `beliana_assign_author_form`.
 *
 * @param $form
 * @param $form_state
 */
function beliana_assign_author_validate($form, &$form_state) {
  _beliana_validate_assign_user_form($form_state);
}

/**
 * Submit function for `beliana_assign_author_form`.
 *
 * @param $form
 * @param $form_state
 * @return array
 */
function beliana_assign_author_submit($form, $form_state) {
  return _beliana_submit_assign_user_form($form_state, 'u_autora');

}

/**
 * Callback for `beliana_assign_author` action.
 * Assigns selected user as node author and changes workflow status to `u_autora`.
 *
 * @param $node
 * @param $context
 * @throws \Exception
 */
function beliana_assign_author(&$node, $context) {
  _beliana_assign_user($node, $context);
}

/**
 * Configuration form for `beliana_assign_corrector` action.
 *
 * @param $form
 * @param $form_state
 * @return array
 */
function beliana_assign_corrector_form($form, &$form_state) {
  return _beliana_assign_user_form();
}

/**
 * Validation for `beliana_assign_corrector_form` form.
 *
 * @param $form
 * @param $form_state
 */
function beliana_assign_corrector_validate($form, &$form_state) {
  _beliana_validate_assign_user_form($form_state);

}

/**
 * Submit function for for `beliana_assign_corrector_form` form.
 *
 * @param $form
 * @param $form_state
 * @return array
 */
function beliana_assign_corrector_submit($form, $form_state) {
  return _beliana_submit_assign_user_form($form_state, 'needs_review');
}

/**
 * Callback function for `beliana_assign_corrector` action.
 * Assigns selected user as node author and change workflow status to `needs_review`.
 *
 * @param $node
 * @param $context
 * @throws \Exception
 */
function beliana_assign_corrector(&$node, $context) {
  _beliana_assign_user($node, $context);
}

/**
 * Callback function for `beliana_merge` action.
 *
 * @see beliana_action_info.
 * @param $entity
 * @param array $context
 * @throws \Exception
 */
function beliana_merge(&$entity, $context = array()) {
  // If current entity is the first one, create new entity `Heslo` and store its nid into session.
  if ($context['progress']['current'] === 1) {
    $master = new stdClass();
    $master->type = 'heslo';
    node_object_prepare($master);
    $master->title = $entity->title;
    $master->field_text_hesla = array(
      LANGUAGE_NONE => array(
        array(
          'value' => '',
          'format' => 'filtered_html',
        ),
      ),
    );
    $master->field_taxsubor = $entity->field_taxsubor;
    $master->language = 'sk';
    node_save($master);
    $_SESSION['master'] = $master->nid;
  }

  // Load master entity from session.
  $master = node_load($_SESSION['master']);

  // If master entity found, copy fields from current entity into it.
  if ($master != FALSE) {
    $master->field_text_hesla[LANGUAGE_NONE][0]['value'] .= $entity->field_text_hesla[LANGUAGE_NONE][0]['value'];

    if (!empty($entity->field_image)) {
      foreach ($entity->field_image[LANGUAGE_NONE] as $img) {
        $master->field_image[LANGUAGE_NONE][] = $img;
      }

      foreach ($entity->field_text_k_ilustraciam[LANGUAGE_NONE] as $text) {
        $master->field_text_k_ilustraciam[LANGUAGE_NONE][] = $text;
      }
    }

    $master->field_zlucene_z[LANGUAGE_NONE][]['target_id'] = $entity->nid;

    $master->field_autor_povodneho_textu[LANGUAGE_NONE][]['target_id'] = $entity->uid;


    foreach ($entity->field_lexikalna_skupina[LANGUAGE_NONE] as $ls) {
      $parents = taxonomy_get_parents_all($ls['tid']);
      foreach ($parents as $parent) {
        if (count(taxonomy_get_parents_all($parent->tid)) == 1) {
          $top_parent = $parent;
        }
      }

      $found = FALSE;
      foreach ($master->field_spravit_1_korekturu[LANGUAGE_NONE] as $tid) {
        if ($tid['tid'] === $top_parent->tid) {
          $found = TRUE;
        }
      }
      if (!$found) {
        $master->field_spravit_1_korekturu[LANGUAGE_NONE][]['tid'] = $top_parent->tid;
        $master->field_povodne_lexikalne_skupiny[LANGUAGE_NONE][]['tid'] = $top_parent->tid;
      }
    }
    node_save($master);

    $entity->field_zlucene_do[LANGUAGE_NONE][0]['target_id'] = $_SESSION['master'];
    node_save($entity);
    workbench_moderation_moderate($entity, 'ukoncenezluene');
  }

  // If current entity is the last, make workflow transition.
  if ($context['progress']['current'] === $context['progress']['total']) {
    $master = node_load($_SESSION['master']);
    $term = array_shift(taxonomy_get_term_by_name('Zlúčené heslo', 'lexikalne_skupiny'));
    $master->field_lexikalna_skupina[LANGUAGE_NONE][]['tid'] = $term->tid;
    node_save($master);
    workbench_moderation_moderate($master, 'zlucene');
    $_SESSION['master'] = NULL;
  }
}