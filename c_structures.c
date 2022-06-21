#include <stdio.h>
#include <string.h>

int main()
{

    struct student
    {
        int rollNo;
        float marks;
        char name[100];
    };
    struct student s1;
    s1.rollNo = 1;
    s1.marks = 99.99;
    strcpy(s1.name, "Sambhav kaushik");
    // OR
    struct student s2 = { 2 , 98.78};
    strcpy(s2.name, "Kathy");

    printf("the student with roll number %d with name %s got the marks %f\n", s1.rollNo, s1.name, s1.marks);
    printf("the student with roll number %d with name %s got the marks %f\n", s2.rollNo, s2.name, s2.marks);
    

    return 0;
}