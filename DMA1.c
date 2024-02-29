#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,j,i,n,s=0;
    printf("enter limit:");
    scanf("%d",&n);
    b=(int *)calloc(n,sizeof(int));
    a=(int *)calloc(n,sizeof(int));
    printf("enter n no:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(j=0,i=0;i<n;i++)
    {
     if(a[i]!=0)
     b[j++]=a[i];
    }
    for(i=0;i<j;i++)
     s=s+b[i];   
     printf("sum=%d",s);
     printf("  avg=%d",s/j);
}