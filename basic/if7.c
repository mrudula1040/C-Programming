// WAP to check greatest of 2 number or both are equal

// input = 2, cond = 3

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("ENter 2 number: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        printf("n1 = %d is greater than n2 = %d\n", n1, n2);
    }
    else if (n1 == n2)
    {

        printf("n1 = %d is equal to n2 = %d\n", n1, n2);
    }
    else
    {

        printf("n2 = %d is greater than n1 = %d\n", n2, n1);
    }
}