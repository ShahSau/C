#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    char major[50];
    double gpa;
    int age;
};
int main()
{
    struct student student1;
    student1.gpa = 3.4;
    student1.age = 40;
    /*with string we cannot assign a vlue like we did incase of gpa and age. we use strcpy(target, value).*/
    strcpy(student1.name, "jim");

    struct student student2;
    student2.gpa = 3.33;
    student2.age = 30;
    /*with string we cannot assign a vlue like we did incase of gpa and age. we use strcpy(target, value).*/
    strcpy(student2.name, "jjjj");
    printf("%s\n", student1.name);
    printf("%s\n", student2.name);
    return 0;
}