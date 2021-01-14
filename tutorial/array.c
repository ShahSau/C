#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lucky[] = {1, 2, 3, 4, 5, 6, 7, 8};
    /*printing an elemnet of an array called lucky*/
    printf("%d\n", lucky[3]);
    /*changing an elemnet of an array called lucky*/
    lucky[3] = 99;

    /*printing an elemnet of an array called lucky*/
    printf("%d", lucky[3]);

    /*creating an empty array*/
    int luckyNumbers[10];

    return 0;
}