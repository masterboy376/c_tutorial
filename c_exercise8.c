#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("enter the total number of employees we have: ");
    scanf("%d", &t);
    getchar();
    int ex_no = 0;
    char *ptr;
    while (t--)
    {
        int len;
        printf("EMPLOYEE %d\n", ex_no+1);
        printf("enter the length of your employee ID: ");
        scanf("%d", &len);
        getchar();
        if (ex_no == 0)
        {
            ptr = (char *)malloc((len + 1) * sizeof(char));
        }
        else
        {
            ptr = (char *)realloc(ptr, (len + 1) * sizeof(char));
        }
        printf("enter your employee ID: ");
        scanf("%s", ptr);
        getchar();
        printf("your employee ID is: ");
        printf("%s\n", ptr);
        printf("******************************************************\n");
        ex_no++;
    }
    free(ptr);
    printf("free ptr\n");

    return 0;
}
