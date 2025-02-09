// 10. Find  the min and max elements in an array.

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

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    int max = arr[0][0], min = arr[0][0];

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            else if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }

    printf("Max - %d\n", max);
    printf("Min - %d\n", min);

    return 0;
}