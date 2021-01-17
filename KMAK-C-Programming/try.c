
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   char name1[10]= "Tim";
   char name2[10]= "Bill";
   if(strcmp(name1, name2) < 0)
   {
      printf("A");
   }else if(strcmp(name1, name2) > 0){
      printf("B");
   }else{
      printf("C");
   }
   return 0;
}