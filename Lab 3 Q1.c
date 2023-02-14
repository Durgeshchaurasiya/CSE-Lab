#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 1, 3, 5, 2, 3, 6};
    int freq[10] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) 
    {
        freq[arr[i]]++;
    }

    printf("Frequency of Each Element in the Array :\n");

    for (int i = 0; i < 10; i++) 
    {
        if (freq[i] > 0) 
        {
            printf("%d : %d\n", i, freq[i]);
        }
    }

    return 0;
}
