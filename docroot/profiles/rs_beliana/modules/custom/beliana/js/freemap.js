/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {
  Drupal.behaviors.belianaEditor = {
    attach: function (context, settings) {
      var body = $(document.body);
      var freemap_url = $('#edit-field-freemap-url input');
      var freemap_url_diela = $('#field-url-diela-l-add-more-wrapper input');

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

      body.find('#free-map-btn').click(function () {
        var title = $("#title-field-add-more-wrapper input").val();
        if (title.length === 0){
          alert('Pole Názov ilustrácie nieje vyplnené.');
          return;
        }

        $.ajax({
          url: location.protocol + "//" + location.host + "/get-freemap-image",
          data: {
            "freemap_title": "mapa-" + title,
            "freemap_url": freemap_url.val(),
          },
          success: function (data, status, xhr) {
            if (data['status']) {
              $('.image-preview').css('display', 'block');
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
            "freemap_url": freemap_url.val(),
          },
          success: function (data, status, xhr) {
            if (data['status']) {
              $('.image-preview-place').css('display', 'block');
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
