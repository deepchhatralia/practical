<?php
echo "File size of student.txt : " . filesize('./student.txt') . " bytes <br/><br/>";

$lines = file('./student.txt');
$arr = [];

foreach ($lines as $key => $value) {
    array_push($arr,explode('|',$value));
}

echo '<table border=1 style="text-align: center;">
        <thead>
            <tr>
                <th>Name</th>
                <th>Class</th>
                <th>Roll Number</th>
            </tr>
        </thead
        <tbody>';


for($i = 0 ; $i < count($arr) ; $i++){
    echo "<tr>
            <td>" . $arr[$i][0] ."</td>
            <td>" . $arr[$i][1] ."</td>
            <td>" . $arr[$i][2] ."</td>
        </tr>";
}


echo "</tbody>
</table>";