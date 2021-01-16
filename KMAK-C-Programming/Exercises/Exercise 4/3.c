/* Write a program for multiplication table (1-10) rehearsal.
 First the program asks the user to enter the multiplier (1-10) and 
 then it asks the calculations one at a time, eg.: 1*2= ?, 2*2=?, 3*2 = ? 
 In the end, the program should print out the number of correct answers.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int score =0;

    printf("Enter a number: ");
    scanf("%i", &number);
    int one = number;
    int two = number * 2;
    int three = number * 3;

    int uone;
    int utwo;
    int uthree;

    printf("what is the value of 1*%i: ", number);
    scanf("%i", &uone);

    printf("what is the value of 2*%i: ", number);
    scanf("%i", &utwo);

    printf("what is the value of 3*%i: ", number);
    scanf("%i", &uthree);

    if (uone == one)
    {
        score++;
    }
    if (utwo == two)
    {
        score++;
    }
    if (uthree == three)
    {
        score++;
    }

    printf("your score is: %i", score);

    return 0;
}