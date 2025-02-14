<?php

/**
 * @file
 * rs_beliana_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rs_beliana_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '90';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'dimensions' => '1200x1200',
      'directories' => array(
        0 => array(
          'browse' => 1,
          'delete' => 1,
          'name' => '.',
          'resize' => 1,
          'subnav' => 1,
          'thumb' => 1,
          'upload' => 1,
        ),
      ),
      'extensions' => '*',
      'filenum' => 0,
      'filesize' => 0,
      'name' => 'User-1',
      'quota' => 0,
      'thumbnails' => array(
        0 => array(
          'dimensions' => '90x90',
          'name' => 'Small',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'dimensions' => '120x120',
          'name' => 'Medium',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'dimensions' => '180x180',
          'name' => 'Large',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
      'tuquota' => 0,
      'usertab' => 1,
    ),
    2 => array(
      'dimensions' => '800x600',
      'directories' => array(
        0 => array(
          'browse' => 1,
          'delete' => 1,
          'name' => 'u%uid',
          'resize' => 0,
          'subnav' => 0,
          'thumb' => 0,
          'upload' => 1,
        ),
      ),
      'extensions' => 'gif png jpg jpeg',
      'filenum' => '1',
      'filesize' => '1',
      'name' => 'Sample profile',
      'quota' => '2',
      'thumbnails' => array(
        0 => array(
          'dimensions' => '90x90',
          'name' => 'Thumb',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
      'tuquota' => '0',
      'usertab' => 1,
    ),
    3 => array(
      'dimensions' => '0',
      'directories' => array(
        0 => array(
          'browse' => 1,
          'delete' => 1,
          'name' => 'imce/u%uid',
          'resize' => 0,
          'subnav' => 1,
          'thumb' => 1,
          'upload' => 1,
        ),
      ),
      'extensions' => 'gif png jpg jpeg svg',
      'filenum' => '0',
      'filesize' => '1',
      'name' => 'redaktor',
      'quota' => '0',
      'thumbnails' => array(
        0 => array(
          'dimensions' => '90x90',
          'name' => 'Thumb',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
      'tuquota' => '0',
      'usertab' => 0,
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    1 => array(
      'public_pid' => 0,
      'weight' => 12,
    ),
    2 => array(
      'public_pid' => 0,
      'weight' => 11,
    ),
    3 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    4 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    5 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    6 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    7 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    8 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    9 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    10 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    12 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    13 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    14 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    15 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    16 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    17 => array(
      'public_pid' => '3',
      'weight' => '0',
    ),
    18 => array(
      'public_pid' => 0,
      'weight' => '0',
    ),
  );
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;
  $export['imce_settings_absurls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_disable_private';
  $strongarm->value = 1;
  $export['imce_settings_disable_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';
  $export['imce_settings_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';
  $export['imce_settings_textarea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';
  $export['imce_settings_thumb_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mathjax_cdn_url';
  $strongarm->value = 'https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.0/MathJax.js?config=TeX-AMS-MML_HTMLorMML';
  $export['mathjax_cdn_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mathjax_config_string';
  $strongarm->value = 'MathJax.Hub.Config(
{
  	"HTML-CSS": {
    		preferredFont: "STIX",
		scale: 85
  	},
         CommonHTML: {
    		scale: 85
  	},
  	SVG: {
    		font: "STIX-Web",
    		scale: 85
  	},
	TeX: {
    		extensions: ["extpfeil.js"],
    		extensions: ["mhchem.js"],
  		Macros: {
     			RR: "{\\\\bf R}",
			bold: ["{\\\\ce{#1}}",1],
     			mc: ["{\\\\require{mhchem} \\\\mathsf{\\\\ce{#1}}}",1] 
    		}
	}
}
);';
  $export['mathjax_config_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mathjax_config_type';
  $strongarm->value = '1';
  $export['mathjax_config_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mathjax_use_cdn';
  $strongarm->value = 1;
  $export['mathjax_use_cdn'] = $strongarm;

  return $export;
}
