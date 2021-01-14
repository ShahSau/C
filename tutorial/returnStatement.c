#include <stdio.h>
#include <stdlib.h>
#include  <math.h> 
double number();
int main()
{
    printf("anser is %f", number(3.0));

    return 0;
}

double number(double num){
    return  num * num *num;
};