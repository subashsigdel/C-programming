// write a program to calculate the marks and percentage of student taking user input using array
#include<stdio.h>
int main (){
    int marks[4],i,sum=0;
    float percantage;

    printf("Enter 4 marks to find the sum and percentage \n ");
    for(i=0;i<5;i++){
        scanf("%d",marks[i]);
    }
    for (i=0;i<5;i++){
        sum=sum+marks[i];
    }
    percantage=sum/4;
    scanf("%d",percantage);
    return 0;
}