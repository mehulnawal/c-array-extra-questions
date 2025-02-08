// 8. Update multiple elements in the array simultaneously.

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

    printf("\nArray before updating\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    int value, updateValue;

    printf("Enter the value you want to update: ");
    scanf("%d", &updateValue);

    printf("Enter the value: ");
    scanf("%d", &value);

    printf("\nArray after updating\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == updateValue)
        {
            arr[i] = value;
        }
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    return 0;
}