/*
 *   Plugin developed by Netbroad, C.B.
 *
 *   LICENCE: GPL, LGPL, MPL
 *   NON-COMMERCIAL PLUGIN.
 *
 *   Website: netbroad.eu
 *   Twitter: @netbroadcb
 *   Facebook: Netbroad
 *   LinkedIn: Netbroad
 *
 */

CKEDITOR.plugins.add('fixed', {
  init: function (editor) {
    window.addEventListener('scroll', function () {
      calculatePosition();
    }, false);

    window.addEventListener('resize', function () {
      calculatePosition();
    }, false);

    function calculatePosition() {
      var content = document.getElementsByClassName('cke_contents').item(0);
      var toolbar = document.getElementsByClassName('cke_top').item(0);
      var admin = document.getElementById('admin-menu');
      var editor = document.getElementsByClassName('cke').item(0);
      var inner = document.getElementsByClassName('cke_inner').item(0);
      var calculatedOffset = 85 + admin.offsetHeight;
      var scrollvalue = document.documentElement.scrollTop > document.body.scrollTop ? document.documentElement.scrollTop : document.body.scrollTop;

      toolbar.style.width = "auto";
      toolbar.style.top = "0px";
      toolbar.style.left = "0px";
      toolbar.style.right = "0px";
      toolbar.style.margin = "0 auto";
      toolbar.style.boxSizing = "border-box";

      if (toolbar.offsetTop + 38 <= scrollvalue) {
        toolbar.style.position = "fixed";
        toolbar.style.top = calculatedOffset + "px";
        toolbar.style.width = content.offsetWidth + "px";
        content.style.paddingTop = toolbar.offsetHeight + "px";
      }

      if (editor.offsetTop + 38 > scrollvalue && (editor.offsetTop + editor.offsetHeight) >= (scrollvalue + toolbar.offsetHeight)) {
        toolbar.style.top = "0px";
        toolbar.style.width = content.offsetWidth + "px";
        toolbar.style.position = "relative";
        content.style.paddingTop = "0px";
        
      }

      if ((editor.offsetTop + editor.offsetHeight) + calculatedOffset < (scrollvalue + toolbar.offsetHeight)) {
        toolbar.style.position = "absolute";
        toolbar.style.top = "calc(100% - " + toolbar.offsetHeight + "px)";
        inner.style.position = "relative";
      }
    }
  }
});