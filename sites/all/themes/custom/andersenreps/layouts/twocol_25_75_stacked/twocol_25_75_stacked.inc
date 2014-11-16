<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column 25/75 stacked'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_25_75_stacked.png',
  'theme' => 'panels_twocol_25_75_stacked',
  'css' => 'twocol_25_75_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
