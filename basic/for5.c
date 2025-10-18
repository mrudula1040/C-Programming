// WAP to check whether the number is prime or not
// Prime num -> divisible by 1 and by itself

#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Asumming whatever input of n is a Prime number
    int prime = 0; // True
    int i;
    for (i = 2; i < n; i++)
    {
        
        if (n % i == 0)
        {
            prime = 1; 
            break;
        }
    }
    if (prime == 0)
    {
        printf("Number = %d is a prime number", n);
    }
    else
    {
        printf("Number = %d is not a prime number", n);
    }
}