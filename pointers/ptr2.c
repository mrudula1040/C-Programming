
// Pointer to an array
#include <stdio.h>
int main()
{
    double arr[5];

    double *ptr;
    // ptr = &arr[0];
    ptr = arr;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter element at positon %d: ", i);
        scanf("%lf", ptr + i);
    }

    // Display using ptr
    printf("Elements are using pointer: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2lf\t", *(ptr + i));
    }
}

// Create a char array of size 10
// accept input with the help of pointer
// and display characters
