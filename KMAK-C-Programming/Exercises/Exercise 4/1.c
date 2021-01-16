#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter a number of a month (1-12): ");
    scanf("%d", &month);
    do
    {
        if (month == -1)
        {
            printf("Thank you!\n");
            break;
        }
        else
        {
            switch (month)
            {
            case 1:
                printf("The number of days in the given month is: 31 days\n");
                break;
            case 2:
                printf("The number of days in the given month is: 28 days\n");
                break;
            case 3:
                printf("The number of days in the given month is: 31 days\n");
                break;
            case 4:
                printf("The number of days in the given month is: 30 days\n");
                break;
            case 5:
                printf("The number of days in the given month is: 31 days\n");
                break;
            case 6:
                printf("The number of days in the given month is: 30 days\n");
                break;
            case 7:
                printf("The number of days in the given month is: 31 days\n");
                break;
            case 8:
                printf("The number of days in the given month is: 31 days\n");
                break;
            case 9:
                printf("The number of days in the given month is: 30 days\n");
                break;
            case 10:
                printf("The number of days in the given month is: 31 days\n");
                break;
            case 11:
                printf("The number of days in the given month is: 30 days\n");
                break;
            case 12:
                printf("The number of days in the given month is: 31 days\n");
                break;
            default:
                printf("The entered number is not between 1 to 12\n");
            }
        }
        printf("you want to try again? press -1 to exit: ");
        scanf("%d", &month);

    }while(1);

    return 0;
}