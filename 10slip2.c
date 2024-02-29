//Write a'C' program to accept n integers in an array and display the
//array in reverse order.
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter limit:"); scanf("%d",&n);
    printf("enter no");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   
    printf("array in reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
