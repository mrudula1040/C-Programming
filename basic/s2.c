
// Print day of a week ask by user
// 1 - Monday
#include <stdio.h>
int main()
{
    int dayNumber;
    printf("Enter day number: ");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day number\n");
    }
}

