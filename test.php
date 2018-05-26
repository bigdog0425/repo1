<?php
$ss='3 * 5';
$a=explode(' ',$ss);
echo $a[0];
echo $a[1];
echo $a[2]."\n";

switch ($a[1]){
case "+": echo "$a[0]+$a[2]=".($a[0]+$a[2]); break;
case "-": echo "$a[0]-$a[2]=".($a[0]-$a[2]); break;
case "*": echo "$a[0]*$a[2]=".($a[0]*$a[2]); break;
case "/": echo "$a[0]/$a[2]=".($a[0]/$a[2]); break;	
 
}	
