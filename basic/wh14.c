/*
4. WAP to print FIZZBUZZ based on below criteria till 1 to n
    a. If number is divisible by 3 and 5 both -> Print FIZZBUZZ
    b. If number is divisible by 3 -> Print FIZZ
    c. If number is divisible by 5 -> Print BUZZ
    d. If number is not divisible by any -> Print number
*/

#include <stdio.h>
int main()
{

    int i = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FIZZBUZZ\n");
        }
        else if (i % 3 == 0)
        {
            printf("FIZZ\n");
        }
        else if (i % 5 == 0)
        {
            printf("BUZZ\n");
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }
}