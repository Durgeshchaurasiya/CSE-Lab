#include<stdio.h>  
  
int main()  
{  
    int limit, num, positive = 0, negative = 0, zero = 0;  
  
    printf("Enter the Limit\n");  
    scanf("%d", &limit);  
  
    printf("Enter %d Numbers\n", limit);  
  
    while(limit)  
    {  
        scanf("%d", &num);  
  
        if(num > 0)  
        {  
            positive++;  
        }  
        else if(num < 0)  
        {  
            negative++;  
        }  
        else  
        {  
            zero++;  
        }  
  
        limit--;  
    }  
  
    printf("\nPositive Numbers: %d\n", positive);  
    printf("Negative Numbers: %d\n", negative);  
    printf("Number of zero: %d\n", zero);  
  
    return 0;  
}
