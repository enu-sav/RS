
(function($) {

/**
 * Attach this editor to a target element.
https://ckeditor.com/docs/ckeditor5/latest/builds/guides/integration/configuration.html
https://www.drupal.org/project/wysiwyg/issues/2854947
 */
Drupal.wysiwyg.editor.attach.ckeditor5 = function (context, params, settings) {
  var $drupal_settings = Drupal.settings;
  ClassicEditor
    .create( document.querySelector( '#'+this.field ), {
	//toolbar: [ 'bold', 'italic', 'Heading', 'Link', 'trackChanges'],
	// removePlugins: [ 'Heading', 'Link' ],
    })
    .then( editor => {
       var $target = $('#' + params.field);
       // store editor data so that we can access it in Drupal.wysiwyg.editor.detach
       $target.data('ckeditor5', editor);
     } )
     .catch( err => {
       console.error( err.stack );
     } );
};

/** 
 * Detach a single editor instance.
 * trigger:
 * 'unload' if switched to other editor or rich editor is disabled
 * 'serialize' if Save button is pressed
 */
Drupal.wysiwyg.editor.detach.ckeditor5 = function (context, params, trigger) {
  if (trigger !== 'serialize') {
    var $target = $('#' + params.field, context);
    var editor = $target.data('ckeditor5');
    if (!editor) {
      return;
    }
    // specify if the content has changed - other editors set this elsewhere
    $target.attr({
      'data-wysiwyg-value-is-changed': $target.attr('data-wysiwyg-value-original') !== editor.getData()
    });
    // Destroy editor
    editor.destroy();
  }
};

})(jQuery);
