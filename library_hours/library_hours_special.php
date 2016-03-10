<?php

/* Use this file to create exceptions. The module checks if the variable $specialDay is set: if so it will use its value instead of the normal value for the hours string */

/* example code:
 
  if ($calDate < '12/18' && $calDate > '12/01') {
    $specialDay = "Gelman Hours: 7am to midnight <span style='font-size:.9em;'>(24-hours for GW students)</span>";
  }
  elseif ($calDate == '03/06') {
    $specialDay = "(test) special text for March 6";
  }
  elseif ($calDate == '03/10') {
    $specialDay = "(test) special text for March 10";
  }
*/

/* this sets the hours string value unconditionally (careful!) */ 
  //$specialDay = "special day text";

?>
