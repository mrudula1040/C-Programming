// 2. WAP to print cube of 1 to n
// start = 1, stop = n, gap = 1
#include <stdio.h>
int main()
{
    int i = 1, n, cube;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        cube = i * i * i;

        printf("The cube of %d is  %d\n", i, cube);
        i++;
    }
}