<? 
    foo();    
    //foo("hrll");  Error
    function foo(int $myvalue = 20){
        echo "Calling foo function before definition/declaration<br>";
        echo "Defalut value is $myvalue of expected type int <br>";
    }
    $a = 5;
    echo "This is pass by value 'a'".recurssionbyvalue($a);
    function recurssionbyvalue($a){ 
        if($a==0)
            return 1;
        else{

            return $a = $a * recurssionbyvalue($a-1);
        }
    }
    echo "<br>a = ",$a;
    echo "<br>This is pass by reference 'a'";recurssionbyref($a);
    function recurssionbyref(&$a){ 
        if($a==0)
            return 1;
        else{
            $b = $a;
            $a = $a-1;
            return $a = $b * recurssionbyref($a);
        }
    }
    echo "<br>a = ",$a;
    function add($a,$b){
        return $a+$b;
    }
    $a=[1,2];
    echo "<br>Argument list function ",add(...$a);
?>