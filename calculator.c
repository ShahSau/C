#include <stdio.h>
#include <stdlib.h>

double calc(double num1, double num2, char cha);
int main()
{
    
    printf("%f",calc(4,8,'+'));

    return 0;
}

double calc(double num1, double num2, char cha){
    double result;
    if(cha == '+'){
        result= num1 + num2;
    }else if(cha == '-'){
        result= num1 - num2;
    }else if(cha == '*'){
        result= num1 * num2;
    }else{
        result= num1 / num2;
    }

    return result;
}