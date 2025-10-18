#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "hgkdsh";
    char str2[10];
    strcpy(str2,str1);
     printf("str2=%s\n",str2);
      printf("str1 before rev =%s\n",str1);
strrev(str1);
 printf("str1 afterrev=%s\n",str1);
}