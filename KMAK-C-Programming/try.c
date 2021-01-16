
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int i1 = 5;
   int i2 = 0;
   do
   {
       i1--;
       i2++;
   }while( i2 < 5);

   printf("%d , %d \n", i1,i2);
   return 0;
}