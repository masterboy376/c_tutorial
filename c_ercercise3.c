#include <stdio.h>

// fabonacci series

int rec_fib(int n){
  if(n==1 || n==2){
    return n-1;
  }
  return rec_fib(n-1)+rec_fib(n-2);
}
int itr_fib(int n){
  int a = 0;
  int b = 1;
  for(int i = 0; i<n ; i++){
    b=a+b;
    a=b-a;
  }
  return a;
}

int main() {

  int inp;
  printf("Enter the index to find the value of fibonacci series at: ");
  scanf("%d\n", &inp);
  printf("the value of fibonacci series at index %d by itr: %d\n", inp,itr_fib(inp));
  printf("the value of fibonacci series at index %d by rec: %d\n", inp,rec_fib(inp));
  
  return 0;
}