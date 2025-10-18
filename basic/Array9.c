
// WAP to print odd and even sum of element from given array
// arr = {5,1,2,3,4,6,8,10}

#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 2, 3, 4, 6, 8, 10};

    int oddSum = 0, evenSum = 0, i;
    int length = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // Even
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    printf("Odd sum of elements = %d\n", oddSum);
    printf("Even sum of elements = %d\n", evenSum);
}

