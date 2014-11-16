<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column 25/75'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_25_75.png',
  'theme' => 'panels_twocol_25_75',
  'css' => 'twocol-25-75.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
