
// K pattern
#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Upper Half
    // ROW
    for (i = n; i >= 1; i--)
    {
        // COLUMN (*)
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    // Lower Half
    for (i = 2; i <= n; i++)
    {
        // COLUMN (*)
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
