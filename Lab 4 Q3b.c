#include <stdio.h>

int palindrome(int num) 
{
    int reversed = 0;
    int original = num;

    while (num > 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() 
{
    int num;

    printf("Enter an Integer : ");
    scanf("%d", &num);

    if (palindrome(num)) 
    {
        printf("%d is a Palindrome\n", num);
    } 
    else 
    {
        printf("%d is Not a Palindrome\n", num);
    }

    return 0;
}
