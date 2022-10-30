<?php

if(isset($_GET["pid"])){
    echo "Product ID : " . $_GET["pid"] . "<br/> 
        Product Name : " . $_GET["name"] . "<br/>
        Price : " . $_GET["price"] . "<br/>
        Dicount percentage : " . $_GET["discount"] . "<br/><br/>
        Amount to be paid after discount : " . $_GET["price"] - $_GET["price"] * $_GET["discount"] / 100;
}