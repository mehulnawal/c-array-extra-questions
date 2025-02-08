// 9. Delete all occurrence of a specific element in the array.

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deleting\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    int deletevalue;

    int newSize = 0;
    printf("Enter the value you want to delete: ");
    scanf("%d", &deletevalue);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != deletevalue)
        {
            arr[newSize] = arr[i];
            newSize++;

            // 1 2 3 4 5
            // 0 1 2 3 4
        }
        else
        {
            count++;
        }
    }

    printf("The no fo times the %d came is %d", deletevalue, count);

    printf("\nArray after deleting\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    return 0;
}