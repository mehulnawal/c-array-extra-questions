// 4. Add an element to the end of the array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    /*
    2 3 4 5 6 n
    0 1 2 3 4 5
    */

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before adding - \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }

    int value;
    printf("Enter the value of element you want to add: ");
    scanf("%d", &value);

    printf("\nArray after adding - \n");
    for (int i = n; i < n + 1; i++)
    {

        arr[i] = value;

        // 1 2 3 4 4 value
        // 0 1 2 3 4 5
    }

    printf("\nArray after adding - \n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }
    return 0;
}