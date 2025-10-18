
// Write
#include <stdio.h>

int main()
{
    char name[] = "Memon Abdul gani";
    int age = 25;
    char gender[] = "Male";

    FILE *fptr = fopen("demo.txt", "a+");

    fprintf(fptr, "Name = %s\n", name);
    fprintf(fptr, "Age = %d\n", age);
    fprintf(fptr, "Gender = %s\n", gender);
    printf("File Saved Successfully\n");

    rewind(fptr);
    char alp = fgetc(fptr);
    while (alp != EOF)
    {
        printf("%c", alp);
        alp = fgetc(fptr);
    }

    fclose(fptr);
}
