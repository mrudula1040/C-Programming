#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="abc";
    char str2[]="mru";
    char str3[]="tha";
     printf("string compare str1 wrt str2 %d\n",strcmp(str1,str2));
      printf("string compare str2 wrt str1 %d\n",strcmp(str2,str1));
       printf("string compare str1 wrt str3 %d\n",strcmp(str1,str3));
}