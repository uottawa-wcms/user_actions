(function($) {
  $(document).ready(function() {
    $('div.action-list').each(function() {
      $(this).prepend('<ul class="primary-actions"><li class="full-action-hotspot">&#9662;</li></ul>');
      $(this).find('ul.primary-actions').prepend($(this).find('li.primary-action'));
      $(this).find('li.full-action-hotspot').append($(this).find('ul.all-actions'));
      $(this)
        .removeClass('action-list-no-js')
        .addClass('action-list-js');
    });
  });
})(jQuery);