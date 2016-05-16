Libsite-Hours
=============

Drupal 7 Module for Library hours of operation.

Hours Week: displays hours for all of our library units with public hours in a "today forward" format (today + 6 days).

Hours Box: displays open/closed hours for the current day for the main library building (Gelman) and for one of the units (Special Collections Research Center). The box uses a shared function and can easily be duplicated to display hours for other units/groups.

API json is cached every fifteen minutes.

Hours are pulled from WRLC's hours API developed by Joel Shields. The admin UI can be accessed here for consortium members: http://www.libraries.wrlc.org/admin/hours/. You can see a sample of the json output here: https://api.wrlc.org/hours/copy-json.php?lib=gw&libid=1

There is a file for exceptions and custom text: library_hours_special.php: uncomment and adjust as needed.


