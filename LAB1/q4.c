// write a program to input two string values from user and swap them
#include<stdio.h>
#include<string.h>
int main(){
    char fname[20],lname[20],swap[20];
    printf("enter frist name :");
    scanf("%s",&fname);
    printf("enter last name :");
    scanf("%s",&lname);

    printf("the swap value string is : %s %s\n",fname,lname);
    strcpy(swap,lname);
    strcpy(lname,fname);
    strcpy(fname,swap);
    printf("the swap value string is : %s %s\n",fname,lname);
    return 0;
}