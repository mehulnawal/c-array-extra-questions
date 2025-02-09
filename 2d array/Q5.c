// 5. Find the index of a specific element in the array.

#include <stdio.h>

int main()
{
    int arr[2][2] = {{2, 3}, {4, 5}}, found = 0, rwoIndex = -1, colIndex = -1;

    printf("Entering the array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    int value;

    printf("Enter the value you want to find: ");
    scanf("%d", &value);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] == value)
            {
                found = 1;
                rwoIndex = i;
                colIndex = j;
            }
        }
    }

    if (found)
    {
        printf("The element %d is at index: arr[%d][%d]", value, rwoIndex, colIndex);
    }
    else
    {
        printf("%d is not present in the array", value);
    }
    return 0;
}