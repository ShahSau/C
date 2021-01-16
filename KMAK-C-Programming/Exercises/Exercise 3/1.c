/*Write a program that asks the user a number between 1-5 and prints out the given number as a text. 
For example “1” should result as “one”. Use switch-case.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 3;

    switch (num)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("4\n");
        break;
    case 5:
        printf("5\n");
        break;
    default:
        printf("Number is not between 1 to 5.\n");
    }

    return 0;
}