
// Reading File
#include <stdio.h>

int main()
{
    FILE *fptr = fopen("demo.txt", "w");

    printf("Value of fptr -> %d\n", fptr);
    if (fptr == NULL)
    {
        printf("File Not Found\n");
    }
    else
    {
        printf("File Opened Successfully\n");
        fclose(fptr);
    }
    printf("Value of fptr after close -> %d\n", fptr);
}
