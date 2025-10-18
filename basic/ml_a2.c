
// Multi Dimensional Array
#include <stdio.h>

int main()
{
    int arr[][3] = {
        {10, 20, 30},
        {-6, -10, -3},
        {2, 4, 6},
        {8, -9, -1}};

    int i, j;

    // Row
    for (i = 0; i < 4; i++)
    {
        // Column
        for (j = 0; j < 3; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
