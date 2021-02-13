#include <stdio.h>

int main()
{
    int num1= 0;
    int num2 =0;
    for(num1 = 0; num1 < 3; num1++)
    {
        int k = ++num1;
        num2 = k - 2;
    }
    printf("%d, %d", num1, num2);
    return 0;
}