#include<stdio.h>
int main()
{
    __int16 *a[5],i,n=5;
    printf("enter no:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Reverse no\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(a+i));
    }
    

}