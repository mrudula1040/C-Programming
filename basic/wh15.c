// WAP to print sum of digit of n
#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    i = n; 

    while (i != 0)
    {
        int remainder = i % 10;
        sum = sum + remainder;

        
        i = i / 10;
    }
    printf("The sum of digit of %d is %d\n", n, sum);
}