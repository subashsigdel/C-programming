# include<stdio.h>
void fun(int ,int);
int x=5 , y=7;
void main(){
    fun(x,y);
    printf("X:%d,Y:%d",x,y);

}

void fun(int x,int y){
    x=7 ,y=5;
    printf("X:%d,Y:%d",x,y);

}