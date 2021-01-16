/*Write a program where you use rand()-function to generate a secret number between 0 and 20.
 The user tries to guess the secret number.
  After each wrong answer give the user a hint: “Your number was too big/too small” etc. 
  The rand-function is used as: int secerNumber = rand() % 20 + 1; 
  Before using rand it is recommended to call srand(time(0)); for initializing the seed mused in random number generation.
   Using srand-function requires the inclusion of time.h header: #include <time.h>*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guessNumber;
    
    printf("Guess an integer number: ");
    scanf("%i", &guessNumber);


    srand(time(0));

    secretNumber = rand() % 20 + 1;
    /*printf("%i\n", secretNumber); */
    
    do{
        if(secretNumber > guessNumber){
            printf("Your number was too small. guess again!. new guess: ");
            scanf("%i", &guessNumber);
        }else{
            printf("Your number was too big. guess again!. new guess: ");
            scanf("%i", &guessNumber);
        }

        

    }while(guessNumber != secretNumber);

    printf("You guessed the correct number!!");

    return 0;
}
