<?php
    //Setting Cookie
    setcookie("name",$_GET['name'],time()+3600,"/","",0,0);
    setcookie("email",$_GET['email'],time()+3600,"/","",0,0);
    header("Location: phpForm2.php");
?>
