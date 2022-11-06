<?php

class Vehical {
    public $vehicalNo;
}

class Car extends Vehical {
    public $model;
    public $fuel, $oil, $mileage, $km;

    function __construct($vehicalNo, $model){
        $this->vehicalNo = $vehicalNo;
        $this->model = $model;
    }
    function calculate($fuel, $oil, $mileage, $km){
        echo "Maintenance cost per year : " . ($km / $mileage * $fuel) + $oil * 12;
    }
}

if(isset($_POST["submit"])){
    $obj = new Car($_POST["vehicalNo"], $_POST["model"]);
    $obj->calculate($_POST["fuel"], $_POST["oil"], $_POST["mileage"], $_POST["km"]);
}

?>