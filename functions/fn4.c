
// with return type with parameters
// array, int, string, structure
#include <stdio.h>
double division(double n1, double n2)
{
    double result = n1 / n2;

    return result;
}
int main()
{
    double ans = division(50, 3);
    printf("Value of division is: %lf\n", ans);
}
