/*Write a program that asks the user the radius of a circle. The program calculates the area of the circle and prints it out.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float radius;
    float area;
    float area1;
    const float PI=3.141593;

    printf("Type the radius: ");
    scanf("%f", &radius);



    area = PI * radius *radius;
    area1 = PI * pow(radius, 2);

    printf("The area of the circle: %lf\n", area1);

    return 0;
}