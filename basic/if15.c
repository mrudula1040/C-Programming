/*
15. Electric bill generator based on units consumption:
    a. units <=100 -> 5/unit
    b. units between 101 - 200 -> 7/unit
    c. units > 200 -> 10/unit
    After bill_amount add surcharge of 135 INR
    Example: Unit = 250
    Amount = First 100 unit (100*5) + next 100 unit(100 * 7) + already 200 amount considered remaining 50 units (50 * 10)
            500+700+500 = 1700
*/
#include <stdio.h>
int main()
{
    int unitConsumed, billAmount, surCharged = 135;
    printf("Enter unit consumed: ");
    scanf("%d", &unitConsumed);

    if (unitConsumed <= 100)
    {
        billAmount = unitConsumed * 5;
    }
    else if (unitConsumed <= 200)
    {
        billAmount = (100 * 5) + (unitConsumed - 100) * 7;
    }
    else
    {
        billAmount = (100 * 5) + (100 * 7) + (unitConsumed - 200) * 10;
    }

    billAmount = billAmount + surCharged;

    printf("--------------------------------------------------------\n");
    printf("MahaVitaran\n");
    printf("Unit Consumed = %d\n", unitConsumed);
    printf("Total Amount = %d\n", billAmount);
    printf("--------------------------------------------------------\n");
}