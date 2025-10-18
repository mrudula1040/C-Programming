// WAP to print table of 6 till 10 iteration
/*
6 * 1 = 6
6 * 2 = 12
    .
    .
    .
6 * 10 = 60
*/

#include <stdio.h>
int main()
{
    int i = 1, table;
    while (i <= 10)
    {
        table = 6 * i;
        printf("6 * %d = %d\n", i, table);
        i++;
    }
}
