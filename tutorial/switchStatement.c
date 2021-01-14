#include <stdio.h>
#include <stdlib.h>

int main()
{
 char gpa = 'A';
 switch(gpa){
     case 'A':
     printf("you did excellent");
     break;
     case 'B':
     printf("you did good");
     break;
     case 'C':
     printf("you did ok");
     break;
     case 'D':
     printf("you did poorly");
     break;
     case 'E':
     printf("you did very poorly");
     break;
     case 'F':
     printf("you failed");
     break;
     default:
     printf("unknown");
 }

    return 0;
}