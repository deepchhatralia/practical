<?php
if(isset($_POST['submit'])){
    echo"<br>Simple Interest : " . ($_POST['principal'] * $_POST['roi'] * $_POST['yr'])/100;
}

?>