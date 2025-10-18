/*
3. WAP to print table of n till x iteration
    Ex: n = 5, x = 6
    5 * 1 = 5
    5 * 2 = 10
        .
        .
        .
    5 * 6 = 30
*/

#include <stdio.h>
int main()
{
    int n, x, i = 1, table;
    printf("Enter a number: ");
    scanf("%d", &n); // Table of number
    printf("Enter number of iterations: ");
    scanf("%d", &x); // Number of time loop will run

    printf("Table of %d till %d iterations:\n", n, x);
    while (i <= x)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}