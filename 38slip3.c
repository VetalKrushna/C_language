//Write a'C' program to accept two matrices and multiply them.
#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],c[10][10],m,n;
    printf("enter mXn:");scanf("%d%d",&m,&n);
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

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\nmultiplication of matrix=\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        { 
            printf("%d\t",c[i][j]);
        }
         printf("\n");
    }
}