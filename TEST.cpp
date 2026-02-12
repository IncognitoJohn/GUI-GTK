//
// Created by CRYPTNITORIAN on 11/02/2026.
////
// Created by CRYPTNITORIAN on 11/02/2026.
//
//
// Created by CRYPTNITORIAN on 11/02/2026.
//
#include<stdio.h>
void search(int a[],int key,int n) {
    int i,pos,flag;
for (i=0;i<=n;i++)
    {
    if ( a[i]==key) {
        pos=i+1;
        flag=1;
    }
    break;

}
    if (flag ==1)
    printf("the number is found at position %d ",pos);
    else
        printf("the number is not  found ");


}
int main()
{
    int a[20],n ,i,key;
    printf("enter your number of element:");
    scanf("%d",&n);

    printf("enter %d elements: \n",n);
    for (i=0; i<n ; i++)
        {
        scanf("%d",&a[i]);
    }

    printf("enter element you want to search for");
    scanf("%d",&key);
    search(a,key,n);

}