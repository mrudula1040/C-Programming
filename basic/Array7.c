// WAP to accept size and value in array from user

#include <stdio.h>

int main()
{
    int size, i;
    // declare array
    int arr[20]; 
    printf("Enter size of array, max size is 20: ");
    scanf("%d", &size);
    if (size > 20)
    {
        printf("Since we can only store 20 so modifying size to 20\n");
        size = 20;
    }

    
    for (i = 0; i < size; i++)
    {
        printf("Enter element at positon %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display
    printf("Elements are: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}