/* Write a program that converts Fahrenheit values into Celcius values. 
You need to apply the following formula: C = (5.0/9.0)*(F-32). 
The program should ask the F value as an input and after calculation, print out the value in Celcius.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float fah;
    float cel;

    printf("Type temperature fahrenheit: ");
    scanf("%f", &fah);

    cel = (5.0 / 9.0) * (fah - 32);

    printf("The temperature in clecius is: %lf\n", cel);

    return 0;
}