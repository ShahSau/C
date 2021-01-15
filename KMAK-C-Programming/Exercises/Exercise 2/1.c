/*Write a program that asks one integer number from the user and analyzes it. 
The program should print out either "The number is negative", "The number is positive" or  "The number is zero" 
depending on the input.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num > 0){
        printf("The number is positive.");
    }else if(num<0){
        printf("he number is negative.");
    }else{
        printf("The number is zero.");
    }


    return 0;
}