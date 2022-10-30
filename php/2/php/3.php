<?php

if(isset($_GET["tickets"])){
    echo "<table border=1 width=200px>";

    for($i = 0 ; $i < $_GET["tickets"] ; $i++){
        echo "<tr>
                <td>" . $i+1 . "</td>
            </tr>";
    }
    echo "</table>";
}