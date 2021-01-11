<!DOCTYPE html>
<html>
    <head>
        <title>Prime Number</title>        
    </head>
    <body>
    <form action="" method="post">
        Enter Number&nbsp;&nbsp;<input type="number" name="value"/>&nbsp;&nbsp;
        <input type="submit" name="submit" value="Submit Here"/>
    </form>
        <?php
            $flag=true;
            if($_POST){
                $num = $_POST['value'];
                if($num<0){
                    echo "<br>Invalid Number";
                }
                else{
                    $num_sqrt = floor(sqrt($num));
                    for($i=2;$i<=$num_sqrt;$i++){
                        if(!($num%$i)){
                            echo "<br>The Number $num is not Prime<br>";
                            $flag=false;
                            break;
                        }                        
                    }
                    if($flag){
                        echo "<br>The Number $num is Prime";
                    }
                }
            }                
        ?>
    </body>
</html>