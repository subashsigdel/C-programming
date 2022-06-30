// write a program to calculate the simple and compound intrest 
#include<stdio.h>
#include<math.h>

int main()
{
	 float p,t,r,simple_intrest,compound_intrest;

	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
	
	 /* Calculating simple interest */
	 simple_intrest = (p * t * r)/100;
	
	 /* Calculating compound interest */
	 compound_intrest = p * (pow((1+r/100),t)-1);
	
	 printf("Simple Interest = %f\n", simple_intrest);
	 printf("Compound Interest = %f", compound_intrest);
	 return 0;
}