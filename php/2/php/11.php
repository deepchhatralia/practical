<?php

if(isset($_POST["submit"])){
    $arr = [];

    for($i = 0 ; $i < 5 ; $i++){
        $arr[$_POST["key"][$i]] = $_POST["val"][$i];
    }
    $temp = $arr;
    echo "<pre>";
    sort($temp);
    echo "Sort : ";
    print_r($temp);

    asort($arr);
    echo "<br/><br/>Asort : ";
    print_r($arr);

    ksort($arr);
    echo "<br/><br/>Ksort : ";
    print_r($arr);

    rsort($temp);
    echo "<br/><br/>Rsort : ";
    print_r($temp);

    arsort($arr);
    echo "<br/><br/>Arsort : ";
    print_r($arr);

    krsort($arr);
    echo "<br/><br/>krsort : ";
    print_r($arr);

    shuffle($arr);
    echo "<br/><br/>Shuffle : ";
    print_r($arr);

    array_reverse($arr);
    echo "<br/><br/>Array reverse : ";
    print_r($arr);

    array_push($arr,"hello world");
    echo "<br/><br/>Array push : ";
    print_r($arr);

    echo "<br/><br/>Array popped : ";
    array_pop($arr);
    print_r($arr);

    echo "<br/><br/>Count : " . count($arr);

    echo "<br/><br/>Sizeof : " . sizeof($arr);

}else{
    echo '<h1 style="text-align: center;">Page not found</h1>';
}