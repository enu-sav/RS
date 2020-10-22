#!/bin/bash
# build ckeditor5 from scratch

builddir=ckeditor5-math
version=19.0.0

rm -rf $builddir
git clone -b stable https://github.com/ckeditor/ckeditor5-build-classic.git $builddir

(
cd $builddir
git checkout v$version
npm install
npm install ckeditor5-math@$version
npm install --save @ckeditor/ckeditor5-special-characters@$version
#npm install --save-dev @ckeditor/ckeditor5-track-changes@$version
cp src/ckeditor.js src/ckeditor.js.orig
cp ../config-ckeditor.js src/ckeditor.js 
#increase-memory-limit
npm run build
)
rm ckeditor5
ln -s $builddir/build ckeditor5

#npm install -g increase-memory-limit
# spustit v priecinku, kde sa preklada: increase-memory-limit
#https://ckeditor.com/docs/ckeditor5/latest/features/collaboration/track-changes/track-changes-integration.html
#https://ckeditor.com/docs/ckeditor5/latest/features/special-characters.html
