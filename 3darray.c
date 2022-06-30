#include<stdio.h>
int main(){
    int test[2][2]={{2,5},{4,0},{9,1}},i,j;
    for (i=0;i<3;++i)
    {
        for(j=0;j<2;++j)
        {
            printf("test[%d][%d]=[%d];i,j,test[i][j]");
        }
    }
    return 0;
}