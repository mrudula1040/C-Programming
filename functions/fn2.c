
// Functions
#include <stdio.h>
// 2. without return type with parameters
void addition(int n1, int n2)
{
    int sum = n1 + n2;

    printf("The addition of n1: %d, n2: %d = %d\n", n1, n2, sum);
}
int main()
{
    addition(5, 10);
    int a, b;
    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    addition(a, b);
}
