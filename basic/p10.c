
// Pyramid
#include <stdio.h>
int main()
{
    int i, j, sp, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = n; i >= 1; i--)
    {
        // LEFT SPACE
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }

        // STAR
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }

        // New Line
        printf("\n");
    }
}
