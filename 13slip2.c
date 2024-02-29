//Write a C' progam to display multiplication tables of n having 10 multiples.

#include<stdio.h>
int main()
{
    int n,i,m=1;
    printf("enter an interger:"); scanf("%d",&n);
        printf("multiplication table:\n");
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d\n",m);
    }
}