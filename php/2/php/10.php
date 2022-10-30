<?php

if(isset($_POST["submit"])){
    echo "<h1 style='font-family:sans-serif; '>Total price for " . $_POST["name"] . " : " . $_POST["qty"] * $_POST["price"] . "</h1>";
}else{
    echo '<h1 style="text-align: center;">Page not found</h1>';
}