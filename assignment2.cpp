//this is the second or third one
#include <stdio.h>
#include <unistd.h>
int main()
{
    char name[50];
    printf("enter your name:\n");
    scanf("%c",&name);
    printf("the first character is: %c",name[0]);
}