/*Write a simple calculator program. The program asks for two operands (floats) 
and then the operator (char: +, - / or *). The program prints out the result. For example: 5+2=7 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char op;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        printf("The addition of two given numbers is: %f", num1 + num2);
        break;
    case '-':
        printf("The addition of two given numbers is: %f", num1 - num2);
        break;
    case '*':
        printf("The addition of two given numbers is: %f", num1 * num2);
        break;
    case '/':
        printf("The addition of two given numbers is: %f", num1 / num2);
        break;
    default:
        printf("invalid operator");
    }

    return 0;
}