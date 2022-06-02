/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {
  Drupal.behaviors.belianaFreeMap = {
    attach: function (context, settings) {
      var body = $(document.body);
      var freemap_url = $('#edit-field-freemap-url input');
      var freemap_url_diela = $('#field-url-diela-l-add-more-wrapper input');
      var freemap_img_fid = $('#edit-field-mapa-obrazok-fid input');

      window.addEventListener("message", (e) => {
        try {
          if (e.data.freemap.action !== "urlUpdated") {
            return;
          }
        }
        catch (err) {
          return;
        }
        freemap_url.val(e.data.freemap.payload);
        freemap_url_diela.val(e.data.freemap.payload);
        // console.log("URL", e.data.freemap.payload);
      });

      body.find('.freemap-wrapper').click(function () {
        $('.freemap-wrapper #freemap').css('pointer-events', 'auto');
      });

      body.find('.freemap-wrapper').mouseleave(function() {
        $('.freemap-wrapper #freemap').css('pointer-events', 'none');
      });

      body.find('#free-map-btn').click(function () {
        var title = $('#title-field-add-more-wrapper input').val();

        if (title.length === 0){
          alert('Pole Názov ilustrácie nieje vyplnené.');
          return;
        }

        $.ajax({
          url: location.protocol + "//" + location.host + "/get-freemap-image",
          data: {
            "freemap_title": "mapa-" + title,
            "freemap_url": freemap_url_diela.val(),
            "freemap_img_fid": freemap_img_fid.val(),
          },
          success: function (data, status, xhr) {
            if (data['status']) {
              $('.image-preview').css('display', 'block');
              freemap_img_fid.val(data['file_fid']);
              $('#free-map-img').attr("src", data['file_url'] + `?v=${new Date().getTime()}`);
              alert('Obrázok mapy bol vytvorený');
            } else {
              alert('Obrázok nebol vytvorený. Kontaktujte administrátora');
            }
          },
          error: function (jqXhr, textStatus, errorMessage) {
            alert('Error' + errorMessage);
          }
        });
      });

      body.find('#free-map-btn-place').click(function () {
        var title = $("#title-field-add-more-wrapper input").val();

        if (title.length === 0){
          alert('Pole Názov ilustrácie nieje vyplnené.');
        }

        $.ajax({
          url: location.protocol + "//" + location.host + "/get-freemap-image",
          data: {
            "freemap_title": "mapa-poloha-" + title,
            "freemap_url": freemap_url_diela.val(),
            "freemap_img_fid": freemap_img_fid.val(),
          },
          success: function (data, status, xhr) {
            if (data['status']) {
              $('.image-preview-place').css('display', 'block');
              freemap_img_fid.val(data['file_fid']);
              $('#free-map-img-place').attr("src", data['file_url'] + `?v=${new Date().getTime()}`);
              alert('Obrázok mapy bol vytvorený');
            } else {
              alert('Obrázok nebol vytvorený. Kontaktujte administrátora');
            }
          },
          error: function (jqXhr, textStatus, errorMessage) {
            alert('Error' + errorMessage);
          }
        });
      });
    },
  };

})(jQuery, Drupal);
