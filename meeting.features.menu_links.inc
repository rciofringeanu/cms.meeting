<?php
/**
 * @file
 * meeting.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function meeting_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_meeting-kind-types:admin/structure/taxonomy/meeting_kind
  $menu_links['main-menu_meeting-kind-types:admin/structure/taxonomy/meeting_kind'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/meeting_kind',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Meeting kind types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meeting-kind-types:admin/structure/taxonomy/meeting_kind',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_identifier' => 'main-menu_meetings:<front>',
  );
  // Exported menu link: main-menu_meeting-status-types:admin/structure/taxonomy/meeting_status
  $menu_links['main-menu_meeting-status-types:admin/structure/taxonomy/meeting_status'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/meeting_status',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Meeting status types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meeting-status-types:admin/structure/taxonomy/meeting_status',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_identifier' => 'main-menu_meetings:<front>',
  );
  // Exported menu link: main-menu_meeting-types:admin/structure/taxonomy/meeting_type
  $menu_links['main-menu_meeting-types:admin/structure/taxonomy/meeting_type'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/meeting_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Meeting types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meeting-types:admin/structure/taxonomy/meeting_type',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_identifier' => 'main-menu_meetings:<front>',
  );
  // Exported menu link: main-menu_meetings:<front>
  $menu_links['main-menu_meetings:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meetings:<front>',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '14',
  );
  // Exported menu link: main-menu_view-meetings:meeting/listing
  $menu_links['main-menu_view-meetings:meeting/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meeting/listing',
    'router_path' => 'meeting/listing',
    'link_title' => 'View meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-meetings:meeting/listing',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_identifier' => 'main-menu_meetings:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Meeting kind types');
  t('Meeting status types');
  t('Meeting types');
  t('Meetings');
  t('View meetings');


  return $menu_links;
}
