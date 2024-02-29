//Write a ‘C’ program to find maximum of two numbers. 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two nos :");
    scanf("%d%d",&a,&b);
    if(a>b) printf("%d is maximum no \n",a);
    else printf("%d is maximum no \n",b);
}