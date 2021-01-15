#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    double gpa = 3.7;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;
    

    printf("age's memory address is: '%p\n", pAge);
    return 0;
}