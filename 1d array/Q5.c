// 5. Find the index of a specific element in the array.

#include <stdio.h>

int main()
{
    int n, found = 0, index = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int value;

    printf("Enter the value you want to search: ");
    scanf("%d", &value);

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            found = 1;
            index = i + 1;
        }
    }

    if (found)
    {
        printf("\nThe index of %d is %d", value, index);
    }
    else
    {
        printf("\n %d is not in the array", value);
    }
    return 0;
}