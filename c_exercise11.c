#include <stdio.h>

// palindrome

int isPalindrome(int n)
{
    int reversed = 0, remainder, original;
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("enter a number to check whether it is a palindrome or not: ");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("the number is a palindrome\n");
    }
    else
    {
        printf("the number is not a palindrome\n");
    }
    return 0;
}