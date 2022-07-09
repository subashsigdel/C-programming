// write a program to find diameter circumference and area of circle


/* C Program to find Diameter, Circumference, and Area Of a Circle */
 
#include<stdio.h>
 
#define PI 3.14
 
int main()
{
  float radius, area, circumference, diameter;
 
  printf("\n Please Enter the radius of a circle : ");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * PI * radius;
  area = PI * radius * radius; 
 
  printf("\n Diameter Of a Circle = %.2f\n", diameter);
  printf("\n Circumference Of a Circle = %.2f\n", circumference);
  printf("\n Area Of a Circle = %.2f\n", area);
 
  return 0;
}