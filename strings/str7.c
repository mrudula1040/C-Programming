#include<stdio.h>
#include<string.h>

int main(){
    char first_name[]= "Mrudula";
    char lastt_name[] = "T";
    printf("before concat:");
    printf("first name=%s\n ",first_name);
     printf("last name=%s\n ",lastt_name);
      strcat(first_name,lastt_name);
       printf("after concat");
        printf("first name=%s\n ",first_name);
         printf("last name=%s\n ",lastt_name);


}