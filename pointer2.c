#include<stdio.h>
void main(){
    int a = 10;
    int *p=&a;
    int **q=&p;

    printf("%d\n",&a);
    printf("%d\n",*q);
    printf("%d\n",**q);

}