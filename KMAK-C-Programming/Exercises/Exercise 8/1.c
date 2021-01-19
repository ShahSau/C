#include <stdio.h>
#include <stdlib.h>
void area(float num1, float num2);

int main()
{
    float length = 0.0f;
    float width = 0.0f;
    printf("Type the length: ");
    scanf("%f", &length);
    printf("Type the width: ");
    scanf("%f", &width);
    area(length, width);

    return 0;
}

void area(float num1, float num2)
{
    printf("The area is: %f", num1 * num2);
};