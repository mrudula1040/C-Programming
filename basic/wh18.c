// WAP to check whether the number is armstrong or not
// 153
// totalDigit-> 3
// remainder = 3 -> 3 cube(bcoz totalDigit is 3)
// sum -> 0 after cube add to sum = 27
#include <stdio.h>
int main()
{
    int n, i, sum = 0, totalDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    i = n;
    while (i != 0)
    {
        totalDigit++;
        i = i / 10;
    }
    printf("Total digit = %d\n", totalDigit);

    
    i = n;
    while (i != 0)
    {
        int remainder = i % 10;

        
        int power = 1;
        int j = 1;
        while (j <= totalDigit)
        {
            power = power * remainder;
            j++;
        }
        sum = sum + power;
        i = i / 10;
    }

    printf("Value of n is %d, Value of sum is %d\n", n, sum);

    if (n == sum)
    {
        printf("Number is Armstrong Number\n");
    }
    else
    {
        printf("Number is Not Armstrong Number\n");
    }
}