
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

    student students[3];
    // 3 input
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);

        fflush(stdin);
        printf("Enter Name: ");
        fgets(students[i].name, 50, stdin);
        printf("Enter gender: ");
        scanf("%s", students[i].gender);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Percentage: ");
        scanf("%lf", &students[i].percentage);
    }

    // Display 3 time
    for (int i = 0; i < 3; i++)
    {
        printf("---------------------------------------\n");
        printf("Student Info\n");
        printf("Roll no = %d\n", students[i].rollNo);
        printf("Name = %s", students[i].name);
        printf("Gender = %s\n", students[i].gender);
        printf("Age = %d\n", students[i].age);
        printf("Percentage = %.2lf\n", students[i].percentage);
        printf("---------------------------------------\n");
    }
}
