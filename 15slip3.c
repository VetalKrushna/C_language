//Write a'C' program to accept two matrices of sizem mxn and calculate Addition of Matrices.
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,n,m;
    printf("enter m x n matrix:"); scanf("%d%d",&m,&n);
    printf("enter matrix a:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix b:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
  
    printf("addition matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
}