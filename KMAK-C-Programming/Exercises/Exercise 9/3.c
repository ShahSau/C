/*Write a function that gets two int pointers as a parameter. The function prints out the bigger integer.*/

#include <stdio.h>
#include <stdlib.h>
void bigger(int *pnum1, int *pnum2);

int main()
{
    int number1;
    int number2;
    int *pnumber1 = &number1;
    int *pnumber2 = &number2;
    printf("Enter a number: ");
    scanf("%i", &number1);
    printf("Enter another number: ");
    scanf("%i", &number2);
bigger(pnumber1,pnumber2);

    return 0;
}
void bigger(int *pnum1, int *pnum2)
{
    if(*pnum1 > *pnum2){
printf("%i",*pnum1);
    }else{
        printf("%i",*pnum2);
    }
   
}
