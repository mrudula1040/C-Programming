// WAP to print first 10 natural numbers in reverse order
// 10 9 8 7 6 5 4 3 2 1
// start = 10, stop = 1, gap = -1

#include <stdio.h>
int main()
{
    int i = 10; // start

    while (i >= 1)
    {
        printf("The value of i is %d\n", i);
        // i = i - 1;
        i--;
    }
}