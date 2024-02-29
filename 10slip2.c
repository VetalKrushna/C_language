/*//Write a'C' program to accept n integers in an array and display the
//array in reverse order.
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter limit:"); scanf("%d",&n);
    printf("enter no");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   
    printf("array in reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
*/
#include<stdio.h>
int main()
{
    int isprime(int n);
    int n;
    isprime(n);
}
 int isprime(int n)
 {
    int i,f=1;
    for(i=100;i<=500;i++)
    {
        if(n%i==0)
        { f=0; }
   
    if(f==1)
    printf("prime");
    else printf("not prime");
 }}