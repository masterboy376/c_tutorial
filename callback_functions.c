#include <stdio.h>

int add(int a , int b){
    return a+b;
}

void greetGerman(int (*fptr)(int, int)){
    printf("guten morgen\n");
    printf("ein und zwei ist %d\n", fptr(1,2));
}

void greetEnglish(int (*fptr)(int, int)){
    printf("good morning\n");
    printf("one and two is %d\n", fptr(1,2));
}

int main()
{
    int (*ptr)(int,int) =NULL;
    ptr = add;
    if(ptr!=NULL){
        greetEnglish(ptr);
        greetGerman(ptr);
    }
    return 0;
}