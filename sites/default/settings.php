<?php
 
/**
 * Core Drupal settings.
 */
$update_free_access = FALSE;
$drupal_hash_salt = 'dUZWRLmtjsrd1y1na4J1sx5nBCqX4l22o0NYsiWyPMY';
 
/**
 * Needed PHP setting tweaks.
 */
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);
 
/**
 * Fast 404 configuration.
 */
$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1>The requested URL "@path" was not found on this server</p></body&gt</htm>';
 
/**
 * Secret settings file for local development only.
 *
 * This file should NEVER be committed to version control and should never exist
 * on a non-local development machine.
 */
if (file_exists('./' . conf_path() . '/secret.settings.php')) {
  require './' . conf_path() . '/secret.settings.php';
}