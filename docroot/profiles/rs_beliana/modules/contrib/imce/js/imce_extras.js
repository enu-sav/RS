/*
 * This pack implemets: keyboard shortcuts, file sorting, resize bars,
 * and inline thumbnail preview.
 */
(function ($) {
  // Add scale calculator for resizing.
  imce.hooks.load.push(function () {
    $('#edit-width, #edit-height').focus(function () {
      var fid = imce.vars.prvfid;
      if (!fid) {
        return;
      }
      var isW = this.id === 'edit-width';
      var val = imce.el(isW ? 'edit-height' : 'edit-width').value * 1;
      if (!val) {
        return;
      }
      var dim = imce.getDim(fid);
      if (dim.width) {
        var ratio = dim.height / dim.width;
        this.value = Math.round(isW ? val / ratio : val * ratio);
      }
    });
  });

  // Shortcuts.
  imce.initiateShortcuts = function () {
    $(imce.NW)
      .attr({
        tabindex: '0',
        'aria-keyshortcuts': 'ArrowDown ArrowUp',
      })
      .keydown(function (e) {
        var F = imce.dirKeys['k' + e.keyCode];
        if (F) {
          return F.apply(this, arguments);
        }
      });
    $(imce.FLW)
      .attr({
        tabindex: '0',
        'aria-keyshortcuts': 'ArrowDown ArrowUp Enter Control+A',
      })
      .keydown(function (e) {
        var F = imce.fileKeys['k' + e.keyCode];
        if (F) {
          return F.apply(this, arguments);
        }
      })
      .focus(function (e) {
        if (!e.relatedTarget || !this.contains(e.relatedTarget)) {
          var el = this;
          setTimeout(function () {
            if (el === document.activeElement) {
              var row = imce.fids[imce.lastFid()] || imce.findex[0];
              if (row) {
                row.focus();
              }
            }
            el = e = null;
          });
        }
      })
      .focus();
  };

  // Shortcut key-function pairs for directories.
  imce.dirKeys = {
    k35: function (e) {
      // End-home. select first or last dir.
      var L = imce.tree['.'].li;
      if (e.keyCode == 35) {
        while (imce.hasC(L, 'expanded')) {
          L = L.lastChild.lastChild;
        }
      }
      $(L.childNodes[1]).click().focus();
    },
    k37: function (e) {
      // Left-right. collapse-expand directories.
      // Right may also move focus on files.
      var L;
      var B = imce.tree[imce.conf.dir];
      /**@type any*/
      var right = e.keyCode == 39;
      if (B.ul && right ^ imce.hasC((L = B.li), 'expanded')) {
        $(L.firstChild).click();
      }
      else if (right) {
        $(imce.FLW).focus();
      }
    },
    k38: function (e) {
      // Up. select the previous directory.
      var L,
        B = imce.tree[imce.conf.dir];
      if ((L = B.li.previousSibling)) {
        while (imce.hasC(L, 'expanded')) {
          L = L.lastChild.lastChild;
        }
        $(L.childNodes[1]).click().focus();
      }
      else if ((L = B.li.parentNode.parentNode) && L.tagName == 'LI') {
        $(L.childNodes[1]).click().focus();
      }
    },
    k40: function (e) {
      // Down. select the next directory.
      var B = imce.tree[imce.conf.dir],
        L = B.li,
        U = B.ul;
      if (U && imce.hasC(L, 'expanded')) {
        $(U.firstChild.childNodes[1]).click().focus();
      }
      else {
        do {
          if (L.nextSibling) {
            return $(L.nextSibling.childNodes[1]).click().focus();
          }
        } while ((L = L.parentNode.parentNode).tagName == 'LI');
      }
    },
  };
  // Add equal keys.
  imce.dirKeys.k36 = imce.dirKeys.k35;
  imce.dirKeys.k39 = imce.dirKeys.k37;

  // Shortcut key-function pairs for files.
  imce.fileKeys = {
    k38: function (e) {
      // Up-down. select previous-next row.
      var fid = imce.lastFid();
      var i = fid ? imce.fids[fid].rowIndex + e.keyCode - 39 : 0;
      var row = imce.findex[i];
      imce.fileClick(row, e.ctrlKey, e.shiftKey, true);
      return false;
    },
    k35: function (e) {
      // End-home. select first or last row.
      var row = imce.findex[e.keyCode == 35 ? imce.findex.length - 1 : 0];
      imce.fileClick(row, e.ctrlKey, e.shiftKey, true);
      return false;
    },
    k13: function (e) {
      // Enter-insert. send file to external app.
      imce.send(imce.vars.prvfid);
      return false;
    },
    k37: function (e) {
      // Left. focus on directories.
      $(imce.tree[imce.conf.dir].a).focus();
    },
    k65: function (e) {
      // Ctrl+A to select all.
      if (e.ctrlKey && imce.findex.length) {
        var fid = imce.findex[0].getAttribute('data-name');
        // Select first row.
        imce.selected[fid] ? (imce.vars.lastfid = fid) : imce.fileClick(fid);
        var row = imce.findex[imce.findex.length - 1];
        // Shift+click last row.
        imce.fileClick(row, false, true, true);
        return false;
      }
    },
  };
  // Add equal keys.
  imce.fileKeys.k40 = imce.fileKeys.k38;
  imce.fileKeys.k36 = imce.fileKeys.k35;
  imce.fileKeys.k45 = imce.fileKeys.k13;
  // Add default operation keys. delete, R(esize), T(humbnails), U(pload).
  $.each(
    { k46: 'delete', k82: 'resize', k84: 'thumb', k85: 'upload' },
    function (k, op) {
      imce.fileKeys[k] = function (e) {
        if (imce.ops[op] && !imce.ops[op].disabled) {
          imce.opClick(op);
        }
      };
    }
  );

  // Prepare column sorting.
  imce.initiateSorting = function () {
    // Cache the old directory's sort settings before the new one replaces it.
    imce.hooks.cache.push(function (cache, newdir) {
      cache.cid = imce.vars.cid;
      cache.dsc = imce.vars.dsc;
    });
    // Refresh sorting after the new directory content is loaded.
    imce.hooks.navigate.push(function (data, olddir, cached) {
      cached ? imce.updateSortState(data.cid, data.dsc) : imce.firstSort();
    });
    imce.vars.cid = imce.cookie('imcecid') * 1;
    imce.vars.dsc = imce.cookie('imcedsc') * 1;
    imce.cols = imce.el('file-header').rows[0].cells;
    var click = function () {
      imce.columnSort(this.cellIndex, imce.hasC(this, 'asc'));
    };
    $(imce.cols)
      .click(click)
      .attr({
        tabindex: '0',
        'aria-label': function () {
          return Drupal.t('Sort by @name', {
            '@name': $(this).text(),
          });
        },
      })
      .keydown(function (e) {
        if (e.keyCode === 13 && !e.ctrlKey && !e.shiftKey && !e.altKey) {
          click.apply(this, arguments);
        }
      });
    imce.firstSort();
  };

  // Sort the list for the first time.
  imce.firstSort = function () {
    imce.columnSort(imce.vars.cid, imce.vars.dsc);
  };

  // Sort file list according to column index.
  imce.columnSort = function (cid, dsc) {
    if (imce.findex.length < 2) {
      return;
    }
    var func = 'sort' + (cid == 0 ? 'Str' : 'Num') + (dsc ? 'Dsc' : 'Asc');
    var attr = 'data-' + (imce.filePropNames[cid] || 'name');
    // Sort rows.
    imce.findex.sort(function (r1, r2) {
      return imce[func](r1.getAttribute(attr), r2.getAttribute(attr));
    });
    // Insert sorted rows.
    for (var row, i = 0; (row = imce.findex[i]); i++) {
      imce.tbody.appendChild(row);
    }
    imce.updateSortState(cid, dsc);
  };

  // Update column states.
  imce.updateSortState = function (cid, dsc) {
    $(imce.cols[imce.vars.cid]).removeClass(imce.vars.dsc ? 'desc' : 'asc');
    $(imce.cols[cid]).addClass(dsc ? 'desc' : 'asc');
    if (imce.vars.cid != cid) {
      imce.vars.cid = cid;
      imce.cookie('imcecid', cid);
    }
    if (imce.vars.dsc != dsc) {
      imce.vars.dsc = dsc;
      imce.cookie('imcedsc', dsc ? 1 : 0);
    }
  };

  // Sorters.
  imce.sortStrAsc = function (a, b) {
    return a.toLowerCase() < b.toLowerCase() ? -1 : 1;
  };
  imce.sortStrDsc = function (a, b) {
    return imce.sortStrAsc(b, a);
  };
  imce.sortNumAsc = function (a, b) {
    return a - b;
  };
  imce.sortNumDsc = function (a, b) {
    return b - a;
  };

  // Set resizers for resizable areas and recall previous dimensions.
  imce.initiateResizeBars = function () {
    imce.setResizer(
      '#navigation-resizer',
      'X',
      imce.NW,
      null,
      1,
      function (p1, p2, m) {
        p1 != p2 && imce.cookie('imcenww', p2);
      }
    );
    imce.setResizer(
      '#browse-resizer',
      'Y',
      imce.BW,
      imce.PW,
      50,
      function (p1, p2, m) {
        p1 != p2 && imce.cookie('imcebwh', p2);
      }
    );
    imce.recallDimensions();
  };

  // Set a resize bar.
  imce.setResizer = function (resizer, axis, area1, area2, Min, callback) {
    var opt =
      axis == 'X'
        ? { pos: 'pageX', func: 'width' }
        : { pos: 'pageY', func: 'height' };
    Min = Min || 0;
    var $area1 = $(area1),
      $area2 = area2 ? $(area2) : null,
      $doc = $(document);
    $(resizer).mousedown(function (e) {
      var pos = e[opt.pos];
      var start = $area1[opt.func]();
      var end = start;
      var Max = $area2 ? start + $area2[opt.func]() : 1200;
      var drag = function (e) {
        end = Math.min(Max - Min, Math.max(start + e[opt.pos] - pos, Min));
        $area1[opt.func](end);
        $area2 && $area2[opt.func](Max - end);
        return false;
      };
      var undrag = function (e) {
        $doc.unbind('mousemove', drag).unbind('mouseup', undrag);
        callback && callback(start, end, Max);
      };
      $doc.mousemove(drag).mouseup(undrag);
      return false;
    });
  };

  // Get&set area dimensions of the last session from the cookie.
  imce.recallDimensions = function () {
    var $body = $(document.body);
    if (!$body.hasClass('imce')) {
      return;
    }
    // Row heights.
    imce.recallHeights(imce.cookie('imcebwh') * 1);
    $(window).resize(function () {
      imce.recallHeights();
    });
    // Navigation wrapper.
    var nwOldWidth = imce.cookie('imcenww') * 1;
    nwOldWidth && $(imce.NW).width(Math.min(nwOldWidth, $body.width() - 10));
  };

  // Set row heights with respect to window height.
  imce.recallHeights = function (bwFixedHeight) {
    // Window & body dimensions.
    // @ts-ignore
    var winHeight = $(window).height();
    var bodyHeight = $(document.body).outerHeight(true);
    var diff = winHeight - bodyHeight;
    var bwHeight = $(imce.BW).height(),
      pwHeight = $(imce.PW).height();
    if (bwFixedHeight) {
      // Row heights.
      diff -= bwFixedHeight - bwHeight;
      bwHeight = bwFixedHeight;
      pwHeight += diff;
    }
    else {
      diff = Math.floor(diff / 2);
      bwHeight += diff;
      pwHeight += diff;
    }
    $(imce.BW).height(bwHeight);
    $(imce.PW).height(pwHeight);
  };

  // Cookie get & set.
  imce.cookie = function (name, value) {
    if (typeof value == 'undefined') {
      // Get.
      return document.cookie
        ? imce.decode(
            (document.cookie.match(
              new RegExp('(?:^|;) *' + name + '=([^;]*)(?:;|$)')
            ) || ['', ''])[1].replace(/\+/g, '%20')
          )
        : '';
    }
    document.cookie =
      name +
      '=' +
      encodeURIComponent(value) +
      '; expires=' +
      new Date(new Date().getTime() * 1 + 15 * 86400000).toUTCString() +
      '; path=' +
      Drupal.settings.basePath +
      'imce';
  };

  // View thumbnails(smaller than tMaxW x tMaxH) inside the rows.
  // Large images can also be previewed by setting imce.vars.prvstyle
  // to a valid image style(imagecache preset).
  imce.thumbRow = function (row) {
    var dim = imce.getDim(row);
    if (!dim.width) {
      return;
    }
    var fid = row.getAttribute('data-name');
    if (imce.vars.tMaxW < dim.width || imce.vars.tMaxH < dim.height) {
      if (!imce.vars.prvstyle || imce.conf.dir.indexOf('styles') === 0) {
        return;
      }
      var img = new Image();
      img.src = imce.imagestyleURL(imce.getURL(fid), imce.vars.prvstyle);
      img.className = 'imagestyle-' + imce.vars.prvstyle;
    }
    else {
      var prvW = dim.width;
      var prvH = dim.height;
      if (imce.vars.prvW < dim.width || imce.vars.prvH < dim.height) {
        if (dim.height < dim.width) {
          prvW = imce.vars.prvW;
          prvH = (prvW * dim.height) / dim.width;
        }
        else {
          prvH = imce.vars.prvH;
          prvW = (prvH * dim.width) / dim.height;
        }
      }
      var img = new Image(prvW, prvH);
      img.src = imce.getURL(fid);
    }
    var cell = row.cells[0];
    cell.insertBefore(img, cell.firstChild);
  };

  // Convert a file URL returned by imce.getURL()
  // to an image style(imagecache preset) URL.
  imce.imagestyleURL = function (url, stylename) {
    var len = imce.conf.furl.length - 1;
    return (
      url.substring(0, len) +
      '/styles/' +
      stylename +
      '/' +
      imce.conf.scheme +
      url.substring(len)
    );
  };

  // Replace table view with box view for file list.
  imce.boxView = function () {
    var width = imce.vars.boxW;
    var height = imce.vars.boxH;
    if (!width || !height) {
      return;
    }
    var $body = $(document.body);
    var toggle = function () {
      $body.toggleClass('box-view');
      // Refresh dom. required by all except FF.
      $('#file-list').appendTo(imce.FW).appendTo(imce.FLW);
    };
    $body.append(
      '<style type="text/css">.box-view #file-list td.name {width: ' +
        width +
        'px;height: ' +
        height +
        'px;} .box-view #file-list td.name span {width: ' +
        width +
        'px;word-wrap: normal;text-overflow: ellipsis;}</style>'
    );
    imce.hooks.load.push(function () {
      toggle();
      imce.SBW.scrollTop = 0;
      imce.opAdd({
        name: 'changeview',
        title: Drupal.t('Change view'),
        func: toggle,
      });
    });
    imce.hooks.list.push(imce.boxViewRow);
  };

  // Process a row for box view. include all data in box title.
  imce.boxViewRow = function (row) {
    var dim = imce.getDim(row);
    var wxh = dim.width ? ' | ' + dim.width + 'x' + dim.height : '';
    row.cells[0].title =
      row.getAttribute('name') +
      ' | ' +
      row.cells[1].textContent +
      wxh +
      ' | ' +
      row.cells[4].textContent;
  };
})(jQuery);
