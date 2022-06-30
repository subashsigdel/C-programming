// write a program in c to display the n terms of following series 1+1/2+1/3+1/4.....1/n terms
#include<stdio.h>
int main(){
    int n,i;
    float series;
    printf("enter the n number of series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        series=series+(1/i);
        
    }
            printf("%f\n",series);

    return 0 ;
   
}