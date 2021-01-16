#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int r;

    printf("number of columns: ");
    scanf("%d", &c);
    printf("number of rows: ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}