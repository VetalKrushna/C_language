//ii. Write a C' program to calculate the factorial ofa number using function.
#include<stdio.h>
int main()
{
    int fact(int n);
    int n;
    printf("enter no:");
    scanf("%d",&n);
    fact(n);
}
 int fact(int n)
 {
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial=%d",f);
 }