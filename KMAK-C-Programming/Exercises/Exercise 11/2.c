/*Create a function createNewHobby() that returns a struct HOBBY as a return value. The function asks the user the name and the schedule of a hobby and creates a struct HOBBY variable (not a dynamic one!)
In main, create a dynamic array of type struct HOBBY. First, ask the user how many hobbies she wants to add. Then in a for-loop, call the createNewHobby-function and add the hobbies into array.
Create a function called printHobbyDays. The function gets a struct HOBBY type array and its size as a parameter. The function prints out the names of the hobby days. (schedule). Test the function from the main method.
Free the hobbies array*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct HOBBY
{
    char name[50];
    char schedule[50];
};
struct HOBBY createNewHobby();
void printHobbyDays(struct HOBBY *hobbies, int size);
int main()
{ 
  int size =0;
  printf("How many hobbies you want to add: ");
  scanf("%i", &size);
  struct HOBBY *hobbies = (struct HOBBY *)malloc(sizeof(struct HOBBY)*size);
  for(int i=0; i<size;i++){
      hobbies[i]=createNewHobby();
  }
  printHobbyDays(hobbies, size);
  free(hobbies);

    return 0;
}
struct HOBBY createNewHobby()
{
    struct HOBBY newHobby;
    printf("name of the hobby: ");
    scanf("%s", &(newHobby.name));
    printf("Schedule of the hobby: ");
    scanf("%s", &(newHobby.schedule));
    return newHobby;
}

void printHobbyDays(struct HOBBY *hobbies, int size){
    printf("You have hobbies on:");
    for(int i=0; i <size; i++){
        printf("%s\n", hobbies[i].schedule);
    }
    printf("\n");
}