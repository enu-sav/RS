<?php

/**
 * @file
 * Drush commands file.
 */

/**
 * Implements hook_drush_command().
 */
function beliana_sync_drush_command() {
  $items = [];
  $items['extract-links'] = [
    'aliases' => ['bel-el'],
    'description' => 'Extract links from word body field.',
  ];
  return $items;
}

/**
 * Main command callback.
 */
function drush_beliana_sync_extract_links() {
  $entity_list = db_select('node', 'n')
    ->fields('n', ['nid'])
    ->condition('type', ['heslo', 'importovane_heslo'], 'IN')
    ->execute()
    ->fetchCol(0);
  $chunks = array_chunk($entity_list, 10);
  $total = count($entity_list);
  $progress = 0;
  $operations = array();
  foreach ($chunks as $chunk) {
    $progress += count($chunk);
    $operations[] = array(
      '_drush_beliana_sync_extract_links_process',
      array(
        $chunk,
        dt('@percent% (Processing @progress of @total)', array(
          '@percent' => round(100 * $progress / $total),
          '@progress' => $progress,
          '@total' => $total,
        ))
      ),
    );
  }
  $batch = array(
    'operations' => $operations,
    'title' => dt('Extracting links from nodes'),
    'finished' => '_drush_beliana_sync_extract_links_finished',
    'progress_message' => dt('@current entities of @total were processed.'),
  );
  // Get the batch process all ready!
  batch_set($batch);
  // Start processing the batch operations.
  drush_backend_batch_process();
}

/**
 * Helper function to process a batch.
 *
 * @param array $chunk
 *   The array of entity_ids.
 * @param string $details
 *   A feedback message to be sent to the user.
 * @param array $context
 *   This param is added automatically by drush. It is used to interact with the
 *   process executing the batches.
 */
function _drush_beliana_sync_extract_links_process($chunk, $details, &$context) {
  $context['message'] = $details;
  // Make sure to only initialize the results the first time.
  if (!isset($context['results']['success'])) {
    $context['results']['success'] = $context['results']['error'] = 0;
  }
  foreach ($chunk as $item) {
    $success = _drush_beliana_sync_extract_links_prepare($item);
    $success ? $context['results']['success']++ : $context['results']['error']++;
  }
}

/**
 * Helper function to process single item from chunk.
 *
 * @param int $nid
 *   Node ID.
 *
 * @return bool
 *   FALSE if node with provided $nid wasn't find, otherwise TRUE.
 */
function _drush_beliana_sync_extract_links_prepare($nid) {
  $generic_node = node_load($nid);
  if ($generic_node === FALSE) {
    return FALSE;
  }
  $node = workbench_moderation_node_current_load($generic_node);
  if ($node === FALSE) {
    return FALSE;
  }
  beliana_sync_process_links($node->nid, $node->field_text_hesla[LANGUAGE_NONE][0]['value']);
  return TRUE;
}

/**
 * This callback is called when the batch process finishes.
 */
function _drush_beliana_sync_extract_links_finished($success, $results, $operations) {
  if ($success) {
    // Let the user know we have finished.
    drush_log(dt('@succeeded entities were processed correctly. @errored entities failed.', array(
      '@succeeded' => empty($results['success']) ? 0 : $results['success'],
      '@errored' => empty($results['error']) ? 0 : $results['error'],
    )), 'ok');
  }
}
