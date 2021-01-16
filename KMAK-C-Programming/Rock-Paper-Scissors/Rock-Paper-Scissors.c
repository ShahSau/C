/* importing necessray libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* creating variables*/
    int wins =0;
    int computerWins=0;
    int computersChoice;
    int rounds;
    char userChoiceAsChar;
    int userChoiceAsInt;
    int result;

    /* Printing welcome messgae*/
    printf("Welcome to Rock-Paper-Scissors game!\n");

    printf("How many founds you want to play? :\n");
    scanf("%i", &rounds);

    for (int i = 0; i < rounds; i++)
    {
        /* creating random variables*/
        srand(time(0));

        computersChoice = rand() % 3 + 1;
        /*printf("Computer has choosen: %d\n: ", computersChoice);*/

        /* Printing the value of computersChoice as text to the screen*/
        if (computersChoice == 1)
        {
            printf("Computer choose Rock\n");
        }
        else if (computersChoice == 2)
        {
            printf("Computer choose Paper\n");
        }
        else
        {
            printf("Computer choose Sissors\n");
        }

        /* Asking input from the user*/
        do
        {
            printf("(R)ock, (P)aper or (S)cissors?\n");
            scanf(" %c", &userChoiceAsChar);
            if (userChoiceAsChar == 'R' || userChoiceAsChar == 'r' || userChoiceAsChar == 'P' || userChoiceAsChar == 'p' || userChoiceAsChar == 'S' || userChoiceAsChar == 's')
            {
                break;
            }
            else
            {
                continue;
            }

        } while (1);

        /*printf("%c\n", userChoiceAsChar);*/

        /*Converting user choice into integer*/
        if (userChoiceAsChar == 'R' || userChoiceAsChar == 'r')
        {
            userChoiceAsInt = 1;
        }
        else if (userChoiceAsChar == 'P' || userChoiceAsChar == 'p')
        {
            userChoiceAsInt = 2;
        }
        else
        {
            userChoiceAsInt = 3;
        }
        if (userChoiceAsInt < computersChoice)
        {
            computerWins++;
            printf("Player won!!\n");
        }
        else if (userChoiceAsInt > computersChoice)
        {
            wins++;
            printf("Computer won!!\n");
        }
        else
        {
            printf("It's a tie!!\n");
        }
    }
    printf("Number of times computer wins: %i\n", computerWins);
    printf("Number of times player wins: %i\n", wins);
    return 0;
}