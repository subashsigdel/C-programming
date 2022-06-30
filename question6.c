// write a program to input two string values and compare them if they are same
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20], str2[20];
    printf("write any thing you want : ");
    scanf("%s",&str1);
    printf("write again any thing you want : ");
    scanf("%s",&str2);
    if (str1==str2) {
       printf("your input value are same") ;
   
    }
     return 0;
}