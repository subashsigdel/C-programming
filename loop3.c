#include<stdio.h>
int main (){
    int i , n=20, mul;  
    for(i=1 ;i<=10; i++){
        mul=n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }
    return 0;
}