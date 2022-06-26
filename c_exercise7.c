#include <stdio.h>

// travel agency
typedef struct driver
    {
        char name[30];
        char dlNo[13];
        char route[50];
        int kms;
    } dri;
int main()
{
    dri d1, d2, d3;
    printf("Enter details of d1\n");
    scanf("%s", &d1.name);
    scanf("%s", &d1.dlNo);
    scanf("%s", &d1.route);
    scanf("%d", &d1.kms);
    printf("Enter details of d2\n");
    scanf("%s", &d2.name);
    scanf("%s", &d2.dlNo);
    scanf("%s", &d2.route);
    scanf("%d", &d2.kms);
    printf("Enter details of d3\n");
    scanf("%s", &d3.name);
    scanf("%s", &d3.dlNo);
    scanf("%s", &d3.route);
    scanf("%d", &d3.kms);

    printf("***********************************");

    printf("Details of d1\n");
    scanf("%s\n", d1.name);
    scanf("%s\n", d1.dlNo);
    scanf("%s\n", d1.route);
    scanf("%d km\n", d1.kms);
    printf("Details of d2\n");
    scanf("%s\n", d2.name);
    scanf("%s\n", d2.dlNo);
    scanf("%s\n", d2.route);
    scanf("%d km\n", d2.kms);
    printf("Details of d3\n");
    scanf("%s\n", d3.name);
    scanf("%s\n", d3.dlNo);
    scanf("%s\n", d3.route);
    scanf("%d km\n", d3.kms);


    return 0;
}