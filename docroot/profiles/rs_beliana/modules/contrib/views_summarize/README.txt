CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Extending
 * Maintainers


INTRODUCTION
------------

The Views Summarize module enables an extra display style which displays
summaries of a column on the last row.

 * To submit bug reports and feature suggestions, or track changes:
   https://www.drupal.org/project/issues/views_summarize


REQUIREMENTS
------------

This module requires the following modules:

 * Views (https://www.drupal.org/project/views)


INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module. Visit
   https://www.drupal.org/node/895232/ for further information.


CONFIGURATION
-------------

This module does not itself have configuration, but each Views display you
create that uses the Summarized table display style does. Add and configure the
fields you want to display, then click the "settings" link for the Summarized
table format. On the popup form, in the table, will be the Summarize column that
allows you to specify which summary handler to use for that field.

Also on that form, toward the bottom of the form, is the "Display the summary
row only" setting. Checking that box means that the data that is being
summarized will not be displayed.


MAINTAINERS
-----------

Current maintainers:
 * Aidan Lister (aidanlis) - https://www.drupal.org/u/aidanlis
 * Jason Flatt (oadaeh) - https://www.drupal.org/u/oadaeh
