// Recursion: A function calling itself within a function is called as recurssion

#include <stdio.h>

int calcFact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * calcFact(n - 1);
}

int main()
{
    int result = calcFact(4);
    printf("Factorial of 4 = %d\n", result);
    result = calcFact(0);
    printf("Factorial of 0 = %d\n", result);
}