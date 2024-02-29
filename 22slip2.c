//Write a 'C' function to calculate the sum of digits of a number. Use  this function in main to 
//accept a number and print sum of its digits.
#include<stdio.h>
int main()
{
    int sum_digit(int n);
    int n,s;
    printf("enter no:"); scanf("%d",&n);
    s=sum_digit(n);
    printf("\n sum of digit:%d",s);
}
 int sum_digit(int n)
 {
    int i,d,s=0;
    for(i=1;i<=n;i++)
    {
         s=s+i;
    } return s;
 }