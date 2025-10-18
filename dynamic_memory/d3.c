
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter size to be allocated dynamically: ");
    scanf("%d", &size);

    int *address = (int *)malloc(size * sizeof(int));
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", address + i);
    }

    // DISPLAY
    printf("Elements in dynamic arrays are: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(address + i));
    }

    int newSize;
    printf("\nEnter new size greater than old size %d: ", size);
    scanf("%d", &newSize);

    int *newAddress = (int *)realloc(address, newSize * sizeof(int));

    // New element ka input
    for (i = size; i < newSize; i++)
    {
        printf("Enter new element at position %d: ", i);

        scanf("%d", newAddress + i);
    }

    // DISPLAY New Dynamic Array
    printf("Elements in new dynamic arrays with more size are: \n");
    for (i = 0; i < newSize; i++)
    {
        printf("%d\t", *(newAddress + i));
    }

    free(address);
    free(newAddress);
}
