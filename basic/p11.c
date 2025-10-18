
// Diamond Pattern
// ♦️
#include <stdio.h>
int main()
{
    int i, j, sp, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Upper Half
    // ROW
    for (i = 1; i <= n; i++)
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

    // LOWER Half
    // ROW
    for (i = n - 1; i >= 1; i--)
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
