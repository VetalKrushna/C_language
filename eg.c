#include<stdio.h>
#include<math.h>

int main()
{
    void max(int a,int b);//declare
   int a,b;
    printf("enter a :");scanf("%d",&a);    printf("enter b :");scanf("%d",&b);
   max(a,b); //call
}
  void max(int a,int b)    //defination
{
   if(a>b)
   printf("\n %d is max",a);
   else
   printf("\n %d is max",b);
   
}