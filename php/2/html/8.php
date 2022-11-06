<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Q8</title>
</head>
<body>
    <form action="../php/8.php" method="post">
    <?php
for($i = 0 ; $i < 3 ; $i++){
    ?>
    <table>
    <h4>Vehical <?php echo $i+1; ?> details</h4>
    <tr>
        <td>Vehical Number : </td>
        <td><input type="number" name="vehicalNo[]" min="1" required /></td>
    </tr>
    <tr>
        <td>Model : </td>
        <td><input type="text" name="model[]" required /></td>
    </tr>
    <tr>
        <td>Fuel cost : </td>
        <td><input type="number" name="fuel[]" min="1" required /></td>
    </tr>
    <tr>
        <td>Oil cost : </td>
        <td><input type="number" name="oil[]" min="1" required /></td>
    </tr>
    <tr>
        <td>Mileage : </td>
        <td><input type="number" name="mileage[]" min="1" required /></td>
    </tr>
    
</table>
<?php
}
?>
<br><br>
    <tr>
        <td><input type="submit" value="Calculate" name="submit" /></td>
    </tr>

</form>

</body>
</html>