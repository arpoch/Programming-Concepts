<?php
    setcookie("password",$_POST['password'],time()+3600,"/","",0,0);
?>
<html>

<body>
    <!-- Accessing Cookies -->
    Welcome <?php echo $_COOKIE["name"]?><br>
    Email - <? echo $_COOKIE['email']?><br>
    Password -  <? echo $_POST['password']?><br>
</body>

</html>