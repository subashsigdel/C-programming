// write a program in c to store elements in an array and print it

#include<stdio.h>
int main(){
    int i;
    int a[5]={1,2,3,4,5};

    int *p = a;

    printf("%d\n",*p);
    printf("%d\n",&a[0]);
    printf("%d\n",p);

    for(i=0;i<5;i++){
        printf("%d\n",*p);
        p++;
    }
}