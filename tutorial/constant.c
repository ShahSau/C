#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* constant give the all uppercase name*/
    const int NUM=8;
    printf("%d\n", NUM);

    const char STRING[]= "non changable string";

    printf("%s", STRING);
    return 0;
}