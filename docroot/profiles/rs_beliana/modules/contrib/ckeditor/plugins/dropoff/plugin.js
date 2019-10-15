// disables drag & drop (causes problems wit lite/flite)
// https://stackoverflow.com/questions/22023407/ckeditor-disable-image-drag-and-drop
CKEDITOR.plugins.add('dropoff', {
    init: function (editor) {
        function regectDrop(event) {
            event.data.preventDefault(true);
        };
        editor.on('contentDom', function() {
            editor.document.on('drop',regectDrop);
        });

     }
});
