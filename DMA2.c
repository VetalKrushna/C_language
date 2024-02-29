#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a[10],j,i,m,n,s=0;
    printf("enter row & cols:");
    scanf("%d%d",&m,&n);
    printf("enter matrix:\n");
    for(i=0;i<m;i++)
    {
     a[i]=(int *)malloc(n*sizeof(int));
     for(j=0;j<n;j++)
       scanf("%d",a[i]+j);
    }
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
      {
       printf("%d ",*(*(a+i)+j));
      } 
       printf("\n");
    }    
}