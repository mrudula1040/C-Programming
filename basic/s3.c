

// check vowel or consonant using switch case

#include <stdio.h>
int main()
{
    char alphabet;

    printf("Enter character: ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Character = %c is Vowel\n", alphabet);
        break;
    default:
        printf("Character = %c is Consonant\n", alphabet);
    }
}
