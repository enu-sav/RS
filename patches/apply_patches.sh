#!/bin/bash

# To create a patch: create directoy and use a descriptive name
# mkdir modules/editable_views
# git diff>modules/editable_views/editable_views_enable_new_revision.patch
# Add a line below



#Usage: load the script by ". apply_patches.sh" and then patch manually as shown below

function apply {
(
        cd ../
        patch -d $1 -p 1 < patches/$2
)
}

#apply where (relative to ..) what
echo "apply docroot/profiles/rs_beliana/modules/contrib/ctools modules/ctools/ctools-fix-disappearing-exposed-in-not-in-operator-filter-1249684-59.patch"

echo "apply . modules/link/link-adding_vertical_bar_to_allowed_chars.patch"

echo "apply . modules/views/views-export-fix-removed-tags.patch"

echo "apply . modules/editable_views/editable_views_enable_new_revision.patch"

echo "apply docroot/profiles/rs_beliana/modules/contrib/workbench_state_access modules/workbench_state_access/workbench_state_access-access_new_content-2456041-1-D7.patch"

echo "apply . modules/shs/shs-fix-hanging-view-lookup.patch"
