
#include<stdio.h>
int main()
{
    int a[100],i,j,c,n;
    printf("enter array limit:");
    scanf("%d",&n);
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
           { c=a[i];
            a[i]=a[j];
            a[j]=c;
           }
        }
    }

   printf("array in order:");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);

    }
}