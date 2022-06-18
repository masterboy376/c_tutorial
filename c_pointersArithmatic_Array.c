#include <stdio.h>


int main() {

// pointer arithmatic
    char a = 'c';
    char* ptr = &a;
    printf("%d\n", ptr);
    ptr++; //size of a ==
    printf("%d\n", ptr);
    printf("%d\n", ptr-2);

//array and pointer
    int arr[] = {1,2,3,4,5,6,7};
    // address
    printf("%d\n", &arr[0]); 
    printf("%d\n", arr);
    printf("%d\n", &arr[1]); 
    printf("%d\n", arr+1);

    //values
    printf("%d\n", *(&arr[0])); 
    printf("%d\n", arr[0]); 
    printf("%d\n", *(arr));
    printf("%d\n", *(&arr[1])); 
    printf("%d\n", arr[1]); 
    printf("%d\n", *(arr+1));

    int* arrptr = arr;
    //arr++; //not possible->this is const
    arrptr++; //possible



  return 0;
}