/*
2. WAP to accept character and display value based on criteria
    a. if chracter contains alphabets A-Z or a-z -> It is a character
    b. if chracter contains alphabets 0-9 -> It is a digit
    c. if character doesnot container alphabet or number -> It is a special symbol*/
// Input = 1, COnditions = 3 (if elseif else)

#include <stdio.h>
int main()

{
    char alphabet;
    printf("ENter a character: ");
    scanf("%c", &alphabet);

    if ((alphabet >= 'A' && alphabet <= 'Z') || (alphabet >= 'a' && alphabet <= 'z'))
    {
        printf("Alphabet = %c is a character\n", alphabet);
    }
    else if (alphabet >= '0' && alphabet <= '9')
    {
        printf("Alphabet = %c is a digit\n", alphabet);
    }
    else
    {
        printf("Alphabet = %c is a symbol\n", alphabet);
    }
}