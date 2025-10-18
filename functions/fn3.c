
// Functions
#include <stdio.h>
// 2. without return type with parameters
void addition(int n1, int n2)
{
    int sum = n1 + n2;

    printf("The addition of n1: %d, n2: %d = %d\n", n1, n2, sum);
}
void multiplication()
{
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);

    printf("Enter number 2: ");
    scanf("%d", &n2);

    int result = n1 * n2;
    printf("Multiplication of n1: %d, n2: %d = %d\n", n1, n2, result);
    addition(n1, n2);
}
int main()
{
    multiplication();
    printf("After calling functions print in main\n");
}
