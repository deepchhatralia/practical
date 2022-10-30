<?php

$food = ["Paneer Tikka","Palak Paneer","Chole Puri","Pizza"];
$count = 1;

foreach($food as $val){
    if($count % 2 == 0) echo $val . "<br/>";
    $count++;
}