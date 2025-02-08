// 2. Update a specific element in the array.

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

    printf("\nArray Before update\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    int updateIndex, updateValue;

    printf("Enter the index you want to update: ");
    scanf("%d", &updateIndex);

    printf("Enter that index value: ");
    scanf("%d", &updateValue);

    if (updateIndex >= 0 && updateIndex <= n)

    {
        arr[updateIndex] = updateValue;
    }
    else
    {
        printf("Your index is out of range");
    }

    printf("\nArray After update\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}