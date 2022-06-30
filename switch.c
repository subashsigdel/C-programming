#include<stdio.h>
int main(){
    int choice;
    printf("enter number among 1 2 3 and 4 : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("you have enter number 2 \n");
        break;
    case 2:
    printf("you have enter number 2 \n");
        break;
    case 3:
    printf("you have enter number 3 \n");
        break;
    case 4:
    printf("you have enter number 4 \n");
        break;
    
    default:
    printf("you have enter unvalid number \n");
        break;
    }

}