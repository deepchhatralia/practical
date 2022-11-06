<?php

if(isset($_POST["submit"])){
    $str = $_POST["str"];

    echo "Original string : " . $str;

    echo "<br/><br/>Isset : " . isset($str);

    echo "<br/><br/>Empty : " . empty($str);

    echo "<br/><br/>Substr (from index 2) : " . substr($str, 2);

    echo "<br/><br/>strops : ";

    echo "<br/><br/>stripos (d) : " . stripos($str, 'd') . " index";

    echo "<br/><br/>strripos (d) : " . strripos($str, 'd') . " index";
    
    echo "<br/><br/>strrpos (D) : " . strrpos($str,'d') . " index";

    echo "<br/><br/>str_replace : " . str_replace('de','DE',$str);

    echo "<br/><br/>str_replace : " . str_ireplace('de','de',$str);

}else{
    echo "Page not found";
}