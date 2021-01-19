/*Write a function that gets two parameters: the price and the discount percent.
 The function returns the reduced price. Test your function in the main function. */

 #include <stdio.h>
#include <stdlib.h>
void shopping(float num1, float num2);

int main()
{
    float price = 0.0f;
    float discount = 0.0f;
    printf("Original price : ");
    scanf("%f", &price);
    printf("Discount: ");
    scanf("%f", &discount);
    shopping(price,discount);


    return 0;

}

void shopping(float num1, float num2){
    float discount_price = num1-(num1*(num2/100));
    printf("The price after discount is: %f\n", discount_price);
    float discount_price2 =num1*(num2/100);
    printf("The discounted price is: %f\n", discount_price2);
}