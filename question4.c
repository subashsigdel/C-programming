// print the value of y for given x=2 & z=4 and analyze the output
// a. y=x++ +++x

#include<stdio.h>
int main(){
    int x=2, y=4,a,b,c,d,e,f,g;
    a=x++ + ++x;
    b=++x + ++x;
    c=++x + ++x + ++x;
    d=x>y;
    e=x>y? x:y;
    f=x&y;
    g=x>>2 + y<<1;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("The value of c is : %d\n",c);
    printf("The value of d is : %d\n",d);
    printf("The value of e is : %d\n",e);
    printf("The value of f is : %d\n",f);
    printf("The value of g is : %d\n",g);
    return 0;
}