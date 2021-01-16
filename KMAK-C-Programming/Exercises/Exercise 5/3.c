/*Write a program that prints out all the numbers between the two given integer values.
 For example, user enters 14 and then 20, the program prints out: 15, 16, 17, 18, 19*/



 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int num1;
     int num2;

     printf("Enter a number: ");
     scanf("%i",&num1);

 printf("Enter a number: ");
     scanf("%i",&num2);

     for(int i = num1+1; i< num2; i++){
         printf("%i, ", i);
     }

     return 0;
 }