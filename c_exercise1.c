#include <stdio.h>

// in this exersise we have to create a program to print multiplication table of a given number

int main() {

  int inp;
  printf("Enter a number to print its multiplication table: ");
  scanf("%d", &inp);
  for( int a = 1; a <= 10; a = a + 1 ){
    printf("%d x %d = %d\n", inp, a, inp*a);
   }
  
  return 0;
}