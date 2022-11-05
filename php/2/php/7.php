<?php

class Vehical {
    public $vehicalNo;
}

class Car extends Vehical {
    public $model;
    public $base = 1000;
    public $fuel, $oil;

    function __construct($vehicalNo, $model){
        $this->vehicalNo = $vehicalNo;
        $this->model = $model;
    }
    function calculate($fuel, $oil){
        echo "Maintenance cost per year : " . $fuel * 12 + $oil * 12;
    }
}

if(isset($_POST["submit"])){
    $obj = new Car($_POST["vehicalNo"], $_POST["model"]);
    $obj->calculate($_POST["fuel"], $_POST["oil"]);
}

?>