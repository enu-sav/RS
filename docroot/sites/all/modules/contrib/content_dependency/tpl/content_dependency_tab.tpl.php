<?php 

/**
 * @file
 * Primarily implementation content dependency tab theme.
 * 
 * Using variables "$variables['content_dependency_values_array']" &
 *   "$variables['content_dependency_settings_array']".
 */

if (!empty($variables['content_dependency_values_array'])): ?>
  <div id="content_dependency_full_container" class="vertical-tabs clearfix">
    <div class="main_header_title" title="
      <?php print t('All dependent content which refer to current content'); ?>"
        alt="<?php print t('All dependent content which refer to current content'); ?>" >
          <?php print t('Content Dependency'); ?>
    </div>

    <div id="content_dependency_form_body_entity"> <?php
      foreach ($variables['content_dependency_values_array'] as $entity_type_key => $entity_type_value):
        if (!empty($entity_type_value)):
          foreach ($entity_type_value as $key => $value):
          ?>
            <h4>
              <span class="category_name">
                <?php print $value['general_settings']['entity_type_label_prefix']; ?>
                <?php print $value['general_settings']['name']; ?>
                (<?php print $value['general_settings']['count']; ?>)
              </span>

              <span class="add_more_content" onclick="
          	    window.open(jQuery(this).find(' a').attr('href'),
          	    '<?php $variables['content_dependency_settings_array']['href']['attributes']['target']; ?>
          	    ');return false;"> 
          	    ( 
          	    <?php print l(t('Add new'), $value['general_settings']['entity_href_add_prefix'] . $key .
                  $value['general_settings']['entity_href_add_suffix'], array(
                    'attributes' => array(
                      'target' => $variables['content_dependency_settings_array']['href']['attributes']['target']))); ?>
          	     )
          	  </span>            
            </h4>
            <?php if (!empty($value['values'])): ?>
              <ol class="content_dependency_new_content_type">
              <?php foreach ($value['values'] as $entity): ?>
                <li class="content_row">
                  Edit <?php print l($entity['title'],
                    $value['general_settings']['entity_href_edit_prefix'] .
                    '/' . $entity['id'] . '/edit', array(
                      'attributes' => array(
                        'target' => $variables['content_dependency_settings_array']['href']['attributes']['target']))); ?>              
                </li> <?php
              endforeach;

              print '</ol>';
            endif;
          endforeach;
        endif;
      endforeach; ?>
    </div>

  <?php else: ?>
    <div id="empty_content_dependency_content">
      <h3>
        <?php print t('There is no content dependency for this content'); ?>
      </h3>
      <p>
        <?php print t('You can') . ' ' . l(t('click here'), 'node/' .
          $variables['content_dependency_settings_array']['current_entity']['entity_id'] . '/edit',
          array('attributes' => array('target' => '_self'))) .
          ' ' . t('to edit current') . ' ' .
          $variables['content_dependency_settings_array']['current_entity']['entity_type'] . '.'; ?>
      </p>
    </div>

  </div>
<?php endif;
