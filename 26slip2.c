//Write a ‘C’ function isPrime, which accepts an integer number as parameter and returns 1 if 
//the number is prime and 0 otherwise. Use this function to check if a number is prime. 
#include<stdio.h>
int main()
{
    int n,a;
    int isprime(int n);
    printf("enter no:"); scanf("%d",&n);
    a=isprime(n);
    if(a==1)
    printf("prime no");
    else
    printf("not prime no");
}
  int isprime(int n)
  {
    int i,p=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        p=1;break;
    }
    
    if(p==0)
    return 1;
    else return 0;
  }