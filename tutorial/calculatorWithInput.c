#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;
    printf("choose a number: ");
    scanf("%lf", &num1);
    printf("choose a operator: ");
    scanf(" %c", &op);
    printf("choose another number: ");
    scanf("%lf", &num2);

    if(op== '+'){
        printf("%f", num1 + num2);
    }else if (op=='-'){
        printf("%f",num1 - num2);
    }else if(op == '*'){
        printf("%f",num1 * num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else{
        printf("invalid character");
    }






    return 0;
}
