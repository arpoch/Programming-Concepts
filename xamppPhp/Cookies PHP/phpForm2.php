<html>

<body>
    Please enter your password <?php echo $_COOKIE["name"]?><br><br>
    <form action="phpForm3.php" method="post">
        <input type="password" name="password" /><br>
        <input type="submit" value="Submit" />
    </form>
</body>

</html>