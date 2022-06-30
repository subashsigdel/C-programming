#include<stdio.h>
int main()
{
int n, i, j;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i = n; i <= n; i++)
{
for(j = i; j <= i; j++)
{
printf("%d",i);
}
printf("\n");
}
return 0;
}