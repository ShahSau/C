/*Write a program that asks the user for a string (for example: cat). 
The program prints out the converted string (for example: tac)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20];
    printf("Enter a string: ");
    scanf("%s", name);

    int size = strlen(name);
    for (int i = size - 1; i >= 0; i--)
    {
        printf(" %c", name[i]);
    }

    return 0;
}