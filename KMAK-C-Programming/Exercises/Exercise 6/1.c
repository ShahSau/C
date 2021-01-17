/*Write a program that asks the user to input 10 numbers and inserts them into an array.
 Then the program prints out all the numbers between 1 and 5 (inclusive).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int num = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: \n");
        scanf("%i", &num);
        numbers[i] = num;
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%i,", numbers[j]);
    }

    return 0;
}