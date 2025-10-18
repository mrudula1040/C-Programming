
// arrays -> to store multiple same data in contegious form (collections)
#include <stdio.h>
int main()
{

    double arr[] = {5.0, 10.0, 7.0, 9.0, 3.0, -6.0};
    int i;
   
    int totalSize = sizeof(arr);
    printf("Total size of array is %d bytes\n", totalSize);
  
    int length = totalSize / sizeof(arr[0]);
    printf("Total length of array is %d \n", length);
}
