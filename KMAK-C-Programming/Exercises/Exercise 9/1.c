/*Write a program where you define three integer variables: number1, number2 and sum. 
Then define three integer pointers that point to the aforementioned variables. 
Ask the user two integer values and calculate and print out the sum using only the pointers.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1;
    int number2;
    int sum;
    int *pnumber1 = &number1;
    int *pnumber2 = &number2;
    int *psum = &sum;

    printf("Enter a number: ");
    scanf("%i", &number1);
    printf("Enter another number: ");
    scanf("%i", &number2);

    sum = *pnumber1 + *pnumber2;

    printf("the sum is : %i", *psum);

    return 0;
}