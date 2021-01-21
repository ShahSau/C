// importing necessray libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function prototypes of all the function
int ask();
int generate();
int checkWin(int userChoiceAsInt, int computersChoice);
void printResult(int computerWins, int wins);

int main()
{
    // creating all the variables
    int rounds;
    int player_wins = 0;
    int number_tie = 0;
    int computer_wins = 0;
    int winner = 0;

    //Printing welcome messgae
    printf("Welcome to Rock-Paper-Scissors game!\n");

    //Asking user how many rounds the use wants to play
    printf("How many rounds you want to play? : ");
    scanf("%i", &rounds);

    //creating a for loop which runs number of times user selected
    for (int i = 0; i < rounds; i++)
    {
        //storing playes's input as player
        int player = ask();
        //storing computer's random value as computer
        int computer = generate();

        winner = checkWin(player, computer);
        if (winner == 1)
        {
            player_wins++;
        }
        else if (winner == -1)
        {
            computer_wins++;
        }
        else
        {
            number_tie++;
        }

        printResult(winner, computer);
    }
    printf("\n.. the game ends ..\n");
    printf("Player won %i/%i times\n", player_wins, rounds);
    printf("Computer won %i/%i times\n", computer_wins, rounds);
    printf("Number of ties: %i\n", number_tie);

    return 0;
}

//int ask() - asks the user's choice and returns it as a number

int ask()
{
    int userChoiceAsInt = 0;
    char userChoiceAsChar;

    // Asking input from the user
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

    //Converting user choice into integer
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
    return userChoiceAsInt;
}

int generate()
{
    int computersChoice = 0;

    //creating random variables
    srand(time(0));

    computersChoice = rand() % 3 + 1;
    //printf("Computer has choosen: %d\n: ", computersChoice);

    // Printing the value of computersChoice as text to the screen
    return computersChoice;
}

int checkWin(int userChoiceAsInt, int computersChoice)
{
    int wins;

    if (userChoiceAsInt < computersChoice)
    {
        wins = 1;
    }
    else if (userChoiceAsInt == computersChoice)
    {
        wins = 0;
    }
    else
    {
        wins = -1;
    }
    return wins;
}

void printResult(int wins, int computersChoice)
{
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

    if (wins == 1)
    {
        printf("Player wins!!\n");
    }
    else if (wins == -1)
    {
        printf("Computer wins!!\n");
    }
    else
    {
        printf("its a tie\n");
    }
}