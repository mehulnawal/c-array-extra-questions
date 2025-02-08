// 6. Create an array of integers and find the sum of all the elements in the array.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
        sum+= arr[i];
    }

    printf("The sum of all elements in the array is %d", sum);
    return 0;
}