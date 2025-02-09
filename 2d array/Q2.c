// 2. Update a specific element in the array.

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

    printf("\nArray before updating\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    int updateRow, updateCol, updateValue;

    printf("Enter the row index you want to update: ");
    scanf("%d", &updateRow);

    printf("Enter the col index you want to update: ");
    scanf("%d", &updateCol);

    printf("Enter the updated index value: ");
    scanf("%d", &updateValue);

    if ((updateRow >= 0 && updateCol >= 0) && (updateRow <= row && updateCol <= col))
    {
        arr[updateRow][updateCol] = updateValue;
    }
    else
    {
        printf("The entered values are out of range");
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