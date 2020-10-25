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
    var img_dir = "/files/imce/u".concat(Drupal.settings.beliana.current_user.id);

    // specify different settings for the filtered_html and full_html text formats
    if (params.format.includes("filtered_html")) {
        var remove_plugins_conf = [];
        //var toolbar_conf = [];
        var toolbar_conf = ["heading", "|", 'bold', 'italic', "bulletedlist", "numberedlist", "|", "undo", "redo", "|", "link", "imageupload", "insertTable", "math", "specialcharacters"];
        var heading_conf = {
                    options: [ // We need just P, H2 and H3 
                    { model: 'paragraph', title: 'Paragraph', class: 'ck-heading_paragraph' },
                    { model: 'heading2', view: 'h2', title: 'Heading 2', class: 'ck-heading_heading2' },
                    { model: 'heading3', view: 'h3', title: 'Heading 3', class: 'ck-heading_heading3' }
                    ]
                };
    } else {
        var remove_plugins_conf = [ 'heading', 'trackchanges'];
        var toolbar_conf = ['bold', 'italic', "bulletedlist", "numberedlist", "|", "undo", "redo", "|", "link", "math", "specialcharacters"];
        var heading_conf = {};
    }

    ClassicEditor
        .create( document.querySelector( '#'+this.field ), {
            removePlugins: remove_plugins_conf,
            toolbar: toolbar_conf,
            heading: heading_conf,
            // Settings common for both text formats
            image: {
                toolbar: [ 'imageTextAlternative' ]
            },
            simpleUpload: {
                // The URL that the images are uploaded to.
                uploadUrl: img_dir,

                // Enable the XMLHttpRequest.withCredentials property.
                //withCredentials: true,
                withCredentials: false,

                    // Headers sent along with the XMLHttpRequest to the upload server.
                headers: {
                    'X-CSRF-TOKEN': 'CSRF-Token',
                    Authorization: 'Bearer <JSON Web Token>'
                }
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
