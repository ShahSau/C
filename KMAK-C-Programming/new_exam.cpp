#define _CRT_SECURE_NO_WARNINGS // Visual Studio related, you can remove if you're not using VS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Define a struct called FRIEND
struct FRIEND
{
    char name[50];
    char phone[50];
};


struct FRIEND askFriendInfo(); // implement this function

void printFriendInfo(struct FRIEND friends[], int size); // implement this function

int main()

{

	// Phonebook:

	struct FRIEND friends[10];

	int sizeNow = 0;

	// Add some data for testing:

	struct FRIEND friend1 = { "Donald Duck", "555-123" };

	struct FRIEND friend2 = { "Mickey Mouse", "555-346" };

	friends[0] = friend1;

	friends[1] = friend2;

	sizeNow = 2;



	int selection = 1;

	printf("Welcome to phonebook application. Version 0.001. \n");

	do {

		printf("Please select one of the following: \n");

		printf(" (1) Print all friends \n");

		printf(" (2) Add new friend \n");

		printf(" (0) Quit \n");

		scanf("%d", &selection);



		switch (selection)

		{

		case 1:

			printFriendInfo(friends, sizeNow);

			break;

		case 2:

			if (sizeNow < 10)

			{

				friends[sizeNow] = askFriendInfo();

				sizeNow++;

			}

			else

			{

				printf("Sorry, phonebook is already full\n");

			}

			break;

		case 0:

			break;

		}

	} while (selection != 0);

}



struct FRIEND askFriendInfo()
{
    struct FRIEND newFriend;
    printf("enter friend\n");
    printf("name: ");
    gets(newFriend.name);
    printf("phonr:");
   // scanf("%s", &newFriend.phone);
    gets(newFriend.phone);
    printf("KK:");
    char buf[30]; 
    gets(newFriend.name); 
    
    return newFriend;
}


void printFriendInfo(struct FRIEND friends[], int size)
{
    printf("*** phone book ***\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s %s\t",friends[i].name, friends[i].phone );
    }
}







