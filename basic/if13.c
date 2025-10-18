/*
13. WAP to check whether the number is
    a. positive -> yes then check whether the number is even or odd
    b. negative
    c. zero
*/
// input = 1, conditions = 3

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number = %d is a positive number\n", num);

        if (num % 2 == 0)
        {
            printf("Number = %d is a even number\n", num);
        }
        else
        {
            printf("Number = %d is a odd number\n", num);
        }
    }
    else if (num < 0)
    {
        printf("Number = %d is a negative number\n", num);
    }
    else
    {
        printf("Number = %d is a zero number\n", num);
    }
}