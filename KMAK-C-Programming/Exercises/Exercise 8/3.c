/*Write a function that counts the average of the elements of the int array passes as a parameter. */

#include <stdio.h>
#include <stdlib.h>
int arr(int int_array[], int size);

int main()
{
    int arr_main[] = {1, 2, 3, 4, 5, 6, 7};

    printf("%i",arr(arr_main, 7));

    return 0;
}
int arr(int int_array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + int_array[i];
    }
    return sum / size;
}