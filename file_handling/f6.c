
// Write
#include <stdio.h>

int main()
{
    char name[] = "Pranjal Sharma";
    int age = 40;
    char gender[] = "Female";

    FILE *fptr = fopen("demo.txt", "a");

    fprintf(fptr, "Name = %s\n", name);
    fprintf(fptr, "Age = %d\n", age);
    fprintf(fptr, "Gender = %s\n", gender);

    fclose(fptr);
    printf("File Saved Successfully\n");
}
