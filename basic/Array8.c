
// WAP to accept input in array of size 6 print sum of elements
#include <stdio.h>
int main()
{
    int arr[6], i, sum = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Enter element at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // display
    printf("Elements are:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t", arr[i]);
      
        sum += arr[i];
    }
    // display total sum
    printf("\nTotal elements sum is = %d\n", sum);
}
