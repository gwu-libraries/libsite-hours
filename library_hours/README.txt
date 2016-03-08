Libsite-Hours
=============

Drupal 7 Module for Library hours of operation.

Displays open/closed hours for the current day for the main library building and for the Special Collections Research Center.

API json is cached every hour.

Gelman (Main Building) Hours
----------------------------

Creates a Drupal block. Sets current day/date and hours and outputs a block. Hours are pulled from WRLC's hours API http://www.libraries.wrlc.org/admin/hours/. There is an optional file that can contain exceptions and custom text: library-hours_special.php that should be saved in the Drupal theme root.

SCRC Hours
----------

Creates a Drupal block. Sets the open hours from input in SCRC Hours fields. Currently requires a content type with custom fields, with a future move to the WRLC API.
