
// Find max and min element in given array
// 5,100,-6,20,-25
// min = -25
// max = 100

#include <stdio.h>

int main()
{
    int arr[] = {5, 100, -6, 20, -25};

    int len = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0], min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            // change max
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Max element in array = %d\n", max);
    printf("Min element in array = %d\n", min);
}
