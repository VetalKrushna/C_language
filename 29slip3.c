//Write a ‘C’ function to calculate x^y Use this function to calculate the sum of first n terms of the series
// x + x^3/3 + x^5/5 + ... 
#include<stdio.h>
#include<math.h>
int main()
{
    void sum(int n,int x);
    int x,n;
    printf("enter value of x");scanf("%d",&x);
    printf("enter the limit");scanf("%d",&n);
    sum(n,x);
}
    void sum(int n,int x)
    {
        int i, y=1,s=0;
        for(i=0;i<=n;i++)
        {
             y=y+2
            s=s+pow(x,y)/y;
            
        }
        printf("sum of series=%d",s);
    }