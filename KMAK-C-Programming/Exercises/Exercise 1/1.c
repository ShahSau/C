/*Write a program that asks two float values from the user and prints out the average of the given values.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float avg;

    printf("Type a number");
    scanf("%f", &num1);

    printf("Type a number");
    scanf("%f", &num2);

    avg = (num1 + num2) / 2;

    printf("the average of the given numbers are: %lf\n", avg);

    return 0;
}