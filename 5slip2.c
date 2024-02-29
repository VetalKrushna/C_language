//. Write a ‘C’ program to display all numbers between two given
//numbers. 
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter first no :");
    scanf("%d",&a);
    printf("Enter second no :");
    scanf("%d",&b);
    if (a>b)
    {
        n=a; a=b; b=n;
    }printf("% to %d are :\n",a,b);
}