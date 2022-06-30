#include<stdio.h>
int fibonacii();
int main(){
    int n ,i;
    printf("enter your number : ");
    scanf("%d",&n);
    printf("fibbonacciseries\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",fibonacii(i));
    }
    return 0;
}
int fibonacii(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibonacii(n-1)+fibonacii(n-2));

}