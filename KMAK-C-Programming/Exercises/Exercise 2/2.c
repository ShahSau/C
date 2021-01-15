/*Write a program that asks the price and the discount percentage of some product from the user. 
The program calculates and prints out the discounted price. 
If the discount percentage is over or equal to 50, the program prints out "great deal!".
 If the discout percentage is smaller or equal to 10, program prints out "not so great deal!"*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price;
    float discount_percentage;
    float discounted_price;

    printf("price before the discount: ");
    scanf("%f", &price);

    printf("discount percentage is: ");
    scanf("%f", &discount_percentage);

    discounted_price = price-((discount_percentage / 100) * price);
    printf("The price after discount are: %f\n", discounted_price);
    if (discounted_price > 50)
    {
        printf("great deal!");
    }
    else if (discounted_price <= 50 && discounted_price > 10)
    {
        printf("godd deal!");
    }
    else
    {
        printf("not so great deal!");
    }

    return 0;
}