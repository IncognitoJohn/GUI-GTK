//
// Created by CRYPTNITORIAN on 11/02/2026.
//
//
// Created by CRYPTNITORIAN on 11/02/2026.
//
#include<stdio.h>
int main()
{
    printf("this is a test to print out all odd numbers from a reange specified by the user");
    int a,i;
    printf("enter your max number");
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        if (i%2 != 0) {
            printf("%d",&i);
        else
            continue;
        }
    }
    return 0;
}