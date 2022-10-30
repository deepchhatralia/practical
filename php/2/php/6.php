<?php

class Vehical {
    public $vehicalNum;
    public $modelNum;
    public $mileage;

    function __construct($vnum, $mnum, $mileage){
        $this->vehicalNum = $vnum;
        $this->modelNum = $mnum;
        $this->mileage = $mileage;
    }

    function calculate($price){
        return $price / $this->mileage;
    }
}

if(isset($_POST["submit"])){
    $obj = new Vehical($_POST["vnum"],$_POST["mnum"],$_POST["mileage"]);

    echo "<h1>Price of fuel per km : " . $obj->calculate($_POST["price"]) . "</h1>";

}else{
    echo '<h1 style="text-align: center;">Page not found</h1>';
}