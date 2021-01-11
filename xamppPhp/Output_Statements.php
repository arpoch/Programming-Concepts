<?php
echo ('Hello, world\n');
echo 'This','string','was','made','with','multipe','arguments'.'<br>';
//echo ('This','string','was','made','with','multipe','arguments'); ERROR= multiple parameter to echo, the parameters must not be enclosed within parentheses. 
//($some_var) ? echo 'true' : echo 'false'; ERROR=  echo does not behave like a function, the following code is invalid.
echo 'Sum =' , 1+2; 
echo 'Sum ='. (1+2);
echo 'Sum ='. 1|2;
?>