<!DOCTYPE HTML>
<html>
<head>
<title>
    Form Validation
</title>
</head>
<body>
    <?
        $nameErr=$emailErr=$mobileErr=$siteErr=$commErr=$genderErr="";
        $name=$email=$mobile=$site=$comments=$gender="";
        if($_SERVER['REQUEST_METHOD']=='POST'){
            if(empty($_POST['name'])){
                $nameErr="Name is required";
            }else{
                $name = validateVar($_POST['name']);
            }

            if(empty($_POST['email'])){
                $emailErr="Email is required";
            }else{
                $email = validateVar($_POST['email']);
                if(!filter_var($email,FILTER_VALIDATE_EMAIL)){
                    $emailErr = "Invalid Email ID";
                }
            }

            if(empty($_POST['mobile'])){
                $mobileErr="Mobile no. is required";
            }else{
                $mobile = validateVar($_POST['moible']);
                $len = strlen($mobile);
                if($len>0&&$len<10){
                    $mobileErr = "Invalid Mobile no.";
                }                
            }

            if(empty($_POST['website'])){} else{
                $website = validateVar($_POST['website']);
                if(!preg_match((https?|www))
            }
        }

        function validateVar(&$data){
            $data = trim($data);
            $data = stripcslashes($data);
            $data = htmlspecialchars($data);
        }
    ?>
    <h1>PHP Form Validation</h1>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER['PHP_SELF']);?>">
        Name: <input type="text" name="name" />
        <span style="color:red">* <? echo $nameErr; ?></span><br><br>
        Email: <input type="text" name="email" />
        <span style="color:red">* <? echo $emailErr; ?></span><br><br>
        Mobile: <input type="text" name="mobile" />
        <span style="color:red">* <? echo $mobileErr; ?></span><br><br>
        Website: <input type="text" name="website" />
        <span style="color:red">* <? echo $siteErr; ?></span><br><br>
        Comments: <textarea cols=50 rows=10 name="comments"></textarea>
        <span style="color:red">* <? echo $commErr; ?></span><br><br>
        Gender: 
        <input type="radio" name="gender" value="female"/>Female
        <input type="radio" name="gender" value="male"/>Male
        <input type="radio" name="gender" value="other"/>Other
        <span style="color:red">* <? echo $genderErr; ?></span><br><br>
        <input type="submit" name="submit" value="Submit Now"/>
    </form>
</body>
</html>