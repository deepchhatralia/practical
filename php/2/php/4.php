<?php

if(isset($_POST["submit"])){
    $sum = 0;

    foreach($_POST["num"] as $val){
        $sum += $val;
    }
    echo "Sum of 5 numbers : " . $sum . "<br/><br/>";
    echo "Average of 5 numbers : " . $sum / count($_POST["num"]);

}else{
    echo '<h1 style="text-align: center;">Page not found</h1>';
}