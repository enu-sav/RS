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
      var node_id = $("#node-id").val();
      var freemap_url = $('.freemap-url-wrapper');
      var freemap_url_input = $('#edit-field-freemap-url input');
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
        freemap_url.text(e.data.freemap.payload);
        freemap_url_input.val(e.data.freemap.payload);
        // console.log("URL", e.data.freemap.payload);
      });

      body.find('.freemap-wrapper').unbind('click').click(function () {
        $('.freemap-wrapper #freemap').css('pointer-events', 'auto');
      });

      body.find('.freemap-wrapper').mouseleave(function () {
        $('.freemap-wrapper #freemap').css('pointer-events', 'none');
      });

      body.find('#free-map-btn').unbind('click').click(function (e) {
        e.preventDefault();

        var link = $(this);
        var title = $('#title-field-add-more-wrapper input').val();

        if (title.length === 0) {
          alert('Pole Názov ilustrácie nie je vyplnené.');
          return;
        }

        link.addClass('isDisabled');
        $('#ilustracia-node-form').addClass('isDisabled');
        $.ajax({
          url: location.protocol + "//" + location.host + "/get-freemap-image",
          data: {
            "node_id": node_id,
            "title": "mapa-" + title,
            "freemap_url": freemap_url_input.val(),
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
            link.removeClass('isDisabled');
            $('#ilustracia-node-form').removeClass('isDisabled');
          },
          error: function (jqXhr, textStatus, errorMessage) {
            alert('Error' + errorMessage);
          }
        });
      });

      body.find('#geodata-btn-place').unbind('click').click(function (e) {
        e.preventDefault();

        var link = $(this);
        var node_id = $("#node-id").val();
        var title = $("#title-field-add-more-wrapper input").val();
        var comment_instruction = $('#field-komentar-instrukcie-add-more-wrapper textarea');
        var geodata_country = $('select.country-code').val();
        var geodata_region = $('select.geodata-region-wrapper').val();
        var geodata_district = $('select.geodata-district-wrapper').val();
        var geodata_municipality = $('select.geodata-municipality-wrapper').val();
        var geodata_admin_level_4 = $('select.admin-level-4').val();

        $('#edit-field-freemap-url input').val('');

        if (title.length === 0) {
          alert('Pole Názov ilustrácie nie je vyplnené.');
          return;
        }

        if (geodata_country === "0") {
          alert('Pole Krajina nie je vybratá.');
          return;
        }

        if (geodata_region !== "0") {
          geodata_region = $('select.geodata-region-wrapper :selected').text();
        }

        if (geodata_district !== "0") {
          geodata_district = $('select.geodata-district-wrapper :selected').text();
        }

        if (geodata_municipality !== "0") {
          geodata_municipality = $('select.geodata-municipality-wrapper :selected').val();
          if (typeof (geodata_municipality) === "undefined") {
            geodata_municipality = "";
          }
        }

        if (geodata_admin_level_4 !== "0") {
          geodata_admin_level_4 = $('select.admin-level-4 :selected').text();
        }

        link.addClass('isDisabled');
        $('#ilustracia-node-form').addClass('isDisabled');
        $.ajax({
          url: location.protocol + "//" + location.host + "/get-geodata-image",
          data: {
            "node_id": node_id,
            "title": "mapa-poloha-" + title,
            "map_img_fid": map_img_fid.val(),
            "geodata_country": geodata_country,
            "geodata_region": geodata_region,
            "geodata_district": geodata_district,
            "geodata_municipality": geodata_municipality,
            "geodata_admin_level_4": geodata_admin_level_4,
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
            link.removeClass('isDisabled');
            $('#ilustracia-node-form').removeClass('isDisabled');
          },
          error: function (jqXhr, textStatus, errorMessage) {
            alert('Error' + errorMessage);
          }
        });
      });
    },
    commentInstructionAddValue: function (comment_instruction) {
      var country = $('select.country-code option:selected').text();
      var region = $('select.geodata-region-wrapper option:selected').text();
      var district = $('select.geodata-district-wrapper option:selected').text();
      var municipality = $('select.geodata-municipality-wrapper option:selected').text();
      var geodata_admin_level_4 = $('select.admin-level-4 option:selected').text();

      if (comment_instruction.val().length !== 0 && country !== '- Zvoliť -') {
        comment_instruction.val(comment_instruction.val() + "\n");
      }

      if (country !== '- Zvoliť -') {
        comment_instruction.val(comment_instruction.val() + 'Generovanie mapy poloha: ' + country);
      }
      if (region !== '- Zvoliť -' && region !== '') {
        comment_instruction.val(comment_instruction.val() + ' / ' + region);
      }
      if (district !== '- Zvoliť -' && district !== '') {
        comment_instruction.val(comment_instruction.val() + ' / ' + district);
      }
      if (municipality !== '- Zvoliť -' && municipality !== '') {
        comment_instruction.val(comment_instruction.val() + ' / ' + municipality);
      }
      if (geodata_admin_level_4 !== '- Zvoliť -' && geodata_admin_level_4 !== '') {
        comment_instruction.val(comment_instruction.val() + ' / ' + geodata_admin_level_4);
      }
    },
  };

})(jQuery, Drupal);
