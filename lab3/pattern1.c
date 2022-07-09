// write a program to make a pattern 
// *
// * *
// * * *
// * * * *
// * * * * *

#include<stdio.h>
int main()
{
  int i,j;

  // outer for loop to represent rows
  for(i=1;i<=5;i++)
  {
    // inner for loop to represent columns
    for(j=1;j<=i;j++)
    {
      printf("* ");
    }

    // new line
    printf("\n");
  }

  return 0;
}