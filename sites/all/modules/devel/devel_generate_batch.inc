<?php
// $Id: devel_generate_batch.inc,v 1.1.2.2 2008/05/14 16:34:19 douggreen Exp $

/**
 * Devel Generate batch handling functions using the BatchAPI
 * included by devel_generate.module
 */

/**
 * Functions called from FAPI:
 */

function devel_batch_generate_content($num_nodes, $num_comments, $title_length, $kill_content, $add_upload, $add_terms, $add_alias, $node_types) {
  $operations = array();

  // Setup the batch operations and save the variables.
  $vars = compact('num_comments', 'title_length', 'add_upload', 'add_terms', 'add_alias', 'node_types');
  $operations[] = array('devel_batch_generate_content_pre_node', array($vars));

  // add the kill operation
  if ($kill_content) {
    $operations[] = array('devel_batch_generate_content_kill', array());
  }

  // add the operations to create the nodes
  for ($num = 0; $num < $num_nodes; $num ++) {
    $operations[] = array('devel_batch_generate_content_add_node', array());
  }

  // start the batch
  $batch = array(
    'title' => t('Generating Content'),
    'operations' => $operations,
    'finished' => 'devel_generate_batch_finished',
  );
  batch_set($batch);
}

/**
 * Create Content Batch Functions:
 */

function devel_batch_generate_content_kill(&$context) {
  require_once('devel_generate.inc');
  devel_generate_content_kill($context['results']);
}

function devel_batch_generate_content_pre_node($vars, &$context) {
  $context['results'] = $vars;
  $context['results']['num_nids'] = 0;
  require_once('devel_generate.inc');
  devel_generate_content_pre_node($context['results']);
}

function devel_batch_generate_content_add_node(&$context) {
  require_once('devel_generate.inc');
  devel_generate_content_add_node($context['results']);
  $context['results']['num_nids'] ++;
}

function devel_generate_batch_finished($success, $results, $operations) {
  if ($success) {
    $message = t('Finished @num_nids nodes created successfully.', array('@num_nids' => $results['num_nids']));
  }
  else {
    $message = t('Finished with an error.');
  }
  drupal_set_message($message);
}

