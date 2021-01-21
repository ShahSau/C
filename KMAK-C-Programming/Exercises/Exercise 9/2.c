/* Write a function that swaps the values of two integers. Test your function in main*/

#include <stdio.h>
#include <stdlib.h>
void swap(int num1, int num2);
int main()
{

    swap(7, 10);

    return 0;
}
void swap(num1, num2)
{

    int *pNum1 = &num1;
    int *pNum2 = &num2;
    int copy_num2 = num2;

    *pNum2 = num1;
    *pNum1 = copy_num2;
    printf("number are, num1: %i and num2:%i", num1, num2);
}