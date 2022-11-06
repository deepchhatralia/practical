<?php

if(isset($_POST["submit"])){
    class Product {
        public $name, $price, $qty;
        function __construct($name, $price, $qty){
            $this->name = $name;
            $this->price = $price;
            $this->qty = $qty;
        }
    }

    $p1 = new Product($_POST["name"][0], $_POST["qty"][0], $_POST["price"][0]);
    $p2 = new Product($_POST["name"][1], $_POST["qty"][1], $_POST["price"][1]);
    $p3 = new Product($_POST["name"][2], $_POST["qty"][2], $_POST["price"][2]);

    $total = $p1->price * $p1->qty + $p2->price * $p2->qty + $p3->price * $p3->qty;

    echo "<h1 style='text-align: center; font-family: sans-serif;'>Total Price : " . $total . "</h1>";

}else{
    echo '<h1 style="text-align: center;">Page not found</h1>';
}