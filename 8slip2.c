//Writea function in C' to calculate sum of digits of an integer. Use
//this function in main

#include<stdio.h>
int main()
{
    int sum_digit(int n);
    int n;
    printf("enter no:"); scanf("%d",&n);
    sum_digit(n);
}
 int sum_digit(int n)
 {
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum of digit=%d",s);
 }