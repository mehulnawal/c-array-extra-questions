// Q7. Add a new element at a specific index in the array.

#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 1, col = 2, value = 10;

    arr[row][col] = value;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
