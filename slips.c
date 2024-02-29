

#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n;
    printf("enter array limit:");scanf("%d",&n);
    printf("enter no:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array in sorted order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   
}