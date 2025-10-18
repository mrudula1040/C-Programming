
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
}
