//Write a ‘C’ program to find the largest and smallest number from an array of n integers. 
#include<stdio.h>
int main()
{
    int a[50],i,s=0,l=0,n;
    printf("enter array limit:");
    scanf("%d",&n);
    printf("enter array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(s>a[i])
        s=a[i];
        if(l<a[i])
        l=a[i];
    }
    printf("smallest no in array=%d\n",s);
    printf("largest no in array=%d\n",l);
}