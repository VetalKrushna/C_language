#include<stdio.h>
int main()
{
    int a[100],i,j,temp=0,n,num;
    printf("enter array limit:");scanf("%d",&n);
    printf("enter no:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no for search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
       if(a[i]==num)
       temp++;
    }
 
  printf("count=%d",temp);
  
}