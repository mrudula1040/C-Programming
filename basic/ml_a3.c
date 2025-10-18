
// Multi Dimensional Array
#include <stdio.h>

int main()
{
    int arr[2][3];
    // 2 * 3 -> rows 2, columns = 3

    int i, j;

    // Input
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Row
    printf("Elements are:\n");
    for (i = 0; i < 2; i++)
    {
        // Column
        for (j = 0; j < 3; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
