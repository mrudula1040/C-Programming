#include <stdio.h>

void increaseBy5(int num)
{
    printf("Value of num before increment is = %d\n", num);
    num = num + 5;
    printf("Value of num after increment is = %d\n", num);
}

int main()
{
    int x = 60;
    printf("Value of x before calling function icreaseBy5() is = %d\n", x);
    increaseBy5(x);
    printf("Value of x after calling function icreaseBy5() is = %d\n", x);
}