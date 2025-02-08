// 3. Delete an element from an array by shifting the remaining elements.

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

    int deleteIndex;

    printf("Enter the index you want to delete: ");
    scanf("%d", &deleteIndex);

    if (deleteIndex >= 0 && deleteIndex <= n)
    {
        for (int i = deleteIndex; i < n; i++)
        {
            arr[i - 1] = arr[i];
            /*

            deleteIndex = 2
            array - 2 3 5
            index = 0 1 2

            size = n - 1

            */
        }
    }
    else
    {
        printf("Your delete Index is out of range");
    }

    printf("\nArray after deletion");
    for (int i = 0; i < n - 1; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    return 0;
}