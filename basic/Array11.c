
// Sort the given array

// 5,1,7,9,3

#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 7, 9, 3};
    int i, j, temp;

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Elements before sorting\n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }

    

    // num of pass
    for (i = 0; i < len - 1; i++)
    {
        
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nAfter sorting array is= \n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
}
