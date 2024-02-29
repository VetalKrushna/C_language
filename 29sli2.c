//Write a recursive C function to calculate sum of digits of a
//number. Example :Input :345 Output :12

#include<stdio.h>
int main()
{
    void sum_of_digit(int n);
   int n,s=0,d;
    printf("enter no:");
    scanf("%d",&n);
    sum_of_digit(n);
}
    void sum_of_digit(int n)
    {
        int s=0,d;
    while(n>0)
    {
        d=n%10; s=s+d; n=n/10;
    }
   
    printf("\n sum of digit=%d",s);
   }
