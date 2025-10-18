// Write
#include <stdio.h>

int main()
{
    char name[50];
    int age;
    char gender[15];

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter gender: ");
    scanf("%s", gender);

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