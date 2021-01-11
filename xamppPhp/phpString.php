<?
    $name = '\'';
    echo $name;
    $name = '\r<br>';
    echo $name;
    $name = "Hello World<br>";
    echo $name;
    $str = <<<EOD
Example of string
spanning multiple lines
using heredoc syntax.<br>
EOD;
    echo $str;
    $str = <<<'EOT'
My name is {$name}.<br>
EOT;
//Variable Prasing[simple]
echo "$name, How's it going.<br>";

// Get the last character of a string.
$str = 'This is still a test.';
$last = $str[strlen($str)-1];
echo $last;

// Modify the last character of a string
$str = 'Look at the sea';
$str[strlen($str)-1] = 'e';
echo $str;

?>