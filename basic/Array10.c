

#include <stdio.h>

int main()
{
    int arr[] = {5, 1, 7, 9, 3};

    int search, i;
    int found = -1; // Not found
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Elements are: \n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter Element To be Searched: ");
    scanf("%d", &search);
    for (i = 0; i < len; i++)
    {
        if (arr[i] == search)
        {
            found = i;
            printf("Element %d is found at index %d\n", search, found);
            break;
        }
    }
    if (found == -1)
    {
        printf("element = %d not found!!", search);
    }
}
