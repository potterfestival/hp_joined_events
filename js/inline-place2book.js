/**
 * @file
 *
 * Provide event nodes/pages with ticket info from Place2book
 */
jQuery(document).ready(function($) {
	$('.inline-place2book-ticketinfo').each(function() { 
	    var obj = this;
            $(obj).parent().append("<div class='inline-p2b_preloader'><a href='https://place2book.com/da/14540/list/EM3892'>Bestil billet(ter)</a><i class='fa fa-cog fa-spin fa fa-fw'></i><div>");
		$.getJSON(Drupal.settings.basePath + 'ding/place2book/ticketinfo/' + this.value + "?time=" + new Date().getTime(), function(data) {
		  $(obj).replaceWith(data['markup']);
                  $('.inline-p2b_preloader').remove();
		});		
    });
});