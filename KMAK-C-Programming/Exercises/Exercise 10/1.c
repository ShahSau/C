/*Define a struct called MOBILEGAME that has three members: name, pulisher and price
In main, create three MOBILEGAME type structs with following information:
game1:  name: HayDay, publisher: Supercell, price: 0.0
game2: name: Geometry Dash, publisher: RobTop Games, price: 2.29
game3: name: Minecraft, publisher: Mojang, price: 7.99

Write a function that gets one struct MOBILEGAME as a parameter and 
prints out the values its members to the console. Test the function.
Write a function that gets two MOBILEGAME structs as a parameter. 
The function prints out the sum of the games' prices to the console.*/


#include <stdio.h>
#include <stdlib.h>
struct MOBILEGAME{
    char name[50];
    char pulisher[50];
    float price;

};
void print_one(struct MOBILEGAME game){
    printf("%s\t %s\t %f\n", game.name, game.pulisher, game.price);
}
void print_two(struct MOBILEGAME game5, struct MOBILEGAME game6){
    printf("%f\n",(game5.price + game6.price)/2 );
}

int main()
{
struct MOBILEGAME game1 ={ "HayDay", "Supercell", 0.0};
struct MOBILEGAME game2 ={ "Geometry Dash", "RobTop Games", 2.29};
struct MOBILEGAME game3 ={ "Minecraft", "Mojang", 7.99};

print_one(game1);
print_one(game2);
print_one(game3);
print_two(game1,game2);



    return 0;
}

