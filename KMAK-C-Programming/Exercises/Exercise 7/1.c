/*Make a program that asks the user two words and then prints out the words in alphabetical order.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first[50];
    char second[50];
    printf("Enter a name: ");
    scanf("%s", &first);
    printf("Enter aother name: ");
    scanf("%s", &second);
    int result = strcmp(first, second);
    if (result == -1)
    {
        printf("%s %s", first, second);
    }
    else
    {
        printf("%s %s", second, first);
    }

    return 0;
}