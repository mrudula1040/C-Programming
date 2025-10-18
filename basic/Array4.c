
// arrays -> to store multiple same data in contegious form (collections)
#include <stdio.h>
int main()
{

    int arr[] = {5, 10, 7, 9, 3, -6};
    int i;
   
    int totalSize = sizeof(arr);
    printf("Total size of array is %d bytes\n", totalSize);
    
    int length = totalSize / sizeof(arr[0]);
    printf("Total length of array is %d \n", length);
}
