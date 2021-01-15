#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char noun[20];
    char celebrityF[20];
char celebrityL[20];
    printf("enter a color: ");
    /*fgets(color, 20, stdin);*/
    scanf("%s", color);

    printf("enter a noun: ");
    /*fgets(noun, 20, stdin);*/
    scanf("%s", noun);
    printf("enter a celebrity: ");
    /*fgets(celebrity, 20, stdin);*/
    scanf("%s %s", celebrityF, celebrityL);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}