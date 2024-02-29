//Write a ‘C’ program to accept two integers from the user and
//interchange them. Display the interchanged numbers. 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no :");
    scanf("%d",&a);
    printf("Enter second no :");
    scanf("%d",&b);
    c=a; a=b; b=c;
    printf(" \n first no :%d",a);
    printf("\n second no :%d",b);
}