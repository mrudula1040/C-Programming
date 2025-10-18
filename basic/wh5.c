// WAP To print first n natural number.
// 1 2 3 4 ... n
// start = 1, stop = n. gap = 1

#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("First %d natural numbers are:\n", n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}

