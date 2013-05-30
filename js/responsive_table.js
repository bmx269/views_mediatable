(function($) {
  Drupal.behaviors.views_mediatable = {
    attach: function (context, settings) {

      // Enables the plugin on tables with the class ".responsive-table".
      $('table.responsive-table').mediaTable();

    }
  };
})(jQuery);