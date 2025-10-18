
// Write
#include <stdio.h>

int main()
{
    char name[] = "SPRK";
    int age = 30;
    char gender[] = "Female";

    FILE *fptr = fopen("demo.txt", "w");

    fprintf(fptr, "Name = %s\n", name);
    fprintf(fptr, "Age = %d\n", age);
    fprintf(fptr, "Gender = %s\n", gender);

    fclose(fptr);
    printf("File Saved Successfully\n");
}
