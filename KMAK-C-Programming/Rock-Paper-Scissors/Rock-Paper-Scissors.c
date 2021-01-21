// importing necessray libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function prototypes of all the functions
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

//checking who is the winner
        winner = checkWin(player, computer);
//couting up the number of wins for player or computer or number of tie after each round
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

//printing out the result of a single round

        printResult(winner, computer);
    }

//printing the final result of all the rounds
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
//Checking for a valid input
        if (userChoiceAsChar == 'R' || userChoiceAsChar == 'r' || userChoiceAsChar == 'P' || userChoiceAsChar == 'p' || userChoiceAsChar == 'S' || userChoiceAsChar == 's')
        {
            break;
        }
        //if valid input not found ask again
        else
        {
            continue;
        }

    } while (1);

    //Converting user choice into an integer
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
// int generate() generate computer's choice
int generate()
{
    int computersChoice = 0;

    //creating random variables between 1 to 3 and storing as computer's choice
    srand(time(0));

    computersChoice = rand() % 3 + 1;


    return computersChoice;
}

// int checkwin() 
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
    // Printing the value of computersChoice as text to the screen
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