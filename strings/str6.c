#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello hii";
    printf("length of string:%d\n",strlen(str));
    printf("string=%s\n",str);
    printf("upper case=%s\n",strupr(str));
    printf("string=%s\n",str);
    printf("lower case=%s\n",strlwr(str));
    printf("string=%s\n",str);
}
