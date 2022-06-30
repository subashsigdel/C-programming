// write ma program to swap in two numbers using function
#include<stdio.h>
void swap(int a ,int b);
void main(){
    int a,b;
    printf("enter the number a : ");
    scanf("%d",&a);
    printf("enter the number b : ");
    scanf("%d",&b);
    swap(a,b);

}
void swap(int a,int b){
    int c;
    c=b;
    b=a;
    a=c;
    printf("The swap value is a:%d and b:%d",a,b);
    // printf("The swap value is %d",b);
}