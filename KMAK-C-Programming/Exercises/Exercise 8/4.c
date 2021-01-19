/*Write a function that returns the number of occurrences of a given number in the given array. 
The function gets three parameters.*/


#include <stdio.h>
#include <stdlib.h>
int arr(int int_array[], int size, int number);

int main()
{
    int arr_main[] = {1, 3, 3, 4, 5, 6, 3};

    printf("%i\n",arr(arr_main, 7, 3));

    return 0;
}
int arr(int int_array[], int size, int number)
{
    int occurance = 0;
    for (int i = 0; i < size; i++)
    {
        if(int_array[i] == number){
            occurance++;
        }
    }
    return occurance;
}