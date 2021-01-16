#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int j;
    for (int i = 0; i < 5; i++)
    {
        printf("Type a number: ");
        scanf("%i", &j);
        sum+=j;
        
        
        
    }
    printf("The sum of the given numbers is: %i\n", sum);
    printf("The averageof the given numbers is: %i\n", sum / 5);

    return 0;
}