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
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => '1',
      'quota' => '2',
      'tuquota' => '0',
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => '1',
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
    3 => array(
      'name' => 'redaktor',
      'usertab' => 0,
      'filesize' => '1',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => 'gif png jpg jpeg svg',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'imce/u%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    5 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    4 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    10 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    7 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    12 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    6 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    3 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    13 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    15 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    16 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    14 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    8 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    9 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    17 => array(
      'weight' => '0',
      'public_pid' => '3',
    ),
    18 => array(
      'weight' => '0',
      'public_pid' => 0,
    ),
    2 => array(
      'weight' => 11,
      'public_pid' => 0,
    ),
    1 => array(
      'weight' => 12,
      'public_pid' => 0,
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
