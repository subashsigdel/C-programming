#include<stdio.h>
int main (){
    int multiply, mul,num=5,i=1;
    multiply:

    mul=num*i;

    printf("%d * %d = %d\n",num,i,mul);
    i++;
    if(i<=10)
        goto multiply;
    return 0;
}