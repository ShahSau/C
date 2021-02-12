// importing necessray libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//Function prototypes of all the functions
char ask();
int generate();
int checkWin(char userChoiceAsChar, char computersChoiceAsChar);
void printResult(int computerWins, int wins);
char generateComputerChar(int computersChoice);

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
    printf("Best of Luck!\n");

    //Asking user how many rounds the use wants to play
    printf("How many rounds you want to play? : ");
    scanf("%i", &rounds);

    //creating a for loop which runs number of times user selected
    for (int i = 0; i < rounds; i++)
    {
        //storing playes's input as player
        char player = ask();
        //storing computer's random value as computer
        int computer = generate();
        //Converting computer's choice into R/S/P
        char computer_char= generateComputerChar(computer);
        //checking who is the winner
        winner = checkWin(player, computer_char);
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

    //printing the final result after all the rounds
    printf("\n.. the game ends ..\n");
    printf("After %i rounds, the results are: \n", rounds);
    printf("Player won %i/%i times.\n", player_wins, rounds);
    printf("Computer won %i/%i times.\n", computer_wins, rounds);
    printf("Number of ties: %i.\n", number_tie);

    return 0;
}

//int ask() => asks the user's choice 

char ask()
{
    int userChoiceAsInt = 0;
    char userChoiceAsChar;

    // Asking input from the user
    do
    {
        printf("(R)ock, (P)aper or (S)cissors?\n");
        printf("You choose: ");
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
   //Converting uesr's choice to uppercase
    return toupper(userChoiceAsChar);
}
// int generate()=> generate computer's choice
int generate()
{
    int computersChoice = 0;

    //creating random variables between 1 to 3 and storing as computer's choice
    srand(time(0));

    computersChoice = rand() % 3 + 1;

    return computersChoice;
}
char computersChoiceAsChar;
//char generateComputerChar(int computersChoice) => convert computer's choice into R/S/P
char generateComputerChar(int computersChoice)
{
    if (computersChoice == 1)
    {
        computersChoiceAsChar = 'R';
    }
    else if (computersChoice == 2)
    {
        computersChoiceAsChar = 'P';
    }
    else
    {
        computersChoiceAsChar = 'S';
    }
    return computersChoiceAsChar;
}

// int checkwin(char userChoiceAsChar, char computersChoiceAsChar) => compare between user's choice and computer's choice
int checkWin(char userChoiceAsChar, char computersChoiceAsChar)
{
    int wins;
    if (userChoiceAsChar == 'R' && computersChoiceAsChar == 'R')
    {
         wins = 0;
    }
    else if (userChoiceAsChar == 'R' && computersChoiceAsChar == 'S')
    {
         wins = 1;
    }
     else if (userChoiceAsChar == 'R' && computersChoiceAsChar == 'P')
    {
         wins = -1;
    }
    else if (userChoiceAsChar == 'S' && computersChoiceAsChar == 'R')
    {
         wins = -1;
    }
    else if (userChoiceAsChar == 'S' && computersChoiceAsChar == 'S')
    {
         wins = 0;
    }
     else if (userChoiceAsChar == 'S' && computersChoiceAsChar == 'P')
    {
         wins = 1;
    }

    else if (userChoiceAsChar == 'P' && computersChoiceAsChar == 'R')
    {
         wins = 1;
    }
    else if (userChoiceAsChar == 'P' && computersChoiceAsChar == 'S')
    {
         wins = -1;
    }
    else if (userChoiceAsChar == 'P' && computersChoiceAsChar == 'P')
    {
         wins = 0;
    }
    
    return wins;
}
//printResult() => prints computer's choice as text and prints result of individual round
void printResult(int wins, int computersChoice)
{
    // Printing the value of computersChoice as text to the screen
    if (computersChoice == 1)
    {
        printf("Computer choose: Rock.\n");
    }
    else if (computersChoice == 2)
    {
        printf("Computer choose: Paper.\n");
    }
    else
    {
        printf("Computer choose: Sissors.\n");
    }
    // checking for winner's in each round
    if (wins == 1)
    {
        printf("Player wins!!\n");
    }
    else if (wins == -1)
    {
        printf("Computer wins!!\n");
    }
    else if(wins == 0)
    {
        printf("its a tie!!\n");
    }
}