//for loop to print value and address of each element of array

#include <stdio.h>
int main( )
{
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;

   for ( int i = 0 ; i < 7 ; i++ ){
      printf("val[%d]: value is %d and address is %p\n", i, val[i], &val[i]);
   }

return 0;
}
