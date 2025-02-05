use strict; 
use warnings; 
  
# Here character is comma(, ) 
my $str = 'Geeks|for|Geeks'; 

  my $a;
  my $b;
  my $c;
   
   # using split() function 
  ($a,$b,$c) = split('\|', $str, 3); 
     
     # displaying result using foreach loop 
         print $a;
	 print $b;
	print  $c; 
