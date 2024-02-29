//Write a'C' program to accept a matrix of size mxn and display transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("enter m x n matrix :");
    scanf("%d%d",&m,&n);
    printf("enter matrix :");
    for(i=0;i<m;i++)
    {  for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("\n transpose of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }printf("\n");
    }
}