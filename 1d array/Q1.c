// 1. Create an array and initialize it with values, then print the elements of the array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }
    return 0;
}