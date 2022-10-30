<?php

function printArr($milk){
    foreach($milk as $key => $val){
        echo $key . " = " . $val . "<br/>";
    }
}

$milk = ["Plain Milk"=>35, "Chocalate Milk"=>30,"Soya Milk"=>40,"Almond Milk"=>80];

echo "<strong>Original Array : </strong><br/>";
printArr($milk);

asort($milk);
echo "<br/><strong>Array after sorting by price : </strong><br/>";
printArr($milk);


ksort($milk);
echo "<br/><strong>Array after sorting by milk type</strong><br/>";
printArr($milk);
