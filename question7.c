// write a program to input a string value with  uppercase and lowercase characters and convert them to lowetrcase and uppercase

#include<stdio.h>
#include<string.h>
int main(){
    char upper[20],lower[20],changed[20];
    printf("enter string in uppercase : ");
    scanf("%s",&upper);
    printf("enter string in lowercase: ");
    scanf("%s",lower);
    printf("%s",strupr(lower));
    printf("%s",strlwr(upper));
    return 0;

}