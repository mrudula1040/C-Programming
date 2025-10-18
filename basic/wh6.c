// 1. WAP to print first 10 even numbers
// 2 4 6 8 10 12 14 16 18 20
// start = 2, stop = 20, gap = 2
#include <stdio.h>
int main()
{
    int i = 2;

    while (i <= 20)
    {
        printf("%d\n", i);
        // increment by 2
        i = i + 2;
    }
}