<?php

$arr = array("Hello","Hey","Hi","How are you ??","All Good ??");
$arr2 = [1=>"Football",2=>"Cricket",3=>"Hockey"];

echo "Current value : " . current($arr) . "<br/>";
// reset($arr);
end($arr);
echo "Cursor moved to end : " . current($arr) . "<br/>";

echo "Current position using pos() : ". pos($arr) . "<br/>";
echo "Previous position before cursor pointer : " . prev($arr) . "<br/>";

echo "<br/>Array Walk : <br/>";
array_walk($arr2,function ($val,$key){
    echo $key . " => " . $val . "<br/>";
});

echo "<br/>Count array : " . count($arr) . "<br/>";
echo "Sizeof array : " . sizeof($arr) . "<br/>";

// echo "Array count values : " . array_count_values($arr2);

// echo "Array extract : " . extract($arr);