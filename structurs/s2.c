
#include <stdio.h>
#include <string.h>

// Student Info
struct student_info
{
    int rollNo;        // 4byte
    char name[50];     // 50 byte
    char gender[15];   // 15 byte
    int age;           // 4byte
    double percentage; // 8byte
};

int main()
{
    struct student_info student1;

    student1.rollNo = 1001;
    strcpy(student1.gender, "Female");
    strcpy(student1.name, "Pranjal Sharma");
    student1.age = 30;
    student1.percentage = 85.55;

    printf("---------------------------------------\n");
    printf("Student Info\n");
    printf("Roll no = %d\n", student1.rollNo);
    printf("Name = %s\n", student1.name);
    printf("Gender = %s\n", student1.gender);
    printf("Age = %d\n", student1.age);
    printf("Percentage = %.2lf\n", student1.percentage);
    printf("---------------------------------------\n");

    struct student_info s2;
    printf("Enter Roll No: ");
    scanf("%d", &s2.rollNo);

    fflush(stdin);
    printf("Enter Name: ");
    fgets(s2.name, 50, stdin);
    printf("Enter gender: ");
    scanf("%s", s2.gender);
    printf("Enter Age: ");
    scanf("%d", &s2.age);
    printf("Enter Percentage: ");
    scanf("%lf", &s2.percentage);

    printf("---------------------------------------\n");
    printf("Student Info\n");
    printf("Roll no = %d\n", s2.rollNo);
    printf("Name = %s\n", s2.name);
    printf("Gender = %s\n", s2.gender);
    printf("Age = %d\n", s2.age);
    printf("Percentage = %.2lf\n", s2.percentage);
    printf("---------------------------------------\n");
}
