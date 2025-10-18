
// WAP to check whether the number is a perfect number or not
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number to check it is perfect or not: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (n == sum)
    {
        printf("Number = %d is a perfect number\n", n);
    }
    else
    {
        printf("Number = %d is not a perfect number, since the sum of divisors = %d is not equal to n\n", n, sum);
    }
}
