#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[20];
    printf("enter your name : ");
    fgets(name, sizeof(name), stdin);
    printf("your name is : ");
    puts(name);
}
