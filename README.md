Libsite-Hours
=============

Drupal 7 Module for Library hours of operation

Displays open/closed hours for the current day (sets global vars for Library Hours by group, early draft using SCRC hours only)

Version 7.x-1.0-alpha2:
using SCRC hours only

Creates new block with hours for the current day. Block name: "SCRC Hours from Library Hours Module"

Global vars can also be called within a block manually:

```
$todayString = variable_get('scrcToday','');
echo "<p>" . $todayString . "</p>";
```

sample output: "[current-day-of-week] Hours: 8am - 10pm" (e.g. "Wednesday Hours: 8am - 10pm")

Installation
============

Move the libsite_hours directory and files into the Drupal instance: /sites/all/modules/

Enable the module from the Drupal module admin page: /admin/modules

