#include <stdio.h>

void increaseBy5(int *ptr)
{
    printf("Value of ptr before increment is = %d\n", *ptr);
    *ptr = *ptr + 5;
    printf("Value of ptr after increment is = %d\n", *ptr);
}

int main()
{
    int x = 60;
    printf("Value of x before calling function icreaseBy5() is = %d\n", x);
    increaseBy5(&x);
    printf("Value of x after calling function icreaseBy5() is = %d\n", x);
}