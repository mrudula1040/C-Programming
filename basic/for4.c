// WAP to print first n natural number in reverse order
// start = n, stop = 1, gap = -1

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}