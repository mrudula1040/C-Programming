// WAP to check whether the character is vowel or not
// variable = 1 (char), condition = 2
#include <stdio.h>
int main()
{
    char alphabet;
    printf("ENter character: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("Character = %c is vowel\n", alphabet);
    }
    else
    {

        printf("Character = %c is consonant\n", alphabet);
    }
}

