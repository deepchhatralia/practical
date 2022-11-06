<?php

class Vehical {
    public $vehicalNo;
}

class Car extends Vehical {
    public $model, $fuel, $oil, $mileage, $ans;

    function __construct($vehicalNo, $model, $fuel, $oil, $mileage){
        $this->vehicalNo = $vehicalNo;
        $this->model = $model;
        $this->fuel = $fuel;
        $this->oil = $oil;
        $this->mileage = $mileage;
    }
    // function calculate(){
    //     $this->ans = ($this->km / $this->mileage * $this->fuel) + $this->oil * 12;
    // }
}

if(isset($_POST["submit"])){
    $obj1 = new Car($_POST["vehicalNo"][0], $_POST["model"][0], $_POST["fuel"][0], $_POST["oil"][0], $_POST["mileage"][0]);
    $obj2 = new Car($_POST["vehicalNo"][1], $_POST["model"][1], $_POST["fuel"][1], $_POST["oil"][1], $_POST["mileage"][1]);
    $obj3 = new Car($_POST["vehicalNo"][2], $_POST["model"][2], $_POST["fuel"][2], $_POST["oil"][2], $_POST["mileage"][2]);

    $arr = [$obj1, $obj2, $obj3];
    $max = 100000;
    $which;

    for($i = 0 ; $i < count($arr) ; $i++){
        if($max > ($arr[$i]->fuel + $arr[$i]->oil)){
            $which = $arr[$i];
            $max = $arr[$i]->fuel + $arr[$i]->oil;
        }
    }
    echo $which->model . " model car is economical";
}

?>