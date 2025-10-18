
// Pointer to a Structure
#include <stdio.h>
#include <string.h>

// Student Info
typedef struct student_info
{
    int rollNo;        // 4byte
    char name[50];     // 50 byte
    char gender[15];   // 15 byte
    int age;           // 4byte
    double percentage; // 8byte
} student;

int main()
{

    student *ptr;
    student s1;
    ptr = &s1;

    printf("Enter Roll No: ");
    scanf("%d", &ptr->rollNo);

    fflush(stdin);
    printf("Enter Name: ");
    fgets(ptr->name, 50, stdin);
    printf("Enter gender: ");
    scanf("%s", ptr->gender);
    printf("Enter Age: ");
    scanf("%d", &ptr->age);
    printf("Enter Percentage: ");
    scanf("%lf", &ptr->percentage);

    printf("---------------------------------------\n");
    printf("Student Info\n");
    printf("Roll no = %d\n", ptr->rollNo);
    printf("Name = %s", ptr->name);
    printf("Gender = %s\n", ptr->gender);
    printf("Age = %d\n", ptr->age);
    printf("Percentage = %.2lf\n", ptr->percentage);
    printf("---------------------------------------\n");
}
