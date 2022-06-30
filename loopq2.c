// write a program in c to dispaly the cube of a given number up to a given integer
#include<stdio.h>
int main(){
    int n,i,cube;
    printf("enter the number upto you want to find the cube : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cube=i*i*i;
        printf("%d\n",cube);

    }
    
}