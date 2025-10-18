// WAP to check whether the number have 3 digit or not
// 100 - 999
// BETWEEN 100 to 999 >=100 && <=999

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        printf("Number =  %d have 3 digits\n", num);
    }
    else
    {

        printf("Number =  %d is not having 3 digits\n", num);
    }
}