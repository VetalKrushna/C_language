//Write a ‘C’ program to display n terms of the Fibonacci series
#include<stdio.h>
int main()
{
    int i,f=0,s=1,t,n;
    printf("enter limit :");
    scanf("%d",&n);
    
    printf("\n fibo series=%d\t%d",f,s);
    for(i=1;i<n;i++)
    {
        t=f+s; 
        printf("\t %d ",t);
        f=s; s=t;
    }
}