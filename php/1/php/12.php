<?php

$arr = [['C','H','D','S'], [2,3,4,5,6,7,8,9,'J','Q','K','A']];
$mix = [];

for($i = 0 ; $i < count($arr[0]) ; $i++) {
    for($j = 0 ; $j < count($arr[1]) ; $j++){
        $mix[] = $arr[0][$i] . $arr[1][$j];
    }
}

echo "<b>Original : </b><br/>";
foreach ($mix as $val) {
    echo $val . " ";
}

echo "<b><br/><br/>Ascending order : </b><br/>";
sort($mix);
foreach ($mix as $val) {
    echo $val . " ";
}

echo "<br/><br/><b>Descending order : </b><br/>";
rsort($mix);
foreach ($mix as $val) {
    echo $val . " ";
}

echo "<br/><br/><b>Shuffled array : </b><br/>";
shuffle($mix);
foreach ($mix as $val) {
    echo $val . " ";
}