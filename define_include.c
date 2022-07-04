#include <stdio.h>

// defining varialbe
#define PI 3.14
// defining macros
#define SQUARE(x) (x*x)
// debuging


int main()
{
    int radius = 4;
    printf("%f\n",PI*SQUARE(radius));

    return 0;
}