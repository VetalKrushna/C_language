// Write a ‘C’ program to accept an array and a number and count 
//occurrence of a number in the array
#include<stdio.h>
int main()
{
    int a[20],i,c=0,n,num;
    printf("enter array limit:");
    scanf("%d",&n);
    printf("eneter array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no for count:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
        c=c+1;
        
        }
    }
    printf("no found %d time",c);
}