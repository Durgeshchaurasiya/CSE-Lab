#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            printf("$");
            else
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
