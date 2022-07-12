#include <stdio.h>

int add(int a , int b){
    return a+b;
}

int main()
{
    int (*fptr)(int,int) =NULL;
    fptr = &add;
    if(fptr!=NULL){
        int result = (*fptr)(4,5);
        printf("the result is %d\n",result);
    }
    return 0;
}