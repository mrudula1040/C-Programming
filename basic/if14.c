/*
14. WAP to check whether the traingle is
    a. valid (all sides are positive) -> If valid triangle then check
        i. Equilateral Triangle (all sides are equal)
        ii. Isoceles Triangle (any 2 sides are equal)
        iii. Scalene Triangle (no sides are equal)
    b. not valid
*/
// input = 3, conditions = 2 -> if valid then 3 conditions
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter side 1: ");
    scanf("%d", &s1);
    printf("Enter side 2: ");
    scanf("%d", &s2);
    printf("Enter side 3: ");
    scanf("%d", &s3);

    if (s1 > 0 && s2 > 0 && s3 > 0)
    {
        printf("ALL side are positive, Triangle is a valid triangle\n");
        printf("Side 1 = %d\n", s1);
        printf("Side 2 = %d\n", s2);
        printf("Side 3 = %d\n", s3);
        // If valid check for equilateral, isoceles, scalene
        if (s1 == s2 && s2 == s3)
        {
            printf("ALL sides are equal so the triangle is equilateral triangle\n");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("Any 2 sides are equal so the triangle is isoceles triangle\n");
        }
        else
        {
            printf("No sides are equal so the triangle is scalene triangle\n");
        }
    }
    else
    {

        printf("any 1 or all side are negative, Triangle is a in-valid triangle\n");
    }
}