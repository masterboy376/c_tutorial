#include <stdio.h>

// array reversal

void arrayReversal(int a[]){
    int len = sizeof(a)/sizeof(a[0]);
    int i, temp;
    if(len%2==0){
        for(i = 0; i<len/2; i++){
            temp = a[i];
            a[i] = a[len-1-i];
            a[len-1-i]=temp;
        }
    }
    else{
        for(i = 0; i<len+1/2; i++){
            temp = a[i];
            a[i] = a[len-1-i];
            a[len-1-i]=temp;
        }
    }
    for (i = 0; i<len; i++){
        printf("%d ", a[i]);
    }

    return a;
}

int main()
{

    int arr[6] = {1,2,3,4,5,6};
    arrayReversal(arr);

    return 0;
}