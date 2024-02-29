//Write a C' program to copy one matrix to another. Display the copied
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("enter matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
  
    printf("copied matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             b[i][j]=a[i][j];
            printf("%d\t",b[i][j]);
        }printf("\n");
    }
}