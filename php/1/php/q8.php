<?php
if(isset($_POST['hobby'])){
    echo "<strong>Your hobbies : </strong><br/>";
    foreach($_POST["hobby"] as $val){
        echo $val . "<br/>";
    }
}