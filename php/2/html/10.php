<html>
<body>
    <form action="../php/10.php" method="post" >
        <?php
            for($i = 0 ; $i < 3 ; $i++){
                ?>
                <table>
                <h4>Product <?php echo $i+1; ?> details</h4>
            <tr>
                <td class="r">Name : </td>
                <td><input name="name[]" type="text" required/></td>
            </tr>
            <tr>
                <td class="r">Quantity : </td>
                <td><input name="qty[]" type="number" min="1" required /></td>
            </tr>
            <tr>
                <td class="r">Price (per quantity) : </td>
                <td><input name="price[]" type="nunmber" min="1" required/></td>
            </tr>
        </table>
            <?php } ?>
            <br><br>
            <tr>
                <td colspan="2" style="text-align: center;"> <input type="submit" name="submit" value="Calculate" /> </td>
            </tr>
        </form>
</body>
</html>