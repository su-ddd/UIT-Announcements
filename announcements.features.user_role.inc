<?php
/**
 * @file
 * announcements.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function announcements_user_default_roles() {
  $roles = array();

  // Exported role: Announcements Editor.
  $roles['Announcements Editor'] = array(
    'name' => 'Announcements Editor',
    'weight' => 101,
  );

  // Exported role: Announcements Publisher.
  $roles['Announcements Publisher'] = array(
    'name' => 'Announcements Publisher',
    'weight' => 144,
  );

  return $roles;
}
