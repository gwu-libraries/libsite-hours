<?php

  if ($calDate < '12/18' && $calDate > '12/01') {
    $specialDay = "Gelman Hours: 7am to midnight <span style='font-size:.9em;'>(24-hours for GW students)</span>";
  }
  elseif ($calDate == '03/06') {
    $specialDay = "special text for March 6";
  }
  elseif ($calDate == '03/10') {
    $specialDay = "special text for March 10";
  }

//$specialDay = "special day text";

?>
