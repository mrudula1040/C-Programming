
// Switch Case:
// Call center
/*
1. English
2. Hindi
3. Marathi
4. Repeat
Wrong Option if not from 1 - 4
*/

#include <stdio.h>
int main()
{
    int choice;
    printf("Welcome to SPRK Technologies\nPress\n");
    printf("1. English\n2. Hindi\n3. Marathi\n4. Repeat");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("English Selected\n");
        break;
    case 2:
        printf("Hindi Selected\n");
        break;
    case 3:
        printf("Marathi Selected\n");
        break;
    case 4:
        printf("Repeating Options\n");
        break;
    default:
        printf("Invalid Choice\n");
    }

    