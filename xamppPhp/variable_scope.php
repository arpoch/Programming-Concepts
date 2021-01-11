
<?php
$a = 1;
$b = 2;

function Sum()
{
    global $a; //all references to either variable will refer to the global version
    echo $a."<br>";
    $b=10;
    echo $b."<br>";
    global $b; //all references to either variable will refer to the global version
    $c=$a+$b;
    echo $c."<br>";
} 

Sum();
echo $b;
?>
