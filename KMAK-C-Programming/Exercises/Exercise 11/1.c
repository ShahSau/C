/*Create a struct HOBBY that has two members: name and schedule
In main, create one dynamic struct HOBBY called hobby1. Set the name and schedule to "orienteering" and "wednesday" using the strcpy-function
Print the values of the members to the console and then free the dynamic struct.
.*/

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

