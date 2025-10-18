// 3. WAP to print first n natural number in reverse orders
// n .... 3 2 1
// start = n, stop = 1, gap = -1
#include <stdio.h>

int main()
{
    int i, n; // declaration
    printf("Enter a number: ");
    scanf("%d", &n); // start
    i = n;           // initialization -> copying value of n

    printf("First %d natural number in reverse order is:\n", n);
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}