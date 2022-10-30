<?php

$city = ["Porbandar","Rajkot","Ahmedabad","Mumbai"];
$dis = [0,180,400,1240];

if(isset($_POST["src"])){
    $source = $_POST["src"];
    $destination = $_POST["des"];

    $total = $dis[array_search($source,$city)] - $dis[array_search($destination,$city)];
    
    echo "<h3>Distance between $source and $destination : " . abs($total) . " km</h3>";
}