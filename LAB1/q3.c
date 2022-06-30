// write a progrsm to swap the variable with and without using thisr variable
#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap without using third variable a=%d b=%d",a,b);   

// using third variable
int temp = a;
a = b;
b = temp;

printf("\nAfter Swapping using third variable: x = %d, y = %d", a, b);
return 0;  
}  