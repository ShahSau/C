/*Write a calculator program for sum and multiplication. 
First, the user is asked to input two values and then the sign of the operand (either '+' or '*'). 
The program calculates and prints out the result.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char op;
    printf("choose a number: ");
    scanf("%f", &num1);
    printf("choose a operator: \n");
    scanf(" %c", &op);
    printf("choose another number: ");
    scanf("%f", &num2);

    if (op == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else
    {
        printf("invalid character");
    }

    return 0;
}
