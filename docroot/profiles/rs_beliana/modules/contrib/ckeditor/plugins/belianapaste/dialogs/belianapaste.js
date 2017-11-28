/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

'use strict';

(function () {
    CKEDITOR.dialog.add('belianapaste_dialog', function (editor) {
        return {
            title: 'Paste from Word',
            minWidth: 600,
            minHeight: 400,
            contents: [{
                    id: 'info',
                    elements: [{
                            id: 'paste-text',
                            type: 'textarea',
                            label: 'Please paste inside the following box using the keyboard (Ctrl/Cmd+V) and hit OK',
                            onOk: function () {
                                editor.insertText(this.getValueOf('info', 'paste-text'));
                            }
                        }
                    ]
                }
            ]
        };
    });
})();