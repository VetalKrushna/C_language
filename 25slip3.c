//Write a function in C' to check if a number is prime. Use this function to 
//display the first 20 prime numbers.
#include<stdio.h>
int main()
{
  void prime(int n);
  int n;
  for(n=1;n<=20;n++)
  {
    prime(n);
  }
}   
   void prime(int n)
   {
    int f=0,i;
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      f=1;
    }
    if(f==0)
    printf("%d\t",n);
   }