/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($, Drupal) {
  Drupal.behaviors.belianaFreeMap = {
    attach: function (context, settings) {
      var self = this;
      var body = $(document.body);
      var freemap_url = $('#edit-field-freemap-url input');
      var freemap_url_diela = $('#field-url-diela-l-add-more-wrapper input');
      var map_img_fid = $('#edit-field-mapa-obrazok-fid input');

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

      body.find('.freemap-wrapper').one("click", function () {
        $('.freemap-wrapper #freemap').css('pointer-events', 'auto');
      });

      body.find('.freemap-wrapper').mouseleave(function () {
        $('.freemap-wrapper #freemap').css('pointer-events', 'none');
      });

      body.find('#free-map-btn').unbind('click').click(function () {
        var title = $('#title-field-add-more-wrapper input').val();

        if (title.length === 0) {
          alert('Pole Názov ilustrácie nieje vyplnené.');
          return;
        }

        $.ajax({
          url: location.protocol + "//" + location.host + "/get-freemap-image",
          data: {
            "title": "mapa-" + title,
            "freemap_url": freemap_url_diela.val(),
            "map_img_fid": map_img_fid.val(),
          },
          success: function (data, status, xhr) {
            if (data['status']) {
              $('.image-preview').css('display', 'block');
              map_img_fid.val(data['file_fid']);
              $('#free-map-img').attr("src", data['file_url'] + `?v=${new Date().getTime()}`);
              alert('Obrázok mapy bol vytvorený');
            }
            else {
              alert('Obrázok nebol vytvorený. Kontaktujte administrátora');
            }
          },
          error: function (jqXhr, textStatus, errorMessage) {
            alert('Error' + errorMessage);
          }
        });
      });

      body.find('#geodata-btn-place').unbind('click').click(function () {
        var title = $("#title-field-add-more-wrapper input").val();
        var comment_instruction = $('#field-komentar-instrukcie-add-more-wrapper textarea');
        var geodata_country = $('select.geodata-country-wrapper');
        var geodata_region = $('select.geodata-region-wrapper');
        var geodata_district = $('select.geodata-district-wrapper');
        var geodata_municipality = $('select.geodata-municipality-wrapper');

        if (title.length === 0) {
          alert('Pole Názov ilustrácie nieje vyplnené.');
          return;
        }

        if (geodata_country.val() === "0") {
          alert('Pole Krajina nieje vybratá.');
          return;
        }

        $.ajax({
          url: location.protocol + "//" + location.host + "/get-geodata-image",
          data: {
            "title": "mapa-poloha-" + title,
            "map_img_fid": map_img_fid.val(),
            "geodata_country": geodata_country.val(),
            "geodata_region": geodata_region.val(),
            "geodata_district": geodata_district.val(),
            "geodata_municipality": geodata_municipality.val(),
          },
          success: function (data, status, xhr) {
            if (data['status']) {
              $('.image-preview').css('display', 'block');
              map_img_fid.val(data['file_fid'] + '/' + data['file_fid']);
              $('#geodata-img').attr("src", data['file_url'] + `?v=${new Date().getTime()}`);

              self.commentInstructionAddValue(comment_instruction);

              alert('Obrázok bol vytvorený');
            }
            else {
              alert('Obrázok nebol vytvorený. Kontaktujte administrátora');
            }
          },
          error: function (jqXhr, textStatus, errorMessage) {
            alert('Error' + errorMessage);
          }
        });
      });
    },
    commentInstructionAddValue: function (comment_instruction) {
      if (comment_instruction.val().length !== 0) {
        comment_instruction.val(comment_instruction.val() + "\n");
      }

      var country = $('select.geodata-country-wrapper option:selected').text();
      var region = $('select.geodata-region-wrapper option:selected').text();
      var district = $('select.geodata-district-wrapper option:selected').text();
      var municipality = $('select.geodata-municipality-wrapper option:selected').text();

      if (country !== '- Zvoľiť -') {
        comment_instruction.val(comment_instruction.val() + 'Generovanie mapy poloha: ' + country);
      }
      if (region !== '- Zvoľiť -') {
        comment_instruction.val(comment_instruction.val() + ' / ' + region);
      }
      if (district !== '- Zvoľiť -') {
        comment_instruction.val(comment_instruction.val() + ' / ' + district);
      }
      if (municipality !== '- Zvoľiť -') {
        comment_instruction.val(comment_instruction.val() + ' / ' + municipality);
      }
    },
  };

})(jQuery, Drupal);
