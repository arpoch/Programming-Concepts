<?
    //creating array
    $empty_arr = array();
    $num_arr = [
        1,2,3,4,5,
    ];
    $array= array(
        "Key_1"=> 1,
        2,
        _3 =>  3,   //error but still used
        'Key_2' => 4,
        5,
        6=>6,
    );
    print_r($array);
    print "<br>";
    print_r($empty_arr);
    print "<br>";
    //deleting items key_2 and 5
    unset($array['Key_2']);
    unset($array[1]);
    print_r($array);
    //Append element
    $array[]=8;    
    $array[1]="key = 1";
    $array[]="key++";
    print "<br>";
    print_r($array);
    //multi-dimensional array
    $mult_arr = [
        [
            "monday",
            "tuesday","wednesday","thursday",
            "friday","saturday","sunday"
        ],
        [
            1=>"January",
            "Feburary","March","April","May","June","July","August","September","October","November","December"
        ]        
        ];
    print "<br>";
    print_r($mult_arr);
    //Accessing multi_arr[1][0] & [1][1]
    echo "<br>".$mult_arr[0][1],"<br>",$mult_arr[1][1];
    print $mult_arr[1][0];  //error not key value wiht 0
    //Itreatables
    //1 each()
    $bar = each($array);//Since each() is depricated from 7.2.0 therefore no proper results
    print_r($bar);
    //2 foreach()
    print "<br>Iterating Array using for-each loop<br>";
    foreach($array as $value){
        echo "&nbsp",$value;
    }
    print "<br>Iterating Muilti-Array using for-each loop<br>";
    
    foreach($mult_arr as $value){
        foreach($value as $elements){
            echo "&nbsp",$elements;
        }
    }
    print "<br>Iterating Array using for-each loop using reference";
    foreach($num_arr as $key => &$value){
        print "<br>$key => $value";
        $value = $value*2;
    }
    unset($value);
    print "<br>Changed Values of num_arr";
    foreach($num_arr as $key => $value){
        print "<br>$key => $value";
    }
?>