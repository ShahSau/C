#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age= 40;
    double gpa= 3.6;
    float cgpa = 3.3;
    char grade = 'A';
    char phrase[]= "Hii everyone";
    printf("I am %d years old\n",age);
    printf("My cgpa is %f\n",cgpa);
    printf("My grade is before %c.\n", grade);
    printf("My favoutite line is %s.\n", phrase);
    grade= 'B';
    printf("My grade is after %c .\n", grade);
    printf("My favoutite line is %s.\n", phrase);



    return 0;
}