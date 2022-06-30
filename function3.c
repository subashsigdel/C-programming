#include<stdio.h>
int add();
int sub();
int mul();
int div();
void main(){
    int result;

    result=add();
    printf("%d",result);

}
int add(){
    int a,b,sum;
    printf("enter the value of a for sum : ");
    scanf("%d",&a);
    printf("enter the \value of b for sum :  ");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum value is %d",sum);
    return sum;
}
int sub(){
    int a,b,sub;
    printf("enter the value of a for sub : ");
    scanf("%d",a);
    printf("enter the \value of b for sub :  ");
    scanf("%d",b);
    sub=a-b;
    printf("the sum value is %d",sub);
    return sub;
}
int mul(){
    int a,b,mul;
    printf("enter the value of a for multiplication : ");
    scanf("%d",a);
    printf("enter the \value of b for multiplication :  ");
    scanf("%d",b);
    mul=a*b;
    printf("the sum value is %d",mul);
    return mul;
}
int div(){
    int a,b,div;
    printf("enter the value of a for multiplication : ");
    scanf("%d",a);
    printf("enter the \value of b for multiplication :  ");
    scanf("%d",b);
    div=a/b;
    printf("the sum value is %d",div);
    return div;
}
