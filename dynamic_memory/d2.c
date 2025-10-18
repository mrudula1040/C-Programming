
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter size to be allocated dynamically: ");
    scanf("%d", &size);

    int *address = (int *)calloc(size, sizeof(int));
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

    free(address);
}
/*
1. malloc
2. calloc
3. realloc
4. free
*/
