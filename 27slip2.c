//Write a ‘C’ program to accept real number x and integer n and
//calculate the sum of first n terms of the series x+ 3x+5x+7x+… 
#include<stdio.h>
int main()
{
    int i,n,x,s=0,t=1;
    printf("enter value of x and n:");scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        s=s+t*x;t=t+2;
    } printf("cum of series=%d",s);
}