// WAP to check whether the number is palindrome or not

// 1331 -> reverse -> 1331 (Palindrome)
// 1432 -> 2341 -> (Not Palindrome)

#include <stdio.h>
int main()
{
    int n, i, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    i = n; // start
    while (i != 0)
    {
        int remainder = i % 10;
        reverse = reverse * 10 + remainder;
        i = i / 10;
    }

    if (n == reverse)
    {
        printf("Number = %d is palindrome number\n", n);
    }
    else
    {
        printf("Number = %d is not a palindrome number and reverse = %d\n", n, reverse);
    }
}