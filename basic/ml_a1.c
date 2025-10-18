
// Multi Dimensional Array
#include <stdio.h>

int main()
{
    int arr[][3] = {
        {10, 20, 30},
        {-6, -10, -3},
        {2, 4, 6},
        {8, -9, -1}};

    printf("Element at position row: 0, column: 0 = %d\n", arr[0][0]);
    printf("Element at position row: 0, column: 1 = %d\n", arr[0][1]);
    printf("Element at position row: 0, column: 2 = %d\n", arr[0][2]);
    printf("Element at position row: 1, column: 0 = %d\n", arr[1][0]);
    printf("Element at position row: 1, column: 1 = %d\n", arr[1][1]);
    printf("Element at position row: 1, column: 2 = %d\n", arr[1][2]);
    printf("Element at position row: 2, column: 0 = %d\n", arr[2][0]);
    printf("Element at position row: 2, column: 1 = %d\n", arr[2][1]);
    printf("Element at position row: 2, column: 2 = %d\n", arr[2][2]);
    printf("Element at position row: 3, column: 0 = %d\n", arr[3][0]);
    printf("Element at position row: 3, column: 1 = %d\n", arr[3][1]);
    printf("Element at position row: 3, column: 2 = %d\n", arr[3][2]);
}
