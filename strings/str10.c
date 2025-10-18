#include<stdio.h>

int main(){
    char str[]="abc";
    int i=0;
    while(str[i] !='\0')
    {
        printf("charac at%d is %c\n",i,str[i]);
        i++;

    }
}