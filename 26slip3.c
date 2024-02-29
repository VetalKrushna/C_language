//Write a C' program to check if a nXn matrix is symmetric.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,f=0;
    printf("enter mxn matrix:");
    scanf("%d%d",&m,&n);
    printf("enter matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]!=a[j][i])
           f=1;
        }
    }
    
    if(f==0)
    printf("symmentri");
    else printf("not symm");
}