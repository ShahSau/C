/*Write a program that asks two integers from the user and checks if the other is divisible by the other (use % operand).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("Enter a number: ");
    scanf("%i", &num1);

    printf("Enter another number: ");
    scanf("%i", &num2);

    if(num1 % num2 ==0){
        printf("%i is divided by %i\n", num1, num2);
    }else if(num2 % num1 ==0){
        printf("%i is divided by %i\n", num2, num1);
    }else
    {
        printf("%i and %i are not divided by each other.\n", num1, num2);
    }
    




    return 0;
}