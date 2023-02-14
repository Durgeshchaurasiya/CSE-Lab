#include <stdio.h>
#include <string.h>

int palindrome(char *str);

int main() 
{
    char str[100];

    printf("Enter a String: ");
    fgets(str, 100, stdin);

    if (palindrome(str)) 
    {
        printf("The String is Palindrome\n");
    } 
    else 
    {
        printf("The string is Not Palindrome\n");
    }

    return 0;
}

int palindrome(char *str) 
{
    int i, j;
    int n = strlen(str) - 1;

    for (i = 0, j = n - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            return 0; 
        }
    }

    return 1; 
}
