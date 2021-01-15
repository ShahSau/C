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

    /* Printing welcome messgae*/
    printf("Welcome to Rock-Paper-Scissors game!");
    
    /* creating random variables*/
    srand(time(0));

    computersChoice = rand() % 3 + 1;
    printf("Computer has choosen: %d\n: ", computersChoice);

    return 0;
}