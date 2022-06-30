#include <stdio.h>
int add(int,int);//function prototype
void main()
{
    int x=5,y=4,z;
    // add(x,y);//function call
    z=add(x,y);
    printf("the sum is %d\n",z);
    printf("finished \n");
}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;   
}