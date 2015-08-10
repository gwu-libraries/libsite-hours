Libsite-Hours
=============

Drupal 7 Module for Library hours of operation

Displays open/closed hours for the current day for the main library building and for the Special Collections Research Center

Gelman (Main Building) Hours
----------------------------

Sets current day/date and hours and outputs a block. Hours are set manually within the module pending integration of the WRLC hours tool.


SCRC Hours
----------

Global vars can also be called within a block manually:

```
$todayString = variable_get('scrcToday','');
echo "<p>" . $todayString . "</p>";
```

Sample output: "[current-day-of-week] Hours: 8am - 10pm" (e.g. "Wednesday Hours: 8am - 10pm")

Vars are set and pulled from the SCRC Hours page (node).
