// 7. Add a new element at a specific index in the array.

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

    printf("\nArray before adding element");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    int addIndex, addValue;

    printf("Enter the index where you want to add: ");
    scanf("%d", &addIndex);

    printf("Enter the value: ");
    scanf("%d", &addValue);

    for (int i = addIndex; i < n + 1; i++)
    {
        arr[i + 1] = arr[i];

        /*

        array = 1 2   3 4 5 6
        index = 0 1 2 3 4 5 6

        */
    }

    if (addIndex >= 0 && addIndex <= n + 1)
    {
        arr[addIndex] = addValue;
    }
    else
    {
        printf("The index you have entered is out of range");
    }

    printf("\nArray before adding element");
    for (int i = 0; i < n + 1; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    return 0;
}