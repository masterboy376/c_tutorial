#include <stdio.h>

#define RUNNER 1

int main()
{
    // #ifdef RUNNER 
    //     printf("file name is %s\n", __FILE__);
    //     printf("date is %s\n", __DATE__);
    //     printf("time is %s\n", __TIME__);
    //     printf("line no. is %d\n", __LINE__);
    //     printf("ANSI: %d\n", __STDC__);

    // #ifndef RUNNER 
    //     printf("RUNNER is not defined");

    //---------------------------------------------------------

    #if (RUNNER)
        printf("if compiled\n");
    #elif (RUNNERA)
        printf("elif compiled\n");
    #else
        printf("else compiled\n");

    //---------------------------------------------------------

    #endif //necessary if you are using #ifndef, #if, #else, #elif or #ifdef
        printf("The value of RUNNER : %d\n", RUNNER);



    return 0;
}