// WAP to accept a number and display square of that number
// unless user press 0 to exit

#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a nujmber to display square or press 0 to exit: ");
        scanf("%d", &n);

        if (n == 0)
        {
            printf("Thanks for playing! Do Visit Again!\n");
            break;
        }
        int square = n * n;

        printf("The square of %d = %d\n", n, square);
    } while (n != 0);
}
