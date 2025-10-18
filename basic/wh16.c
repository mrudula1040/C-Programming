// WAP to check whether the number is a prime number or not
// Prime number only divisible by 1 and by own number
// count = 2 -> exactly 2 means that number is a prime number

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    
    if (count == 2)
    {
        printf("Number = %d, is a prime number\n", n);
    }
    else
    {
        printf("Number = %d, is not a prime number\n", n);
    }
}