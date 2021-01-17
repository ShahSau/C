/*Write a program that asks the user to input the time (in hours) used for studying for each day (from Monday to Sunday). 
The program calculates the average time and the total time (separated for weekdays and for the weekend). 
Use an array. See the example output:
       Your average study time is 1.3 h /day 
       On weekdays you have studied 12.4 h in total
       On weekend you have studied 5 h in total*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day[] = {1, 2, 3, 4, 5, 6, 7};
    int time[5];
    int k = 0;
    int sum = 0;
    int weekEnd_sum = 0;
    int total = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("How much you studied on day %i of the week\n", day[i]);
        scanf("%d", &k);
        time[i] = k;
    }

    for (int j = 0; j < 5; j++)
    {
        sum = sum + time[j];
    }
    for (int l = 5; l < 7; l++)
    {
        weekEnd_sum = weekEnd_sum + time[l];
    }
    total = sum + weekEnd_sum;
    printf("Your average study time is %i h /day \n", total / 7);
    printf("On weekdays you have studied %i h in total\n", sum);
    printf("On weekend you have studied %i h in total\n", weekEnd_sum);
    return 0;
}