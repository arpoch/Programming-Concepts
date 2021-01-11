<? 
    session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Set session variables
$_SESSION["fname"] = "Rajesh";
$_SESSION["lname"] = "Kapoor";
echo "Session variables are set.";
?>

</body>
</html>