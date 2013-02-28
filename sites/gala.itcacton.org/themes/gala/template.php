<?php

function gala_preprocess_page(&$vars) {
  unset($vars['closure']);
}