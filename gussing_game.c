#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 9;
    int guess;
    int guessCount = 0;
    int guesslimit = 5;
    int outofguesses = 0;

    do
    {
        printf("enter a number: ");
        scanf("%d", &guess);
        printf("wrong guess, try again!\n");
        guessCount++;

    } while (guess != secretNum && guessCount < guesslimit);
    if (guess == secretNum)
    {
        printf("You guessed it right!!\n");
    }
    else
    {
        printf("out of guesses\n");
    }

    return 0;
}