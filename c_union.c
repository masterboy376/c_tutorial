#include <stdio.h>
#include <string.h>

int main()
{

    union student
    {
        int rollNo;
        float marks;
        char name[100];
    };
    union student s1;
    s1.rollNo = 1;
    printf("roll no of s1 is %d\n",s1.rollNo);
    s1.marks = 99.99;
    printf("marks of s1 is %f\n",s1.marks);
    strcpy(s1.name, "Sambhav kaushik");
    printf("name of s1 is %s\n",s1.name);

    return 0;
}