Provides ability to view reversed referrals/references for content of entity
 reference & references - node_reference modules, etc.

Generally, this project enable content authors to see from any current content
(entity) its dependent entities content.

Project overcome a major content control difficulty for content authors.

Provide content authors ability to track external content which refers to
  current content, without the need to check mass of external content to find
  out whether each external content refers to current content or not.

Content dependency main advantages:

Easily manage content dependencies - you can view/update for each content
  entity it's dependent entities from one places.
Backward Compatibility - You can install this module & start use it without
  need to perform any change in your content structure.
External Modules Compatibility - Current project supports entity
  reference & references - node_reference with option to expand to many
  other external modules
External content permissions modules support - supports entity access
  permissions, therefore project supports automatically many content permissions
  modules, such as content access, organic groups,etc.
API support - you can use several hooks to manipulate and/or control current
  project behavior.
Nice UI - Content Dependency section appears with a small nice UI within each
  entity which have dependent external content

You can enable this module, then enter to domain/node/NUMBER/edit & you'll see
  a tab of "Content Dependency" there.

Content dependency images example:

Content Structure -
There are 10 entities of different entity types which refer to some entity
  (node) with a title "test title":
4 nodes of content type "animal".
3 nodes of content type "furniture".
1 taxonomy term.
2 users.

Images Brief -
Image #1 is just an example of node/NUMBER/edit page.
Image #2 is an example of "Content Dependency" tab results with all dependent
  content categories.
Image #3 is an example of "Content Dependency" tab with an open category of
  some node:content type.
Image #4 is an example of "Content Dependency" tab with an open category of
  user. (display all user which refer to current entity)

Installation steps:

Download module, place it under relevant modules folder and enable it.
Configure module permissions (go to your domain path
  "/admin/people/permissions", then search for "content dependency" and save
  your relevant permissions).
That's it! Now, you can see what module does, just enter to your domain path
  "/node/NUMBER/edit" and you see "Content Dependency" tab (just verify you
  have some entity reference and/or node reference that refer to this
  entity (node) (when there will be dependent entities to current entity
  (node), you will be able to see results under "Content Dependency" tab).
** Please send me any comments for this modules if you have any.
