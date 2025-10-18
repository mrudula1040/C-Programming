/*2. WAP to print sum of only first 10 odd numbers */
// 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    while (i <= 19)
    {
        sum = sum + i;
        i = i + 2;
    }

    printf("The sum of first 10 odd numbers are: %d\n", sum);
}