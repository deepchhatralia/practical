<?php

    $id=$_POST['id'];
    $name=$_POST['name'];
    $mobNum=$_POST['num'];

    if(isset($_POST['submit'])){
        $student = fopen("q5.txt",'a+'); 
        $data = "$id $name $mobNum" . PHP_EOL;

        fwrite($student,$data);
        fclose($student);

        echo "Saved";
    }
?>