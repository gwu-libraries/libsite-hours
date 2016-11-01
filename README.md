Libsite-Hours
=============

Drupal 7 Module for Library hours of operation (or any academic organization).

Hours Week: displays hours for all of our library units with public hours in a "today forward" format (today + 6 days) including a version for the header.

Hours Box: displays open/closed hours for the current day for the main library building (Gelman) and for one of the units (Special Collections Research Center). The box uses a shared function and can easily be duplicated to display hours for other units/groups.

API json is cached every fifteen minutes.

Hours are pulled from WRLC's hours API developed by Joel Shields. The admin UI can be accessed here for consortium members: http://www.libraries.wrlc.org/admin/hours/. You can see a sample of the json output here: https://api.wrlc.org/hours/copy-json.php?lib=gw&libid=1
 
Customize for Your Institution
------------------------------

Enabling this module on your site will generate the blocks containing our hours and styling! The look and feel can be adjusted in the css file. WRLC members can change the API request for their library. 

Outside use (non-WRLC): if you're willing to rework how the json is parsed you can pull from your own API. Don't have one? You can build one using Google Sheets! https://coderwall.com/p/duapqq/use-a-google-spreadsheet-as-your-json-backend (or google it -- it's surprisingly simple to configure)


