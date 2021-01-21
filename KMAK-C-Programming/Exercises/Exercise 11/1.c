/*Create a struct HOBBY that has two members: name and schedule
In main, create one dynamic struct HOBBY called hobby1. Set the name and schedule to "orienteering" and "wednesday" using the strcpy-function
Print the values of the members to the console and then free the dynamic struct.
Create a function createNewHobby() that returns a struct HOBBY as a return value. The function asks the user the name and the schedule of a hobby and creates a struct HOBBY variable (not a dynamic one!)
In main, create a dynamic array of type struct HOBBY. First, ask the user how many hobbies she wants to add. Then in a for-loop, call the createNewHobby-function and add the hobbies into array.
Create a function called printHobbyDays. The function gets a struct HOBBY type array and its size as a parameter. The function prints out the names of the hobby days. (schedule). Test the function from the main method.
Free the hobbies array.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct HOBBY
{
    char name[50];
    char schedule[50];
};

int main()
{
    struct HOBBY *hobby1 = (struct HOBBY *)malloc(sizeof(struct HOBBY));
    strcpy(hobby1->name, "orienteering");
    strcpy(hobby1->schedule, "wednesday");

    printf("%s %s", hobby1->name, hobby1->schedule);
    free(hobby1);

    return 0;
}