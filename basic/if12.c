// WAP to accept 2 number and accept symbol (+,-,*,/) based on operation display answer
// input = 3, condition = 5
#include <stdio.h>
int main()
{
    float num1, num2, result;
    char operator;
    printf("Enter operator (+,-,*,/): ");
    scanf("%c", &operator);
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
    {

        printf("Enter 2 number: ");
        scanf("%f%f", &num1, &num2);
        if (operator == '+')
        {
            result = num1 + num2;
            printf("The addition of %.2f, %.2f = %.2f", num1, num2, result);
        }
        else if (operator == '-')
        {
            result = num1 - num2;
            printf("The subtraction of %.2f, %.2f = %.2f", num1, num2, result);
        }
        else if (operator == '*')
        {
            result = num1 * num2;
            printf("The multiplication of %.2f, %.2f = %.2f", num1, num2, result);
        }
        else
        {
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("The division of %.2f, %.2f = %.2f", num1, num2, result);
            }
            else
            {
                printf("Cannot Divide By 0.\n");
            }
        }
    }
    else
    {
        printf("Invalid operator. Please select operator from above range.\n");
    }
}

