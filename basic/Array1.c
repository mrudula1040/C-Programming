// arrays -> to store multiple same data in contegious form (collections)
#include <stdio.h>
int main()
{


    int arr[5];
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 7;
    arr[3] = 9;
    arr[4] = 3;

    printf("Element at position 0 = %d\n", arr[0]);
    printf("Element at position 1 = %d\n", arr[1]);
    printf("Element at position 2 = %d\n", arr[2]);
    printf("Element at position 3 = %d\n", arr[3]);
    printf("Element at position 4 = %d\n", arr[4]);

    printf("Address of arrays\n");
    printf("Address at position 0 = %d\n", &arr[0]);
    printf("Address at position 1 = %d\n", &arr[1]);
    printf("Address at position 2 = %d\n", &arr[2]);
    printf("Address at position 3 = %d\n", &arr[3]);
    printf("Address at position 4 = %d\n", &arr[4]);
}