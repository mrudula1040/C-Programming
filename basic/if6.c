/*Accept marks of 5 subject calculate sum and percentage based on percentage / avg display grades
percentage is between 90 to 100 -> A
percentage is between 75 to 89 -> B
percentage is between 60 to 74 -> C
percentage is between 35 to 59 -> D
percentage is below 35 -> F
*/
// input = 5, variable = 7

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum, percentage;
    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &m3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &m4);
    printf("Enter marks of subject 5: ");
    scanf("%d", &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5;

    printf("Total Marks Obtained = %d\n", sum);
    printf("Percentage  = %d\n", percentage);

    printf("Grade = ");
    if (percentage >= 90)
    {
        printf("A");
    }
    else if (percentage >= 75)
    {
        printf("B");
    }
    else if (percentage >= 60)
    {
        printf("C");
    }
    else if (percentage >= 35)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}