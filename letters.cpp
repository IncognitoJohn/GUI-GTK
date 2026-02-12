//this is a new assignment wish me luck as I trying to revise.
#include<stdio.h>
#include<unistd.h>
int main()
{
    char letters;
    printf ("enter a character:\n");
    scanf("%c",&letters);
    printf("the ASCII charater will soon be displayed: \n");
    sleep(5);
    printf("%d",letters);
    return 0;
}