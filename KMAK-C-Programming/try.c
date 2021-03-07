#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   char name[50];
   int num;
   printf("enter:");
   gets(name);
   //printf("%s", name);
   printf("num: ");
   scanf("%i", num);
   printf("%s", name);
   return 0;
}