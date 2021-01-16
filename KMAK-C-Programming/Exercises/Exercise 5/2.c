/*Change the program (1.c) so that the user can define how many numbers she wishes to enter.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    printf("How many numbers you want?: ");
    scanf("%i", &number);
    int sum=0;
    int j;
    for (int i = 0; i < number; i++)
    {
        printf("Type a number: ");
        scanf("%i", &j);
        sum+=j;
        
        
        
    }
    printf("The sum of the given numbers is: %i\n", sum);
    printf("The averageof the given numbers is: %i\n", sum / number);

    return 0;
}