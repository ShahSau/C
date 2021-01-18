/*Make a program for learning foreign language words. In the program, there are few hard coded words 
which counterparts are asked from the user, for example: 
Please enter the word in English:
kissa > a cat
koira > a dog
...
...
marsu > a guine pig

You got 5/5 points!*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char finn[5][20] = {"kissa", "koira", "moi", "kittos", "marsu"};
    char eng[5][20] = {"a cat", "a dog", "hello", "thank you", "a guine pig"};
    char answer[20];
    int points =0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("What is the english word of the following finish word? \n");
        printf("%s\n", finn[i]);
        gets_s(answer);
        if(strcmp( answer, eng[i]) == 0){
            points++;
        }

    }
    printf("You got %i/5 points!", points);

    return 0;
}