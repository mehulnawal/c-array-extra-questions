// 9. Delete all occurrence of a specific element in the array.

#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter rows value: ");
    scanf("%d", &row);

    printf("Enter cols value: ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nArray before deleting\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    int deleteValue;

    printf("Enter the element you want to delete: ");
    scanf("%d", &deleteValue);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == deleteValue)
            {
                arr[i][j] = 0;
            }
        }
    }

    printf("\nArray after updating\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}