#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *name;
    name = (char *)malloc(3 * sizeof(char));
    strcpy(name, "12");
    free(name);
    printf("%s\n", name);
    return 0;
}