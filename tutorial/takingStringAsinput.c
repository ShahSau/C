#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("your name is: ");
    fgets(name,20,stdin);
    printf("%s",name);
    return 0;
}