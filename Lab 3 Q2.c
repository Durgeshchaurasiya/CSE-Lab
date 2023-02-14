#include <stdio.h>

int main() 
{
    int arr[100];
    int n, i, max1, max2;

    printf("Enter the Number of Elements in the Array : ");
    scanf("%d", &n);

    printf("Enter %d Elements in the Array :\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    max1 = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max1) 
        {
            max1 = arr[i];
        }
    }

    max2 = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max2 && arr[i] < max1) 
        {
            max2 = arr[i];
        }
    }

    printf("The Second Maximum Element in the Array is %d.\n", max2);

    return 0;
}
