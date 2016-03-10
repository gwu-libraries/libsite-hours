Libsite-Hours
=============

Drupal 7 Module for Library hours of operation.

Displays open/closed hours for the current day for the main library building and for the Special Collections Research Center.

API json is cached every fifteen minutes.

Gelman (Main Building) Hours
----------------------------

Creates a Drupal block. Sets current day and date and open hours.
Hours are pulled from WRLC's hours API http://www.libraries.wrlc.org/admin/hours/.

There is a file for exceptions and custom text: library_hours_special.php: uncomment and adjust as needed.

SCRC Hours
----------

Creates a Drupal block. Sets current day and open hours. Hours are pulled from WRLC's hours API http://www.libraries.wrlc.org/admin/hours/.

