<?php

function factorial($num){
    if($num == 1) return 1;

    return $num * factorial($num - 1);
}

if(isset($_GET["submit"])){
    echo "Factorial of " . $_GET["fact"] . " = " . factorial($_GET["fact"]);
}else{
    echo '<h1 style="text-align: center;">Page not found</h1>';
}