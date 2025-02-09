// 4. Add an element to the end of the 2d array.

#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
    int rows = 3, cols = 3;
    int value = 10;

    int lastRow = rows - 1, lastCol = cols - 1;

    arr[lastRow][lastCol] = value;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
