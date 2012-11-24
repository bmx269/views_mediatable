<?php

class views_plugin_style_mediatable_table extends views_plugin_style_table {



  function option_definition() {
    $options = parent::option_definition();
    $options['responsive'] = array('default'  => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['responsive'] = array(
       '#type' => 'select',
       '#title' => t('Responsive'),
       '#options' => array(
         0 => t('Persistent'),
         1 => t('Essential'),
         2 => t('Optional'),
       ),
   );
  }


  function query() {
    parent::query();
    $field = $_GET['order'];
    $sort = $_GET['sort'];
    if ($this->view->display_handler->display->display_options['style_options']['essential'] && $field && $sort) {
      $base_table = $this->view->query->base_table;
      $this->view->query->orderby[0] = $base_table . '_' . $field . '+0 ' . $sort;
      $this->view->query->orderby[1] = $base_table . '_' . $field . ' ' . $sort;
    }
  }

}


// modify $header_classes[$field]