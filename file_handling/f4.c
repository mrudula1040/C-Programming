
// Reading File
#include <stdio.h>

int main()
{
    FILE *fptr = fopen("demo.txt", "r");

    printf("Value of fptr -> %d\n", fptr);
    if (fptr == NULL)
    {
        printf("File Not Found\n");
    }
    else
    {
        printf("File Opened Successfully\n");

        // READING
        char alp = fgetc(fptr);

        while (alp != EOF)
        {
            printf("%c", alp);
            alp = fgetc(fptr);
        }

        fclose(fptr);
    }
}
