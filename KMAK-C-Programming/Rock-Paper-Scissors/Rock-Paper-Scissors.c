/* importing necessray libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* creating variables*/
    int wins;
    int computerWins;
    int computersChoice;
    int rounds;
    char userChoiceAsChar;
    int userChoiceAsInt;

    /* Printing welcome messgae*/
    printf("Welcome to Rock-Paper-Scissors game!\n");

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
    printf("(R)ock, (P)aper or (S)cissors?\n");
    scanf(" %c",&userChoiceAsChar);
    /*printf("%c\n", userChoiceAsChar);*/

    /*Converting user choice into integer*/
    if(userChoiceAsChar == 'R' || userChoiceAsChar == 'r'){
        userChoiceAsInt =1;
    }else if(userChoiceAsChar == 'P' || userChoiceAsChar == 'p'){
        userChoiceAsInt =2;
    }else {
        userChoiceAsInt =3;
    }

    printf("%c\n", userChoiceAsChar);
    printf("%i\n", userChoiceAsInt);
    return 0;
}