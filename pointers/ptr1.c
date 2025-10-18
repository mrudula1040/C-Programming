
// Pointer
// Variable which holds address of another variable/array....
// To create a pointer variable syntax is data_type *

#include <stdio.h>

int main()
{

    int num = 14;
    int *ptr = &num;

    printf("Value of ptr is %d\n", ptr);
    printf("Address of num is %d\n", &num);

    printf("Value of number is %d\n", num);
    printf("Value of number using ptr is %d\n", *ptr);

    int a = 90000;
    ptr = &a;
    printf("Value of ptr is %d\n", ptr);
    printf("Address of a is %d\n", &a);

    printf("Value of a is %d\n", a);
    printf("Value of a using ptr is %d\n", *ptr);
}