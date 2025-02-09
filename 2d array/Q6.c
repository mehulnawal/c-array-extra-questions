// 6. Create an array of integers and find the sum of all the elements in the array.

#include <stdio.h>

int main()
{
    int row, col, sum = 0;

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
            sum += arr[i][j];
        }
    }

    printf("The sum of all values is: %d", sum);
    
    return 0;
}