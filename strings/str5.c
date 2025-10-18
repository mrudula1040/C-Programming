#include<stdio.h>
int main()
{
    char str[10];
    printf("enter mesage:");
    fgets(str,10,stdin);
    printf("mesage-%s\n",str);
}