// write a program to calculate the factorial of a given number
#include<stdio.h>
int main(){
    int i,fac=1,n;
    printf("enter the number to find the factorial of : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        // printf("%d",i);
        fac=fac*i;

    }
    printf("%d\n",fac);
    
}