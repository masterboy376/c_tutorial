#include <stdio.h>
#include "extern_variable.c"

int func()
{
    // int var;//local variable
    extern int var;//global variable
    var = 100;
    return var;
}

int main()
{
    //    declaration: tell the compiler about a variable but do not reserve the space for it
    //   defination: declaration+ space reservation
    printf("%d from function\n", func());
    printf("%d from global\n", var);
    return 0;
}