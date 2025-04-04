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
echo "It is necessary to apply the patch - adminimal_admin_menu-3202255-2.patch"

echo "It is necessary to apply the patch - define_lite_icons.patch"

echo "It is necessary to apply the patch - hook_access_arguments_error.patch"

echo "It is necessary to apply the patch - editable_views_enable_new_revision.patch"

echo "It is necessary to apply the patch - environment_indicator-check_for_null_env-3200702-2.patch"

echo "It is necessary to apply the patch - hook_post_action-undefined_index_original-3011103-7-D7.patch.txt"

echo "It is necessary to apply the patch - multivalue_fields_fix-2224803-59.patch"

echo "It is necessary to apply the patch - shs-fix-hanging-view-lookup.patch"

echo "It is necessary to apply the patch - views-export-fix-removed-tags.patch"

echo "It is necessary to apply the patch - process-all-items-2646242-45.patch"

echo "It is necessary to apply the patch - strip-tags-from-export.patch"

echo "It is necessary to apply the patch - workbench_access_remove_error_logs.patch"

echo "It is necessary to apply the patch - workbench_moderation_rs_optimize.patch"

echo "It is necessary to apply the patch - workbench_state_access-access_new_content-2456041-1-D7.patch"

echo "It is necessary to apply the patch - call_beliana_render_export.patch"

