/* Write a function that swaps the values of two integers. Test your function in main*/

#include <stdio.h>
#include <stdlib.h>
void swap(int num1,int num2);
int main()
{

swap(5,6);


    return 0;
}
void swap(num1,num2){

    int *pNum1= &num1;
    int *pNum2= &num2;
    /* printf("Enter a number: ");
    scanf("%i", &num1);
    printf("Enter another number: ");
    scanf("%i", &num2); */
*pNum2 =num1;
    printf("number are, num1: %p and num2:%p", pNum1, pNum2);

}