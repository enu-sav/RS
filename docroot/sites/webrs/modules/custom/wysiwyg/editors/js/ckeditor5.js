/*
 * Configure ckeditor5
 * Two different configurations for advanced_html and full_html text formats
 * Tollbar configuration specific for Beliana requirements
 */
(function($) {
/**
 * Attach this editor to a target element.
 */
Drupal.wysiwyg.editor.attach.ckeditor5 = function (context, params, settings) {
    var current_user = Drupal.settings.beliana.current_user.name;
    if (params.format.includes("filtered_html")) {
        // configure with the TrackChanges plugin
        ClassicEditor
            .create( document.querySelector( '#'+this.field ), {
            //toolbar: [ 'bold', 'italic', 'Heading', 'Link', 'trackChanges'],
                heading: {
                    options: [ // We want just P, H2 and H3 
                    { model: 'paragraph', title: 'Paragraph', class: 'ck-heading_paragraph' },
                    { model: 'heading2', view: 'h2', title: 'Heading 2', class: 'ck-heading_heading2' },
                    { model: 'heading3', view: 'h3', title: 'Heading 3', class: 'ck-heading_heading3' }
                    ]
                },
                image: {
                    toolbar: [ 'imageTextAlternative' ]
                }
            } )
            .then( editor => {
                // store editor data so that we can access it in Drupal.wysiwyg.editor.detach
                var $target = $('#' + params.field);
                $target.data('ckeditor5', editor);
            } )
            .catch( err => {
                console.error( err.stack );
            } );
    } else {
        // configure without the TrackChanges plugin
        ClassicEditor
            .create( document.querySelector( '#'+this.field ), {
                removePlugins: [ 'Heading', 'trackChanges'],
                toolbar: [ 'bold', 'italic', 'Link'],
            } )
            .then( editor => {
                // store editor data so that we can access it in Drupal.wysiwyg.editor.detach
                var $target = $('#' + params.field);
                $target.data('ckeditor5', editor);
            } )
            .catch( err => {
                console.error( err.stack );
            } );
  }
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
