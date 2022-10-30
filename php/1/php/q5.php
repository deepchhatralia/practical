<?php

if(isset($_GET['name'])){
    function decimalToBinary($decimal){
        $temp = $decimal;
        $count = 0;
        $ans = array();
        
        while($temp != 0){
            array_unshift($ans,$temp % 2);
            $temp = $temp / 2;
            $count++;
        }
        for($i = 0 ; $i < $count ; $i++){
            echo $ans[$i];
        }
    }
    $binary;
    $name = $_GET['name'];

    for($i = 0 ; $i < strlen($name) ; $i++){
        decimalToBinary(ord(substr($name,$i,1)));
        echo "<br/>";
    }
}