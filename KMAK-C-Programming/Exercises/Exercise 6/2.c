/*Write a program that asks the user to input 10 values and then prints out the smallest value. Use an array.*/
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
    int small = numbers[0];
    for (int j = 0; j < 10; j++)
    {
        if (small > numbers[j])
        {
            small = numbers[j];
        }
    }
    printf("%i", small);

    return 0;
}