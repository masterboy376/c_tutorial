#include <stdio.h>

// array reversal

void arrayReversal(int a[], int len){
    int i, temp;
    if(len%2==0){
        for(i = 0; i<len/2; i++){
            temp = a[i];
            a[i] = a[len-1-i];
            a[len-1-i]=temp;
        }
    }
    else{
        for(i = 0; i<(len+1)/2; i++){
            temp = a[i];
            a[i] = a[len-1-i];
            a[len-1-i]=temp;
        }
    }
    for (i = 0; i<len; i++){
        printf("%d ", a[i]);
    }
}

int main()
{

    int arr[] = {1,2,3,4,5};
    int size = sizeof arr / sizeof arr[0];

    printf("Before reversal\n");
    for(int i = 0 ; i<size ; i++){
         printf("%d ", arr[i]);
    }
    
    printf("\n\n");

    printf("After reversal\n");
    arrayReversal(arr, size);

    printf("\n");

    return 0;
}