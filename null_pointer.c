#include <stdio.h>

int changeVal(int *address)
{
    if (address != NULL)
    {
        int a = 999;
        address = &a;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int *p;
    p = NULL; // (void *)0
    int returnVal = changeVal(p);
    if (returnVal != 0)
    {
        printf("%d\n", *p);
    }
    else{
        printf("p was a null pointer\n");
    }

    int num = 4;
    p = &num;
    returnVal = changeVal(p);
    if (returnVal != 0)
    {
        printf("%d\n", *p);
    }
    else{
        printf("p was a null pointer\n");
    }

    return 0;
}