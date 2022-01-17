/*write a program to read your name and adress and display it in output screen*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[20];
    char adress[20];
    printf("enter your name :");
    scanf(" %s", name);
    printf("enter your adress : ");
    scanf("%s", adress);
    printf("your name is %s\n ", name);
    printf("your adress is %s ", adress);
    return 0;
}
