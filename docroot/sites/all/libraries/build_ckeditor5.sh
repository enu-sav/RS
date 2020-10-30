#!/bin/bash
# build ckeditor5 from scratch

builddir=ckeditor5-math
rm -rf $builddir
git clone -b stable https://github.com/ckeditor/ckeditor5.git $builddir

(
cd $builddir/packages/ckeditor5-build-classic
npm install
npm install ckeditor5-math
npm install --save @ckeditor/ckeditor5-special-characters
npm install --save-dev @ckeditor/ckeditor5-track-changes
npm install --save-dev @ckeditor/ckeditor5-comments
cp src/ckeditor.js src/ckeditor.js.orig
cp ../../../config-ckeditor.js src/ckeditor.js 
npm run build
)

rm ckeditor5
ln -s $builddir/packages/ckeditor5-build-classic/build ckeditor5

# links
#https://ckeditor.com/docs/ckeditor5/latest/builds/guides/integration/advanced-setup.html
#https://ckeditor.com/docs/ckeditor5/latest/features/collaboration/track-changes/track-changes-integration.html
#https://ckeditor.com/docs/ckeditor5/latest/features/special-characters.html
# update node: https://phoenixnap.com/kb/update-node-js-version
