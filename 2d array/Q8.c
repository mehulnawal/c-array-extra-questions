// 8. Update multiple elements in the array simultaneously.

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

    printf("Before updating\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    int updateValue, value;

    printf("Enter the update Value : ");
    scanf("%d", &updateValue);

    printf("Enter the Value : ");
    scanf("%d", &value);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == updateValue)
            {
                arr[i][j] = value;
            }
        }
    }

    printf("After updating\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}