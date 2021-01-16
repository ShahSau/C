/*Write a program that asks the user a number of a month (1-12) and
 prints out the number of days in the given month ( for example: 1 -> 31 days, 4 -> 30 days).
 Use switch-case and exploit the “falling through” execution when omitting break. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter a number of a month (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("The number of days in the given month is: 31 days");
        break;
    case 2:
        printf("The number of days in the given month is: 28 days");
        break;
    case 3:
        printf("The number of days in the given month is: 31 days");
        break;
    case 4:
        printf("The number of days in the given month is: 30 days");
        break;
    case 5:
        printf("The number of days in the given month is: 31 days");
        break;
    case 6:
        printf("The number of days in the given month is: 30 days");
        break;
    case 7:
        printf("The number of days in the given month is: 31 days");
        break;
    case 8:
        printf("The number of days in the given month is: 31 days");
        break;
    case 9:
        printf("The number of days in the given month is: 30 days");
        break;
    case 10:
        printf("The number of days in the given month is: 31 days");
        break;
    case 11:
        printf("The number of days in the given month is: 30 days");
        break;
    case 12:
        printf("The number of days in the given month is: 31 days");
        break;
    default:
        printf("The entered number is not between 1 to 12");
    }

    return 0;
}