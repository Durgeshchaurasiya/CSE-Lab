#include <stdio.h>

int main() 
{
    int arr[100];
    int n, i, j, temp;

    printf("Enter the Number of Elements in the Array : ");
    scanf("%d", &n);

    printf("Enter %d Elements in the Array : \n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = n - 1; i < j; i++, j--) 
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("The Reversed Array is : \n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
