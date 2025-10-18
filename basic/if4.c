// WAP to check whether the number is positive or negative or zero
// Input = 1, COndition = 3
// if else if else

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is Positive\n");
    }
    else if (num < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is zero\n");
    }
}