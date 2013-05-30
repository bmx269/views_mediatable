(function($) {
  Drupal.behaviors.views_mediatable = {
    attach: function (context, settings) {

      //code starts
      $('table.responsive-table').mediaTable();
      //code ends

    }
  };
})(jQuery);