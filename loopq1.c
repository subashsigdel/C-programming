// write a program in c to display n terms of natural numbers and their sum
#include<stdio.h>
int main(){
    int i,nat,n;
    printf("enter the number want to find sum of : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        nat=nat+i;
    }
   
    printf("%d\n",nat);
    return 0;

}